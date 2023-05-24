#=========================================================================
# router_test
#=========================================================================

import pytest

from pymtl3 import *
from pymtl3.stdlib.test_utils import run_test_vector_sim
from Router.routerRTL import routerTestHarnessVRTL

# Router Test Bench Behavior: 

# Consider a 1 to 2 demux where sel=0.
# In this case, the output of the demux is two arrays representing the two
# output ports. out_val = [[0],[1]]. When the test harness puts these values
# into one binary number, the value if port zero is the MSB (this is due to the 
# behavior of my wrapping loop). So, [[0],[1]] is 0x2 for the demux. 
# The ready input is the opposite. 0x1 is [[0],[1]]. Keep this in mind when observing the test cases. 


def test_one( cmdline_opts ):
  dut = routerTestHarnessVRTL(p_nbits=4, p_noutputs=2)

  run_test_vector_sim(dut,[
    ('valid ready message_in valid_out* ready_out* message_out*'),
    [0x1, 0x1, 0x7, 0x2, 0x1, 0x3f],
    [0x1, 0x2, 0xf, 0x1, 0x1, 0x3f],
    [0x1, 0x0, 0xf, 0x0, 0x0, 0x3f],

  ],cmdline_opts)


def test_two( cmdline_opts ):
  dut = routerTestHarnessVRTL(p_nbits=4, p_noutputs=4)

  run_test_vector_sim(dut,[
    ('valid ready message_in valid_out* ready_out* message_out*'),
    [0x1, 0x1, 0x2, 0x8, 0x1, 0xaa],
    [0x1, 0x2, 0x6, 0x4, 0x1, 0xaa],
    [0x1, 0x4, 0x8, 0x2, 0x1, 0x00],
    [0x1, 0x8, 0xf, 0x1, 0x1, 0xff],
    [0x1, 0x0, 0x8, 0x0, 0x0, 0x0],
  ],cmdline_opts)



def test_three( cmdline_opts ):
  dut = routerTestHarnessVRTL(p_nbits=40, p_noutputs=8)

  # if the wrong ready is selected, valid_out will be zero. 
  # [0x1, 0x1, 0x2FFFFFFFFF, 0x80, 0x1, 0x1FFFFFFFFF] will have valid_out as zero bc ready in does not correspond to the
  # MSB of input. 

  run_test_vector_sim(dut,[
    ('valid ready message_in valid_out* ready_out* message_out*'),
    [0x1, 0x1, 0x1FFFFFFFFF, 0x80, 0x1, 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF],
    [0x1, 0x2, 0x3FFFFFFFFF, 0x40, 0x1, 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF],
    [0x1, 0x4, 0x5FFFFFFFFF, 0x20, 0x1, 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF],
    [0x1, 0x8, 0x7FFFFFFFFF, 0x10, 0x1, 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF],
    [0x1, 0x10, 0x9FFFFFFFFF, 0x8, 0x1, 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF],
    [0x1, 0x20, 0xbFFFFFFFFF, 0x4, 0x1, 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF],
    [0x1, 0x40, 0xdFFFFFFFFF, 0x2, 0x1, 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF],
    [0x1, 0x80, 0xFFFFFFFFFF, 0x1, 0x1, 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF],
    [0x1, 0x0, 0xFFFFFFFFFF, 0x0, 0x0, 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF],
  ],cmdline_opts)


  #Test where select!=ready in which case valid=0

def test_four( cmdline_opts ):
  dut = routerTestHarnessVRTL(p_nbits=4, p_noutputs=2)

  run_test_vector_sim(dut,[
    ('valid ready message_in valid_out* ready_out* message_out*'),
    [0x1, 0x1, 0xf, 0x0, 0x0, 0x3f],
    [0x1, 0x2, 0x7, 0x0, 0x0, 0x3f],

  ],cmdline_opts)