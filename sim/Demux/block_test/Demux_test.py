#=========================================================================
# parametricDemux_test
#=========================================================================

import pytest

from pymtl3 import *
from pymtl3.stdlib.test_utils import run_test_vector_sim

from Demux.parametricDemuxRTL import parametricDemuxTestHarnessVRTL

def test_one( cmdline_opts ):
  dut = parametricDemuxTestHarnessVRTL(p_nbits=1, p_noutputs=2)

  # 1 to 2 demux with 1 bit high input. 
  # in_val = 1 and sel=1 means output port 2 gets routed 1. flattened_out_val is a concatonated binary number
  # of all the output port values. So, if port 1 is high, and port two is 0, flattened_out_val = 2 (10 in binary)
  #if port one is zero, and port two is 1, flattened_out_val = 1 (01 in binary)
  run_test_vector_sim(dut,[
    ('in_val sel flattened_out_val*'),
    [0x1, 0x1, 0x1],
    [0x1, 0x0, 0x2]
  ],cmdline_opts)


#Same priciple as previous mux. If port 1 selected,flattened_out_val = 8 (1000 in binary)

def test_two( cmdline_opts ):
  dut = parametricDemuxTestHarnessVRTL(p_nbits=1, p_noutputs=4)

  run_test_vector_sim(dut,[
    ('in_val sel flattened_out_val*'),
    [0x1, 0x0, 0x8],
    [0x1, 0x1, 0x4], 
    [0x1, 0x2, 0x2], 
    [0x1, 0x3, 0x1]
  ],cmdline_opts)


#this is a demux that takes in a 2 bit input and routes it to one of two ports (other port gets 0)
#So, say in_val = 11 and the sel = 0, then port 1 = 11, port 2 = 00. This will result in 
#flattened_out_val = 1100 or c in hex. If in_val = 11 and the sel = 1, then port 1 = 00, port 2 = 11. 
#Here, flattened_out_val = 0011 or 3

def test_three( cmdline_opts ):
  dut = parametricDemuxTestHarnessVRTL(p_nbits=2, p_noutputs=2)

  run_test_vector_sim(dut,[
    ('in_val sel flattened_out_val*'),
    [0x3, 0x0, 0xc],
    [0x3, 0x1, 0x3],

  ],cmdline_opts)

# 2 bit input 4 bit output demux

def test_four( cmdline_opts ):
  dut = parametricDemuxTestHarnessVRTL(p_nbits=2, p_noutputs=4)

  run_test_vector_sim(dut,[
    ('in_val sel flattened_out_val*'),
    [0x3, 0x0, 0xc0],
    [0x3, 0x1, 0x30],
    [0x3, 0x2, 0xc],
    [0x3, 0x3, 0x3],
  ],cmdline_opts)

# test with large input value 

def test_five( cmdline_opts ):
  dut = parametricDemuxTestHarnessVRTL(p_nbits=17, p_noutputs=16)

  run_test_vector_sim(dut,[
    ('in_val sel flattened_out_val*'),
    [0x1ffff, 0x0, 0xFFFF8000000000000000000000000000000000000000000000000000000000000000],
    [0x1ffff, 0x1, 0x7FFFC00000000000000000000000000000000000000000000000000000000000],
    [0x1ffff, 0x2, 0x3FFFE0000000000000000000000000000000000000000000000000000000],
    [0x1ffff, 0x3, 0x1FFFF000000000000000000000000000000000000000000000000000],
    [0x1ffff, 0x4, 0xFFFF80000000000000000000000000000000000000000000000],
    [0x1ffff, 0x5, 0x7FFFC000000000000000000000000000000000000000000],
    [0x1ffff, 0x6, 0x3FFFE00000000000000000000000000000000000000],
    [0x1ffff, 0x7, 0x1FFFF0000000000000000000000000000000000],
    [0x1ffff, 0x8, 0xFFFF800000000000000000000000000000],
    [0x1ffff, 0x9, 0x7FFFC0000000000000000000000000],
    [0x1ffff, 0xa, 0x3FFFE000000000000000000000],
    [0x1ffff, 0xb, 0x1ffff00000000000000000],
    [0x1ffff, 0xc, 0xffff8000000000000],
    [0x1ffff, 0xd, 0x7fffc00000000],
    [0x1ffff, 0xe, 0x3fffe0000],
    [0x1ffff, 0xf, 0x1ffff],
  ],cmdline_opts)
