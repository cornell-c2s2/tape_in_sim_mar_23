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
  

