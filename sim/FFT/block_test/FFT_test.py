#=========================================================================
# IntMulFixedLatRTL_test
#=========================================================================

import pytest
import random

random.seed(0xdeadbeef)

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim
from FFT.FFTTestHarnessRTL import FFTTestHarnessVRTL
from .FixedPt_FFT import fixed_point_fft
from .FixedPt_FFT import cooley_tukey_fft_recursive
from fxpmath import Fxp
import numpy as np
import math


#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------


class TestHarness( Component ):

  def construct( s, fft, BIT_WIDTH = 32, DECIMAL_PT = 16, N_SAMPLES = 8):

    # Instantiate models

    s.src  = stream.SourceRTL( mk_bits(BIT_WIDTH) )
    s.sink = stream.SinkRTL  ( mk_bits(BIT_WIDTH), cmp_fn=lambda a, b: abs(a.int() - b.int()) <= 4 )
    s.fft = fft

    # Connect

    s.src.send  //= s.fft.recv
    s.fft.send //= s.sink.recv

  def done( s ):
    return s.src.done() and s.sink.done()

  def line_trace( s ):
    return s.src.line_trace() + " > " + s.fft.line_trace() + " > " + s.sink.line_trace()

def packed_msg(array, bitwidth, fft_size): #Array of ints
#  input = Bits(1)
#  bit_convert = mk_bits(bitwidth)
#  output = input
#  for i in range(len(array)):

#    output = concat( bit_convert(array[i]), output )
  
#  output = output[1:bitwidth * fft_size + 1]
  
  return array[:fft_size]
  

"""Creates a singular FFT call and resposne """
def fft_call_response(array_of_sample_integers, bitwidth, fft_size):
  array = []

  
  output_array_unpacked = fixed_point_fft(BIT_WIDTH=bitwidth,DECIMAL_PT=16,SIZE_FFT=fft_size,x=array_of_sample_integers)
  input_array  = []
  output_array = []


  for n in range(fft_size):
    input_array.append(array_of_sample_integers[n])
    output_array.append(output_array_unpacked[n])
  
  return revchunk(packed_msg(input_array, bitwidth, fft_size) + packed_msg(output_array, bitwidth, fft_size), fft_size)


#----------------------------------------------------------------------
# Test Case: small positive * positive
#----------------------------------------------------------------------

def two_point_dc(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00010000, 0x00000000, 0x00020000
  ]

def two_point_dc_generated(bits, fft_size, frac_bits):
  # print([Fxp( 1, signed = True, n_word = bits, n_frac = frac_bits ),Fxp( 1, signed = True, n_word = bits, n_frac = frac_bits )])
  return fft_call_response([1 * (2**frac_bits),1 * (2**frac_bits)], bits, fft_size)


def two_point_dc_generated_negative(bits, fft_size, frac_bits):

  return fft_call_response([1 * (2**frac_bits),1 * (2**frac_bits)], bits, fft_size)


def eight_point_dc(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00080000
  ] 

def eight_point_offset_sine(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00000000, 0x00010000, 0x00000000, 0x00010000, 0x00000000, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xfffc0000, 0x00000000, 0x00000000, 0x00000000, 0x00040000
  ]


##################################################################################################################################################################
def eight_point_ones_alt_twos(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00020000, 0x00010000, 0x00020000, 0x00010000, 0x00020000, 0x00010000, 0x00020000, 0x00000000, 0x00000000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x000C0000
  ]

def eight_point_one_to_eight(bits, fft_size, frac_bits):
  return [
  0x00080000, 0x00070000, 0x00060000, 0x00050000, 0x00040000, 0x00030000, 0x00020000, 0x00010000, 0xfffc0000, 0xfffc0000, 0xfffc0000, 0xfffc0000, 0xfffc0000, 0xfffc0000, 0xfffc0000, 0x00240000
  ]
  
def eight_point_assorted(bits, fft_size, frac_bits):
  return [
  0xfffc0000, 0x00000000, 0x00030000, 0x00000000, 0x00050000, 0xffff0000, 0x00010000, 0x00020000, 0xfff70000, 0x00030000, 0x000d0000, 0xfffc0000, 0x000d0000, 0x00030000, 0xfff70000, 0x00060000
  ]

def four_point_assorted(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00000000, 0x00010000, 0x00000000, 0x00000000, 0xfffe0000, 0x00000000, 0x00020000
  ]

def four_point_offset_sine(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00020000, 0x00010000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00060000
  ]

def four_point_non_sine(bits, fft_size, frac_bits):
  return [
  0x00020000, 0x00020000, 0x00030000, 0x00020000, 0x00000000, 0xFFFF0000, 0x00000000, 0x00090000
  ]

def four_point_dc(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00040000
  ]

def four_point_one_to_four(bits, fft_size, frac_bits):
  return [
  0x00040000, 0x00030000, 0x00020000, 0x00010000, 0xfffe0000, 0xfffe0000, 0xfffe0000, 0x000A0000
  ]

def sixteen_point_dc(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00100000
  ]
def thirtytwo_point_dc(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00200000
  ]

def n_point_dc(bits, fft_size, frac_bits):
	return [1 << frac_bits]*fft_size + [0] *(fft_size - 1) + [fft_size << frac_bits]

######################################################################################################################################################################
def two_point_two_samples(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00010000, 0x00000000, 0x00020000,
  0x00000000, 0x00010000, 0x00010000, 0x00010000
  ]

def eight_point_two_samples(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00000000, 0x00010000, 0x00000000, 0x00010000, 0x00000000, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xfffc0000, 0x00000000, 0x00000000, 0x00000000, 0x00040000,
  0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00080000
  ] 

def descend_signal(bits, fft_size, frac_bits):
  signal = []
  for i in range(fft_size):
    signal.append((fft_size - i) * (2**frac_bits))
  
  return fft_call_response( signal, bits, fft_size)

def random_signal(bits, fft_size, frac_bits):
  signal = []
  smax = min(2**(bits-1), 20*2**frac_bits)
  for i in range(fft_size):
    signal.append(math.trunc(random.uniform(-smax,smax)))

  

  return fft_call_response( signal, bits, fft_size)


def random_stream(bits, fft_size,frac_bits):

	output = []
	smax = min(2**(bits-1), 20*2**frac_bits)
  
	for a in range(50):

		signal = []
		for i in range(fft_size):
			signal.append(math.trunc(random.uniform(-smax,smax)))

		output += fft_call_response(signal, bits, fft_size)

	return output





#----------------------------------------------------------------------
# Test Case Table
#----------------------------------------------------------------------



test_case_table = mk_test_case_table([
  (                                   "msgs                                       src_delay sink_delay BIT_WIDTH DECIMAL_PT N_SAMPLES"),
  [ "two_point_dc",                    two_point_dc,                              0,        0,         32,        16,       2         ],
  [ "two_point_dc_generated",          two_point_dc_generated,                    0,        0,         32,        16,       2         ],
  [ "two_point_dc_generated_negative", two_point_dc_generated_negative,           0,        0,         32,        16,       2         ],
  [ "eight_point_dc",                  eight_point_dc,                            0,        0,         32,        16,       8         ],
  [ "eight_point_offset_sine",         eight_point_offset_sine,                   0,        0,         32,        16,       8         ],
  [ "two_point_random",                random_signal,                             0,        0,         32,        16,       2         ],
  [ "two_points_random_stream",        random_stream,                             0,        0,         32,        16,       2         ],
  [ "four_point_assorted",             four_point_assorted,                       0,        0,         32,        16,       4         ],
  [ "four_point_offset_sine",          four_point_offset_sine,                    0,        0,         32,        16,       4,        ],
  [ "four_point_non_sine",             four_point_non_sine,                       0,        0,         32,        16,       4,        ], 
  [ "eight_point_random",              random_signal,                             0,        0,         32,        16,       8         ],
  [ "two_point_two_samples",           two_point_two_samples,                     0,        0,         32,        16,       2         ],
  [ "eight_point_two_ops",             eight_point_two_samples,                   0,        0,         32,        16,       8         ],
  [ "eight_point_ones_alt_twos",       eight_point_ones_alt_twos,                 0,        0,         32,        16,       8         ],
  [ "eight_point_one_to_eight",        eight_point_one_to_eight,                  0,        0,         32,        16,       8         ],
  #[ "eight_point_assorted",            eight_point_assorted,                      0,        0,         32,        16,       8         ],
  [ "four_point_dc",                   four_point_dc,                             0,        0,         32,        16,       4         ],
  [ "four_point_one_to_four",          four_point_one_to_four,                    0,        0,         32,        16,       4         ], 
  [ "sixteen_point_dc",                sixteen_point_dc,                          0,        0,         32,        16,       16        ],
  [ "thirtytwo_point_dc",              thirtytwo_point_dc,                        0,        0,         32,        16,       32        ],
  [ "descend_signal_2",                descend_signal,                            0,        0,         32,        16,       2        ],
  [ "descend_signal_4",                descend_signal,                            0,        0,         32,        16,       4        ],
  [ "descend_signal_16",               descend_signal,                            0,        0,         32,        16,       16        ],
	*[
		 [ f"{n}_point_dc_generated",      n_point_dc,                            0,        0,         32,        16,       n        ]
		 for n in [16, 32, 128, 256]
	], 
	*[
		 [ f"{n}_point_{f.__name__}",                f,                           0,        0,         32,        16,       n        ]
		 for n in [16, 32, 128, 256]
		 for f in [random_signal]]
	], 
)

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

# Reverse chunks (reverses endianness for serdes)
def revchunk(l, i):
	return sum(
		[(l[k:k+i])[::-1] for k in range(0, len(l), i)]
	, [])

def chunk(l, i, n, sep):
	return sum(
		[l[k:k+n] for k in range(i, len(l), sep)]
	, [])

def make_signed(i, n):
	if isinstance(i, int):
		return mk_bits(n)(i)
	elif isinstance(i, float):
		return make_signed(int(i), n)
	else:
		return i

@pytest.mark.parametrize( **test_case_table )
def test( request, test_params, cmdline_opts ):

	th = TestHarness( FFTTestHarnessVRTL(test_params.BIT_WIDTH, test_params.DECIMAL_PT,test_params.N_SAMPLES), test_params.BIT_WIDTH, test_params.DECIMAL_PT, test_params.N_SAMPLES )

	msgs = test_params.msgs(test_params.BIT_WIDTH, test_params.N_SAMPLES, test_params.DECIMAL_PT)
	msgs = revchunk(msgs, test_params.N_SAMPLES)
	msgs = [make_signed(m, test_params.BIT_WIDTH) for m in msgs]

	send_msgs = chunk(msgs, 0, test_params.N_SAMPLES, test_params.N_SAMPLES * 2)
	recv_msgs = chunk(msgs, test_params.N_SAMPLES, test_params.N_SAMPLES, test_params.N_SAMPLES * 2)

	print("Expecting", send_msgs, recv_msgs)

	th.set_param("top.src.construct",
	msgs=send_msgs,
	initial_delay=test_params.src_delay+3,
	interval_delay=test_params.src_delay )

	th.set_param("top.sink.construct",
		msgs=recv_msgs,
	initial_delay=test_params.sink_delay+3,
	interval_delay=test_params.sink_delay )

	cmdline_opts["dump_vcd"] = f'FFT_{request.node.name}'

	run_sim( th, cmdline_opts, duts=['fft'] )
