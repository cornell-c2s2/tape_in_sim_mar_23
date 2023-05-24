#=========================================================================
# IntMulFixedLatRTL_test
#=========================================================================

import pytest
import random

random.seed(0xdeadbeef)

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim
from FFT.FFTStageTestHarnessRTL import FFTStageTestHarnessVRTL
from .FixedPt_FFT import fixed_point_fft
from fxpmath import Fxp
import math

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------


class TestHarness( Component ):

  def construct( s, fft, BIT_WIDTH = 32, DECIMAL_PT = 16, N_SAMPLES = 8, STAGE_FFT = 0):

    # Instantiate models

    s.src  = stream.SourceRTL( mk_bits( BIT_WIDTH ) )
    s.sink = stream.SinkRTL  ( mk_bits( BIT_WIDTH ) )
    s.fft = fft

    # Connect

    s.src.send  //= s.fft.recv
    s.fft.send //= s.sink.recv

  def done( s ):
    return s.src.done() and s.sink.done()

  def line_trace( s ):
    return s.src.line_trace() + " > " + s.fft.line_trace() + " > " + s.sink.line_trace()

def packed_msg(array, bitwidth, fft_size): #Array of ints
  input = Bits(1)
  bit_convert = mk_bits(bitwidth)
  output = input
  for i in range(len(array)):

    output = concat( bit_convert(array[i]), output )
  
  output = output[1:bitwidth * fft_size + 1]
  
  return output
  

"""Creates a singular FFT call and resposne """
def fft_stage_call_response(array_of_sample_integers, bitwidth, fft_size, stage):
  array = []
  output_array_unpacked = fixed_point_fft(array_of_sample_integers, fft_size)
  input_array  = []
  output_array = []
  for n in range(fft_size):
    input_array.append(array_of_sample_integers[n])
    output_array.append(output_array_unpacked[n])
  
  array.append(packed_msg(input_array, bitwidth, fft_size))
  array.append(packed_msg(output_array, bitwidth, fft_size))
  
  return array


#----------------------------------------------------------------------
# Test Case: small positive * positive
#----------------------------------------------------------------------

def two_point_dc(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00010000, 0x00000000, 0x00000000,
  0x00000000, 0x00020000, 0x00000000, 0x00000000
  ]

def eight_point_dc(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
  ] 

def eight_point_dc_two(bits, fft_size, frac_bits):
  return [
  0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
  ]

def eight_point_dc_three(bits, fft_size, frac_bits):
  return [
  0x00000000, 0x00000000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00080000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  ]

def eight_point_assorted(bits, fft_size, frac_bits):
  return [
  0x00040000, 0x00050000, 0x00030000, 0x00010000, 0x00000000, 0xFFFF0000, 0x00000000, 0x00020000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00010000, 0x00090000, 0xFFFE0000, 0x00040000, 0xFFFF0000, 0xFFFF0000, 0x00020000, 0x00020000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
  ]

def eight_point_assorted_two(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00090000, 0xFFFE0000, 0x00040000, 0xFFFF0000, 0xFFFF0000, 0x00020000, 0x00020000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0xfffe0000, 0xfffb0000, 0xfffe0000, 0x000d0000, 0x00020000, 0x00030000, 0x00020000, 0x00010000, 0x00010000, 0x00000000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0x00010000, 0x00000000


  ]

def eight_point_assorted_three(bits, fft_size, frac_bits):
  return [
  0xfffe0000, 0xfffb0000, 0xfffe0000, 0x000d0000, 0x00020000, 0x00030000, 0x00020000, 0x00010000, 0x00010000, 0x00000000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0x00010000, 0x00000000,
  0xffffe0f4, 0x00030000, 0x00041f0c, 0xfff40000, 0x00041f0c, 0x00030000, 0xffffe0f4, 0x000e0000, 0xfffe4afc, 0xfffb0000, 0x00004afc, 0x00000000, 0xffffb504, 0x00050000, 0x0001b504, 0x00000000
  ]

def two_point_two_samples(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00020000, 0x00000000, 0x00000000,
  0x00010000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF0000, 0x00010000, 0x00000000, 0x00000000
  ]


def four_point_assorted_one(bits, fft_size, frac_bits):
  return [
  0x00020000, 0x00030000, 0x00020000, 0x00020000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00010000, 0x00050000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
  ]

def four_point_assorted_two(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00050000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0xFFFF0000, 0x00000000, 0x00090000, 0x00010000, 0x00000000, 0xFFFF0000, 0x00000000
  ]


def thirtytwo_point_dc(bits, fft_size, frac_bits):
  return [
  0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 
  0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 
  0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 
  0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 0x00010000, 

  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 

  0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000,
  0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000,
  0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000,
  0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000,
  
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  ] 

def thirtytwo_point_dc_two(bits, fft_size, frac_bits):
  return [
  0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000,
  0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000,
  0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000,
  0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000, 0x00000000, 0x00020000,
  
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

  0x00000000, 0x00000000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00040000,
  0x00000000, 0x00000000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00040000,
  0x00000000, 0x00000000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00040000,
  0x00000000, 0x00000000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00040000,

  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  ]

def thirtytwo_point_dc_three(bits, fft_size, frac_bits):
  return [
  0x00000000, 0x00000000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00040000,
  0x00000000, 0x00000000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00040000,
  0x00000000, 0x00000000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00040000,
  0x00000000, 0x00000000, 0x00000000, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00040000,

  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00080000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00080000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00080000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00080000,

  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  ]

def thirtytwo_point_dc_four(bits, fft_size, frac_bits):
  return [
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00080000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00080000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00080000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00080000,

  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00100000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00100000,

  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  ]

def thirtytwo_point_dc_five(bits, fft_size, frac_bits):
  return [
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00100000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00100000,

  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00200000,

  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  ]


def random_signal(bits, fft_size, frac_bits):
  signal = []
  for i in range(fft_size):
    signal.append( math.trunc(random.uniform(-20,20) * (2**frac_bits)))

  print(fft_stage_call_response( signal, bits, fft_size))

  return fft_stage_call_response( signal, bits, fft_size)



#----------------------------------------------------------------------
# Test Case Table
#----------------------------------------------------------------------



test_case_table = mk_test_case_table([
  (                                    "msgs                                       src_delay sink_delay BIT_WIDTH DECIMAL_PT N_SAMPLES  STAGE_FFT"),
  [ "two_point_dc",                     two_point_dc,                              0,        0,         32,        16,       2 ,        0         ],
  [ "eight_point_dc",                   eight_point_dc,                            0,        0,         32,        16,       8 ,        0         ],
  [ "eight_point_dc_two",               eight_point_dc_two,                        0,        0,         32,        16,       8 ,        1         ],
  [ "eight_point_dc_three",             eight_point_dc_three,                      0,        0,         32,        16,       8 ,        2         ],
  [ "eight_assorted",                   eight_point_assorted,                      0,        0,         32,        16,       8 ,        0         ],
  [ "eight_assorted_two",               eight_point_assorted_two,                  0,        0,         32,        16,       8 ,        1         ],
  [ "eight_assorted_three",             eight_point_assorted_three,                0,        0,         32,        16,       8 ,        2         ],
  [ "two_point_two_samples",			two_point_two_samples,                     0,        0,         32,        16,       2 ,        0         ],
  [ "four_point_assorted_one",			four_point_assorted_one,                   0,        0,         32,        16,       4 ,        0         ],
  [ "four_point_assorted_two",			four_point_assorted_two,                   0,        0,         32,        16,       4 ,        1         ],
  [ "thirtytwo_point_dc",				thirtytwo_point_dc,					   	   0,		 0,			32,		   16,		32 ,		0		  ],
  [ "thirtytwo_point_dc_two",			thirtytwo_point_dc_two,				   	   0,		 0,			32,		   16,		32 ,		1		  ],
  [ "thirtytwo_point_dc_three",			thirtytwo_point_dc_three,			   	   0,		 0,			32,		   16,		32 ,		2		  ],
  [ "thirtytwo_point_dc_four",			thirtytwo_point_dc_four,			   	   0,		 0,			32,		   16,		32 ,		3		  ],
  [ "thirtytwo_point_dc_five",			thirtytwo_point_dc_five,			   	   0,		 0,			32,		   16,		32 ,		4		  ],
])

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

@pytest.mark.parametrize( **test_case_table )
def test( request, test_params, cmdline_opts ):

	th = TestHarness( FFTStageTestHarnessVRTL(test_params.BIT_WIDTH, test_params.DECIMAL_PT,test_params.N_SAMPLES,test_params.STAGE_FFT), test_params.BIT_WIDTH, test_params.DECIMAL_PT, test_params.N_SAMPLES, test_params.STAGE_FFT )

	msgs = test_params.msgs(test_params.BIT_WIDTH, test_params.N_SAMPLES, test_params.DECIMAL_PT)
	msgs = revchunk(msgs, test_params.N_SAMPLES)
	print(chunk(msgs, 0, test_params.N_SAMPLES*2, test_params.N_SAMPLES*4))
	print(chunk(msgs, test_params.N_SAMPLES*2, test_params.N_SAMPLES*2, test_params.N_SAMPLES*4))

	th.set_param("top.src.construct",
		msgs=chunk(msgs, 0, test_params.N_SAMPLES*2, test_params.N_SAMPLES*4),
		initial_delay=test_params.src_delay+3,
		interval_delay=test_params.src_delay )

	th.set_param("top.sink.construct",
		msgs=chunk(msgs, test_params.N_SAMPLES*2, test_params.N_SAMPLES*2, test_params.N_SAMPLES*4),
		initial_delay=test_params.sink_delay+3,
		interval_delay=test_params.sink_delay )

	run_sim( th, cmdline_opts = {
		'dump_textwave':False,
		'dump_vcd': f'FFTStage_{request.node.name}',
		'max_cycles': 10000
	}, duts=['fft'] )
