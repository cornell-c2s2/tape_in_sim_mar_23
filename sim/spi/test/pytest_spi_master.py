#=========================================================================
# IntMulFixedLatRTL_test
#=========================================================================

import pytest
import random

random.seed(0xdeadbeef)

from os import path
from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim
#from ..FFTTestHarnessRTL import FFTTestHarnessVRTL
from ..spi_master_rtl import SPIMasterValRdyVRTL #new

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------


class TestHarness( Component ):

  def construct( s, spi):

    # Instantiate models

    s.src  = stream.SourceRTL( Bits32, [] )
    s.sink = stream.SinkRTL  ( Bits32, [] )
    s.spi = spi

    # Connect

    s.src.send  //= s.spi.recv
    s.spi.send //= s.sink.recv

  def done( s ):
    return s.src.done() and s.sink.done()

  def line_trace( s ):
    return s.src.line_trace() + " > " + s.spi.line_trace() + " > " + s.sink.line_trace()

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

def small_fft(bits, fft_size):
  return [
  0x00010000_00010000, 0x00000000_00020000
  ]

def small_msgs_2(bits, fft_size):
  return [
  0x00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000, 0x00000000_00000000_00000000_00000000_00000000_00000000_00000000_00080000
  ] 

def small_msgs(bits, fft_size):
  return [
  0x00010000_00000000_00010000_00000000_00010000_00000000_00010000_00000000, 0x00000000_00000000_00000000_fffc0000_00000000_00000000_00000000_00040000
  ] 


#----------------------------------------------------------------------
# Test Case Table
#----------------------------------------------------------------------


test_case_table = mk_test_case_table([
  (                        "msgs                src_delay sink_delay BIT_WIDTH DECIMAL_PT N_SAMPLES"),
  [ "spi_test",      small_fft,         0,        0,         32,        16,       2         ],
  [ "small_fft_32_16_2",      small_msgs_2,       0,        0,         32,        16,       8         ],
  [ "small_msgs_32_16_8",     small_msgs,         0,        0,         32,        16,       8         ],

])
#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test( test_params, cmdline_opts ):

  th = TestHarness( SPIMasterValRdyVRTL(test_params.BIT_WIDTH, test_params.DECIMAL_PT,test_params.N_SAMPLES), test_params.BIT_WIDTH, test_params.DECIMAL_PT, test_params.N_SAMPLES )

  th.set_param("top.src.construct",
    msgs=test_params.msgs(test_params.BIT_WIDTH, test_params.DECIMAL_PT)[::2],
    initial_delay=test_params.src_delay+3,
    interval_delay=test_params.src_delay )

  th.set_param("top.sink.construct",
    msgs=test_params.msgs(test_params.BIT_WIDTH, test_params.DECIMAL_PT)[1::2],
    initial_delay=test_params.sink_delay+3,
    interval_delay=test_params.sink_delay )

  run_sim( th, cmdline_opts, duts=['spi'] )