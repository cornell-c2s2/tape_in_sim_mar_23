#=========================================================================
# IntMulFixedLatRTL_test
#=========================================================================

import pytest
import random

# random.seed(0xdeadbeef)

from pymtl3 import *
from pymtl3.passes.PassGroups import DefaultPassGroup
from pymtl3.passes.backends.verilog import *
from pymtl3.stdlib.test_utils import run_sim
from pymtl3.stdlib import stream
from fixedpt import Fixed
from multiplier import HarnessVRTL
from random import randint


# Merge a and b into a larger number
def mk_msg(n, a, b):
	return (a << n) | b;

# Create test parametrization information
def mk_params(execution_number, sequence_lengths, n, d):
	if isinstance(n, int):
		n = (n, n)
	if isinstance(d, int):
		d = (d, d)

	return [
		(j, i, n, d) for i in sequence_lengths
		for j in range(execution_number)
	]

# Test harness for streaming data

class Harness( Component ):
	def construct (s, mult, n):

		s.mult = mult

		s.src = stream.SourceRTL(mk_bits(2*n))

		s.sink = stream.SinkRTL(mk_bits(n))

		s.src.send //= s.mult.recv
		s.mult.send //= s.sink.recv



	def done(s):
		return s.src.done() and s.sink.done()

# return a random fxp value
def rand_fixed(n, d):
	return Fixed(randint(0, (1<<n)-1), 1, n, d, raw=True)

# Initialize a simulatable model
def create_model(n, d):
	model = HarnessVRTL(n, d)

	return Harness(model, n)

@pytest.mark.parametrize('n, d, a, b', [
	(3, 0, 3, 3), # overflow check
	(2, 1, 0.5, -0.5),
	(6, 3, -4, -0.125), #100.000 * 111.111 = 000.100
	(6, 3, 3.875, -0.125), #-0.375
])
def test_edge(n, d, a, b):
	a = Fixed(a, 1, n, d)
	b = Fixed(b, 1, n, d)

	model = create_model(n, d)

	model.set_param("top.src.construct",
		msgs=[mk_msg(n, a.get(), b.get())],
		initial_delay=0,
		interval_delay=0
	)

	model.set_param("top.sink.construct", 
		msgs=[(a * b).resize(None, n, d).get()],
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

@pytest.mark.parametrize('execution_number, sequence_length, n, d', 
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
def test_random(execution_number, sequence_length, n, d): # test individual and sequential multiplications to assure stream system works
	
	n = randint(n[0], n[1])
	d = randint(d[0], min(n-1, d[1])) # decimal bits

	dat = [{'a':rand_fixed(n, d), 'b':rand_fixed(n, d)} for i in range(sequence_length)]
	solns = [(i['a'] * i['b']).resize(None, n, d) for i in dat]

	model = create_model(n, d)

	dat = [mk_msg(n, i['a'].get(), i['b'].get()) for i in dat]

	model.set_param("top.src.construct",
		msgs=dat,
		initial_delay=5,
		interval_delay=5
	)

	model.set_param("top.sink.construct", 
		msgs=[c.get() for c in solns],
		initial_delay=5,
		interval_delay=5
	)

	run_sim(model, cmdline_opts={
		'dump_textwave':False,
		'dump_vcd':f'rand_{execution_number}_{sequence_length}_{n}_{d}',
		'max_cycles':(30+(n+2)*len(dat)) # makes sure the time taken grows linearly with respect to n
	})
