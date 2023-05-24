# -*- coding: utf-8 -*-
# @Author: UnsignedByte
# @Date:   2022-11-24 13:05:57
# @Last Modified by:   UnsignedByte
# @Last Modified time: 2022-12-03 19:48:11

import pytest
import random

# random.seed(0xdeadbeef)

from pymtl3 import *
from pymtl3.passes.PassGroups import DefaultPassGroup
from pymtl3.passes.backends.verilog import *
from pymtl3.stdlib.test_utils import run_sim
from pymtl3.stdlib import stream
from fixedpt import CFixed
from butterfly import HarnessVRTL
from random import randint

# Complex multiplication with fixed precision
def cmul(n, d, a, b):
	ac = (a.real * b.real).resize(None, n, d)
	bc = (a.imag * b.imag).resize(None, n, d)

	c = (
		(a.real + a.imag).resize(None, n, d)
		*
		(b.real + b.imag).resize(None, n, d)
	).resize(None, n, d)

	return CFixed.cast( (
		ac-bc,
		c - ac - bc
	) ).resize(n, d)

def butterfly(n, d, a, b, w):
	t = cmul(n, d, b, w);
	return ((a + t).resize(n, d), (a - t).resize(n, d));

def mk_msg(n, a, b, w):
	return (a[0] << 5*n) | (a[1] << 4*n) | (b[0] << 3*n) | (b[1] << 2*n) | (w[0] << n) | w[1];

def mk_ret(n, c, d):
	return (c[0] << 3*n) | (c[1] << 2*n) | (d[0] << n) | d[1];

# Create test parametrization information
def mk_params(execution_number, sequence_lengths, n, d, m=[0]):
	if isinstance(n, int):
		n = (n, n)
	if isinstance(d, int):
		d = (d, d)

	return [
		(j, i, n, d, k)
		for i in sequence_lengths
		for j in range(execution_number)
		for k in m
	]

# Test harness for streaming data

class Harness( Component ):
	def construct (s, mult, n):

		s.mult = mult

		s.src = stream.SourceRTL(mk_bits(6*n))

		s.sink = stream.SinkRTL(mk_bits(4*n))

		s.src.send //= s.mult.recv
		s.mult.send //= s.sink.recv

	def done(s):
		return s.src.done() and s.sink.done()

# return a random fxp value
def rand_cfixed(n, d):
	return CFixed((randint(0, (1<<n)-1), randint(0, (1<<n)-1)), n, d, raw=True)

# Initialize a simulatable model
def create_model(n, d, mult=0):
	model = HarnessVRTL(n, d, mult)

	return Harness(model, n)

@pytest.mark.parametrize('n, d, a, b, w,', [
	(3, 0, (0, 1), (0, 1), (0, 1)),
	(2, 1, (1, 0), (1, 0), (1, 0)),
	(8, 4, (1, 1), (1, 1), (1, 1)),
	(8, 4, (0.5, 0.5), (0.5, 0.5), (1, 0)),
	(6, 3, (3, 3), (3, 3), (1, 0)), # overflow check
])
def test_edge(n, d, a, b, w):
	a = CFixed(a, n, d)
	b = CFixed(b, n, d)
	w = CFixed(w, n, d)

	model = create_model(n, d)

	model.set_param("top.src.construct",
		msgs=[mk_msg(n, a.get(), b.get(), w.get())],
		initial_delay=0,
		interval_delay=0
	)

	(c, d) = butterfly(n, d, a, b, w);

	model.set_param("top.sink.construct", 
		msgs=[mk_ret(n, c.get(), d.get())],
		initial_delay=0,
		interval_delay=0
	)

	run_sim(model, cmdline_opts={
		'dump_textwave':False,
		'dump_vcd': 'edge',
		'max_cycles':None
	})

	# out = Fixed(int(eval_until_ready(model, a, b)), s, n, d, raw=True)

	# c = (a * b).resize(s, n, d)
	# print("%s * %s = %s, got %s" % (a.bin(dot=True), b.bin(dot=True), c.bin(dot=True), out.bin(dot=True)))
	# assert c.bin() == out.bin()

@pytest.mark.parametrize('execution_number, sequence_length, n, d, m', 
	# Runs tests on smaller number sizes
	mk_params(50, [1, 5, 50], (2, 8), (0, 8))
	+
	# Runs tests on 20 randomly sized fixed point numbers, inputting 1, 5, and 50 numbers to the stream
	mk_params(20, [1, 10, 50, 100], (16, 64), (0, 64))
	+
	# Extensively tests numbers with certain important bit sizes.
	sum(
		[mk_params(1, [1, 100, 1000], n, d)
		for (n, d) in [
			(8, 4),
			(24, 8),
			(32, 24),
			(32, 16),
			(64, 32),
		]], []
	)
)
def test_random(execution_number, sequence_length, n, d, m): # test individual and sequential multiplications to assure stream system works
	assert m == 0
	
	n = randint(n[0], n[1])
	d = randint(d[0], min(n-1, d[1])) # decimal bits

	dat = [(rand_cfixed(n, d), rand_cfixed(n, d), rand_cfixed(n, d)) for i in range(sequence_length)]
	solns = [butterfly(n, d, i[0], i[1], i[2]) for i in dat]

	model = create_model(n, d)

	dat = [mk_msg(n, i[0].get(), i[1].get(), i[2].get()) for i in dat]

	model.set_param("top.src.construct",
		msgs=dat,
		initial_delay=0,
		interval_delay=0
	)

	model.set_param("top.sink.construct", 
		msgs=[mk_ret(n, c.get(), d.get()) for (c, d) in solns],
		initial_delay=0,
		interval_delay=0
	)

	run_sim(model, cmdline_opts={
		'dump_textwave':False,
		'dump_vcd':f'rand_{execution_number}_{sequence_length}_{n}_{d}_m',
		'max_cycles':(30+((n+2)*3+4)*len(dat)) # makes sure the time taken grows linearly with respect to n
	})

@pytest.mark.parametrize('execution_number, sequence_length, n, d, m', 
	# Runs tests on smaller number sizes
	mk_params(50, [1, 50], (2, 8), (0, 8), range(1, 5))
	+
	# Runs tests on 20 randomly sized fixed point numbers, inputting 1, 5, and 50 numbers to the stream
	mk_params(20, [1, 10, 50, 100], (16, 64), (0, 64), range(1, 5))
	+
	# Extensively tests numbers with certain important bit sizes.
	# Uses
	sum(
		[mk_params(1, [1, 100, 1000], n, d, range(1, 5))
		for (n, d) in [
			(8, 4),
			(24, 8),
			(32, 24),
			(32, 16),
			(64, 32),
		]], []
	)
)
def test_optimizations(execution_number, sequence_length, n, d, m): # test modules without multiplication
	n = randint(n[0], n[1])
	d = randint(d[0], min(n-2, d[1])) # decimal bits

	opt_omega = [CFixed(i, n, d) for i in [(1, 0), (-1, 0), (0, 1), (0, -1)]]

	dat = [(rand_cfixed(n, d), rand_cfixed(n, d), rand_cfixed(n, d)) for i in range(sequence_length)]
	solns = [butterfly(n, d, i[0], i[1], opt_omega[m-1]) for i in dat]

	model = create_model(n, d, m)

	dat = [mk_msg(n, i[0].get(), i[1].get(), i[2].get()) for i in dat]

	model.set_param("top.src.construct",
		msgs=dat,
		initial_delay=0,
		interval_delay=0
	)

	model.set_param("top.sink.construct", 
		msgs=[mk_ret(n, c.get(), d.get()) for (c, d) in solns],
		initial_delay=0,
		interval_delay=0
	)

	run_sim(model, cmdline_opts={
		'dump_textwave':False,
		'dump_vcd':f'opt_{execution_number}_{sequence_length}_{n}_{d}_{m}',
		'max_cycles':(30+6*len(dat)) # makes sure the time taken grows constantly
	})
