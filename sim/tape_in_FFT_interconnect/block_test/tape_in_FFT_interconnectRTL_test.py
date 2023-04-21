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
  bypass_inject_master(dut, Bits32(1))