#=========================================================================
# IntMulFixedLatRTL_test
#=========================================================================

import pytest
import random

random.seed(0xdeadbeef)

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim
from CombinationalFFTCrossbar.CombinationalFFTCrossBarTestHarnessRTL import CombinationalFFTCrossbarTestHarnessVRTL

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------


class TestHarness( Component ):

  def construct( s, xbar, BIT_WIDTH, SIZE_FFT, STAGE_FFT ):

    # Instantiate models

    s.src  = stream.SourceRTL( mk_bits(2 * BIT_WIDTH * SIZE_FFT) )
    s.sink = stream.SinkRTL  ( mk_bits(2 * BIT_WIDTH * SIZE_FFT) )
    s.xbar = xbar

    # Connect

    s.src.send  //= s.xbar.recv
    s.xbar.send //= s.sink.recv

  def done( s ):
    return s.src.done() and s.sink.done()

  def line_trace( s ):
    return s.src.line_trace() + " > " + s.xbar.line_trace() + " > " + s.sink.line_trace()

def msg(array, bitwidth,fft_size): #Array of ints
  input = Bits(1)
  bit_convert = mk_bits(bitwidth)
  output = input
  for i in range(len(array)):
    output = concat(output, bit_convert(array[i]))
  
  output = output[0:2 * bitwidth * fft_size]
  
  return output
    
 


#----------------------------------------------------------------------
# Test Case: small positive * positive
#----------------------------------------------------------------------

def small_msgs(bits, fft_size):
  return [
  Bits4(0b0101), Bits4(0b0101),
  Bits4(0b1010), Bits4(0b1010),
  ] 

def small_msgs_4_2_0(bits, fft_size): 
  return [
  msg([15,0,15,0],4,2), msg([15,0,15,0],4,2),
  msg([0,15,0,15],4,2), msg([0,15,0,15],4,2),
  ]

def simple_msgs_6_64_4(bits,fft_size):
  arr     = list(range(32)) + list(range(32)) + list(range(32)) + list(range(32))
  arr_ans = [0,16,1,17,2,18,3,19,4,20,5,21,6,22,7,23,8,24,9,25,10,26,11,27,12,28,13,29,14,30,15,31,0,16,1,17,2,18,3,19,4,20,5,21,6,22,7,23,8,24,9,25,10,26,11,27,12,28,13,29,14,30,15,31,
             0,16,1,17,2,18,3,19,4,20,5,21,6,22,7,23,8,24,9,25,10,26,11,27,12,28,13,29,14,30,15,31,0,16,1,17,2,18,3,19,4,20,5,21,6,22,7,23,8,24,9,25,10,26,11,27,12,28,13,29,14,30,15,31]
  msgs = [
    msg(arr[::-1], bits,  fft_size), msg(arr_ans[::-1], bits,  fft_size),
    msg(arr,       bits,  fft_size), msg(arr_ans,       bits,  fft_size)
    ]
  return msgs

def simple_msgs_6_64_5(bits,fft_size):
  arr     = list(range(64)) + list(range(64))
  arr_ans = [0,32,1,33,2,34,3,35,4,36,5,37,6,38,7,39,8,40,9,41,10,42,11,43,12,44,13,45,14,46,15,47,16,48,17,49,18,50,19,51,20,52,21,53,22,54,23,55,24,56,25,57,26,58,27,59,28,60,29,61,30,62,31,63,
             0,32,1,33,2,34,3,35,4,36,5,37,6,38,7,39,8,40,9,41,10,42,11,43,12,44,13,45,14,46,15,47,16,48,17,49,18,50,19,51,20,52,21,53,22,54,23,55,24,56,25,57,26,58,27,59,28,60,29,61,30,62,31,63]
  msgs = [
    msg(arr[::-1], bits,  fft_size), msg(arr_ans[::-1], bits,  fft_size),
    msg(arr,       bits,  fft_size), msg(arr_ans,       bits,  fft_size)
    ]
  return msgs

def simple_msgs_8_32_4(bits,fft_size):
  arr     = list(range(32)) + list(range(32))
  arr_ans = [0,16,1,17,2,18,3,19,4,20,5,21,6,22,7,23,8,24,9,25,10,26,11,27,12,28,13,29,14,30,15,31,0,16,1,17,2,18,3,19,4,20,5,21,6,22,7,23,8,24,9,25,10,26,11,27,12,28,13,29,14,30,15,31]
  msgs = [
    msg(arr[::-1], bits,  fft_size), msg(arr_ans[::-1], bits,  fft_size),
    msg(arr,       bits,  fft_size), msg(arr_ans,       bits,  fft_size)
    ]

  return msgs

def simple_msgs_8_32_3(bits,  fft_size):
  arr =     [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
  arr_ans = [0,8,1,9,2,10,3,11,4,12,5,13,6,14,7,15,0,8,1,9,2,10,3,11,4,12,5,13,6,14,7,15,0,8,1,9,2,10,3,11,4,12,5,13,6,14,7,15,0,8,1,9,2,10,3,11,4,12,5,13,6,14,7,15]
  msgs = [
    msg(arr[::-1], bits,  fft_size), msg(arr_ans[::-1], bits,  fft_size),
    msg(arr,       bits,  fft_size), msg(arr_ans,       bits,  fft_size)
    ]

  return msgs

def simple_msgs_8_16_3(bits,  fft_size):
  arr =     [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
  arr_ans = [0,8,1,9,2,10,3,11,4,12,5,13,6,14,7,15,0,8,1,9,2,10,3,11,4,12,5,13,6,14,7,15]
  msgs = [
    msg(arr[::-1], bits,  fft_size), msg(arr_ans[::-1], bits,  fft_size),
    msg(arr,       bits,  fft_size), msg(arr_ans,       bits,  fft_size)
    ]

  return msgs

def simple_msgs_8_16_2(bits,  fft_size):
  arr =     [0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7]
  arr_ans = [0,4,1,5,2,6,3,7,0,4,1,5,2,6,3,7,0,4,1,5,2,6,3,7,0,4,1,5,2,6,3,7]
  msgs = [
    msg(arr[::-1], bits,  fft_size), msg(arr_ans[::-1], bits,  fft_size),
    msg(arr,       bits,  fft_size), msg(arr_ans,       bits,  fft_size)
    ]

  return msgs

def simple_msgs_8_8_2(bits,  fft_size):
  arr = [0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7]
  arr_ans = [0,4,1,5,2,6,3,7,0,4,1,5,2,6,3,7]
  msgs = [
    msg(arr[::-1], bits,  fft_size), msg(arr_ans[::-1], bits,  fft_size),
    msg(arr,       bits,  fft_size), msg(arr_ans,       bits,  fft_size)
    ]

  return msgs


def simple_msgs_8_8_1(bits,  fft_size):
  arr = [0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7]
  arr_ans = [0,2,1,3,4,6,5,7,0,2,1,3,4,6,5,7]
  msgs = [
    msg(arr[::-1], bits,  fft_size), msg(arr_ans[::-1], bits,  fft_size),
    msg(arr,       bits,  fft_size), msg(arr_ans,       bits,  fft_size)
    ]

  return msgs

def simple_msgs_8_8_0(bits,  fft_size):
  arr = [25,24,100,16,25,24,100,16,25,24,100,16,25,24,100,16]
  msgs = [
    msg(arr[::-1], bits,  fft_size), msg(arr[::-1], bits,  fft_size),
    msg(arr,       bits,  fft_size), msg(arr,       bits,  fft_size)
    ]
  return msgs


  

#----------------------------------------------------------------------
# Test Case Table
#----------------------------------------------------------------------


test_case_table = mk_test_case_table([
  (                        "msgs                src_delay sink_delay BIT_WIDTH SIZE_FFT STAGE_FFT"),
  [ "small_msgs_1_2_0",     small_msgs,         0,        0,         1,        2,       0         ],
  [ "small_msgs_4_2_0",     small_msgs_4_2_0,   0,        0,         4,        2,       0         ],
  [ "simple_msgs_8_8_0",    simple_msgs_8_8_0,  0,        0,         8,        8,       0         ],
  [ "simple_msgs_8_8_1",    simple_msgs_8_8_1,  0,        0,         8,        8,       1         ],
  [ "simple_msgs_8_8_2",    simple_msgs_8_8_2,  0,        0,         8,        8,       2         ],
  [ "simple_msgs_8_16_2",   simple_msgs_8_16_2, 0,        0,         8,        16,      2         ],
  [ "simple_msgs_8_16_3",   simple_msgs_8_16_3, 0,        0,         8,        16,      3         ],
  [ "simple_msgs_8_32_3",   simple_msgs_8_32_3, 0,        0,         8,        32,      3         ],
  [ "simple_msgs_8_32_4",   simple_msgs_8_32_4, 0,        0,         8,        32,      4         ],
  [ "simple_msgs_6_64_5",   simple_msgs_6_64_5, 0,        0,         6,        64,      5         ],
  [ "simple_msgs_6_64_4",   simple_msgs_6_64_4, 0,        0,         6,        64,      4         ],
])
#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test( test_params, cmdline_opts ):

  th = TestHarness( CombinationalFFTCrossbarTestHarnessVRTL(test_params.BIT_WIDTH, test_params.SIZE_FFT,test_params.STAGE_FFT), test_params.BIT_WIDTH, test_params.SIZE_FFT, test_params.STAGE_FFT )

  th.set_param("top.src.construct",
    msgs=test_params.msgs(test_params.BIT_WIDTH, test_params.SIZE_FFT)[::2],
    initial_delay=test_params.src_delay+3,
    interval_delay=test_params.src_delay )

  th.set_param("top.sink.construct",
    msgs=test_params.msgs(test_params.BIT_WIDTH, test_params.SIZE_FFT)[1::2],
    initial_delay=test_params.sink_delay+3,
    interval_delay=test_params.sink_delay )

  run_sim( th, cmdline_opts, duts=['xbar'] )


