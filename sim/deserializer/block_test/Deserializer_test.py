
#=========================================================================
# IntMulFixedLatRTL_test
#=========================================================================

import pytest
import random

random.seed(0xdeadbeef)

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim
from deserializer.DeserializerTestHarnessRTL import DeserializerTestHarnessVRTL
from fxpmath import Fxp
import numpy as np
import math


#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------


class TestHarness( Component ):

  def construct( s, deserializer, BIT_WIDTH = 32, N_SAMPLES = 8):

    # Instantiate models

    s.src  = stream.SourceRTL( mk_bits(BIT_WIDTH) )
    s.sink = stream.SinkRTL  ( mk_bits(BIT_WIDTH * N_SAMPLES) )
    s.deserializer = deserializer

    # Connect

    s.src.send  //= s.deserializer.recv
    s.deserializer.send //= s.sink.recv

  def done( s ):
    return s.src.done() and s.sink.done()

  def line_trace( s ):
    return s.src.line_trace() + " > " + s.deserializer.line_trace() + " > " + s.sink.line_trace()

def packed_msg(array, bitwidth, size): #Array of ints
  input = Bits(1)
  bit_convert = mk_bits(bitwidth)
  output = input
  for i in range(len(array)):

    output = concat( bit_convert(array[i]), output )
  
  output = output[1:bitwidth * fft_size + 1]
  
  return output

#----------------------------------------------------------------------
# Test Case Table
#----------------------------------------------------------------------

def eight_point():
    return [0x00000008, 0x00000007, 0x00000006, 0x00000005, 0x00000004, 0x00000003, 0x00000002, 0x00000001,
            0x0000000100000002000000030000000400000005000000060000000700000008]

def eight_point_two_transaction():
    return [0x00000008, 0x00000007, 0x00000006, 0x00000005, 0x00000004, 0x00000003, 0x00000002, 0x00000001,
            0x0000000100000002000000030000000400000005000000060000000700000008,
            0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008,
            0x0000000800000007000000060000000500000004000000030000000200000001]

test_case_table = mk_test_case_table([
  (                                   "msgs                                       src_delay sink_delay BIT_WIDTH N_SAMPLES"),
  [ "eight_point",                     eight_point,                               0,        0,         32,       8         ],
  [ "eight_point_two_transaction",     eight_point_two_transaction,               0,        0,         32,       8         ],

])

def separate_transactions(array, N_SAMPLES, input = True):
  
  if(not input): 
    
    return array[N_SAMPLES::N_SAMPLES + 1]

  newarray = []
  if (input): 
    for i in range(0, len(array)):
      if(i % (N_SAMPLES + 1) != N_SAMPLES):
        newarray.append(array[i])
    print(newarray)
    return newarray
#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test( test_params, cmdline_opts ):

  th = TestHarness( DeserializerTestHarnessVRTL(test_params.BIT_WIDTH, test_params.N_SAMPLES), test_params.BIT_WIDTH, test_params.N_SAMPLES )

  msgs = test_params.msgs()

  th.set_param("top.src.construct",
    msgs=separate_transactions(msgs, test_params.N_SAMPLES, True),
    initial_delay=test_params.src_delay+3,
    interval_delay=test_params.src_delay )

  th.set_param("top.sink.construct",
    msgs=separate_transactions(msgs, test_params.N_SAMPLES, False),
    initial_delay=test_params.sink_delay+3,
    interval_delay=test_params.sink_delay )

  run_sim( th, cmdline_opts, duts=['deserializer'] )