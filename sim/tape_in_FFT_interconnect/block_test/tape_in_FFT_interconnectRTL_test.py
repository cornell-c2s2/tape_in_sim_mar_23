#=========================================================================
# tape_in_FFT_interconnectRTL_test
#=========================================================================


import pytest
import random

from fxpmath import Fxp
import numpy as np
import math

from pymtl3 import *
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim, config_model_with_cmdline_opts

from .spi_tc_maker import *

from tape_in_FFT_interconnect.tape_in_FFT_interconnectRTL import FFTInterconnectVRTL

from .coarse_instruction_digraph import *

import random

# To ensure reproducible testing


random.seed(0xdeadbeef)

#-------------------------------------------------------------------------
# Test Case: basic
#-------------------------------------------------------------------------

def test_loopback( cmdline_opts ):


  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  dut.sim_reset()
  loopback(dut)

def test_loopback_random( cmdline_opts ): #Actually works. Nutty - WS
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  dut.sim_reset()

  for i in range(100):
    loopback(dut, Bits32(random.randint(-100000,100000)))

def test_crossbar_bypass( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  dut.sim_reset()

  bypass_injection_minion(dut)
  

def test_crossbar_bypass_random( cmdline_opts ): #Actually works. Nutty - WS
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  dut.sim_reset()

  for i in range(100):
    bypass_injection_minion(dut, Bits32(random.randint(-65000,65000)))

def test_fft_injection_minion_basic( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  dut.sim_reset()

  inarray = [1, 1, 1, 1, 1, 1, 1, 1]
  fft_injection_minion(dut, inarray)


def test_fft_injection_minion_basic_random( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()
  inarray = []
  for i in range(8):
    inarray.append(Bits32(random.randint(-65000,65000)))

  fft_injection_minion(dut, inarray)


def test_master_bypass_injection( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()
  bypass_inject_master(dut, Bits32(0xFFFFFFFF), 32)

def test_master_fft_injection( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()
  array = [1,1,1,1,1,1,1,1]
  fft_inject_master(dut, array, 32)
  array = [2,2,2,2,2,2,2,2]
  fft_inject_master(dut, array, 32)
  

def test_master_bypass_injection( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()
  bypass_inject_master(dut, Bits32(0xFFFFFFFF), 32)

def test_master_fft_injection( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()
  array = [1,1,1,1,1,1,1,1]
  fft_inject_master(dut, array, 32)
  array = [2,2,2,2,2,2,2,2]
  fft_inject_master(dut, array, 32)

def test_master_bypass_injection_twelve_bits_length( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()
  bypass_inject_master(dut, Bits12(0xFFF), 12)

def test_master_bypass_injection_random_bits_length( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()
  bitwidth = random.randint(1,32)
  randinteger = random.randint(0,2**(bitwidth - 2))
  bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)

def test_master_bypass_injection_random_bits_length_stream( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()
  for i in range(100):
    bitwidth = random.randint(1,32)
    randinteger = random.randint(0,2**(bitwidth - 1))
    bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)

def test_master_fft_injection_twelve_bits( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()
  array = [1,1,1,1,1,1,1,1]
  fft_inject_master(dut, array, 12)

def test_master_fft_injection_random_bits_length_stream( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()

  for i in range(10):
    bitwidth = random.randint(1,32)
    array = []
    for j in range(8):
      array.append(random.randint(0,2**(bitwidth - 2)))
    
    fft_inject_master(dut, array, bitwidth)

def test_master_bypass_injection_with_config( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()
  spi_config_master(dut, Bits3(0x5), Bits6(0x20))
  bypass_inject_master(dut, Bits32(0xFFFFFFFF), 32)


def test_master_bypass_injection_with_random_config_stream( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()

  for i in range(100):
    bitwidth = random.randint(1,32)
    randinteger = random.randint(0,2**(bitwidth - 1))
    spi_config_master(dut, Bits3(random.randint(0,7)), Bits6(bitwidth))
    bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)
  


def test_master_fft_injection_random_bits_length_stream_config( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()

  for i in range(10):
    bitwidth = random.randint(1,32)
    array = []
    for j in range(8):
      array.append(random.randint(0,2**(bitwidth - 2)))
    spi_config_master(dut, Bits3(random.randint(0,7)),Bits6(bitwidth) )
    fft_inject_master(dut, array, bitwidth)

def test_random_digraph_stream( cmdline_opts ):
  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()

  for i in range(100):
    test_random_function(dut)