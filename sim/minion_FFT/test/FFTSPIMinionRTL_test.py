#=========================================================================
# FFTSPIMinionRTL_test
#=========================================================================


import pytest
import random

from math import gcd
from fxpmath import Fxp
import numpy as np
import math

from pymtl3 import *
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim, config_model_with_cmdline_opts


from ..FFTSPIMinionRTL import FFTSPIMinionRTL

# To ensure reproducible testing


random.seed(0xdeadbeef)

#-------------------------------------------------------------------------
# Test Case: basic
#-------------------------------------------------------------------------

def test_random_stream( cmdline_opts ):


  dut = FFTSPIMinionRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  dut.sim_reset()
  
  for i in range(500):
     generate_random_stream(dut)
    

def test_random( cmdline_opts ):


  dut = FFTSPIMinionRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  dut.sim_reset()
  
  array = random_signal(32, 8, 16)

#         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2  
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      ) # cs high
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      ) # period before sclk toggle

  for j in range(8):
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )

    print(array[0])
    for i in range(32):
      # 0
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )

    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    0,      0,     '?'    )
    
    


  for i in range(114):
    # wait for FFT to finish
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )

  for j in range(8):
    
  #         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      1,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )

    for i in range(32):
        # 0
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
    
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    
    print(array)
    print(array[1][j * 32 + 31- 0])
    for i in range(32):

    #         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2
      t( dut, 1,    0,   0,   0,   0,    0,      0,     array[1][j * 32 + 31- i]    ) # pull_en = 1
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')


def test_random_multiple( cmdline_opts ):


  dut = FFTSPIMinionRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  dut.sim_reset()
  
  array = random_signal(32, 8, 16)

#         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2  
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      ) # cs high
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      ) # period before sclk toggle

  for j in range(8):
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )

    print(array[0])
    for i in range(32):
      # 0
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )

    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    0,      0,     '?'    )
    
    


  for i in range(114):
    # wait for FFT to finish
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )

  for j in range(8):
    
  #         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      1,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )

    for i in range(32):
        # 0
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
    
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    
    print(array)
    print(array[1][j * 32 + 31- 0])
    for i in range(32):

    #         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2
      t( dut, 1,    0,   0,   0,   0,    0,      0,     array[1][j * 32 + 31- i]    ) # pull_en = 1
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
  array = random_signal(32, 8, 16)

#         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2  
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      ) # cs high
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      ) # period before sclk toggle

  for j in range(8):
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )

    print(array[0])
    for i in range(32):
      # 0
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )

    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    0,      0,     '?'    )
    
    


  for i in range(114):
    # wait for FFT to finish
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )

  for j in range(8):
    
  #         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      1,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )

    for i in range(32):
        # 0
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
    
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    
    print(array)
    print(array[1][j * 32 + 31- 0])
    for i in range(32):

    #         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2
      t( dut, 1,    0,   0,   0,   0,    0,      0,     array[1][j * 32 + 31- i]    ) # pull_en = 1
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
 

# Helper function
def t( dut, cs, sclk, mosi, miso, cs_2, sclk_2, mosi_2, miso_2):

  # Write input value to input port
  dut.spi_min.cs      @= cs
  dut.spi_min.sclk    @= sclk
  dut.spi_min.mosi    @= mosi
  dut.spi_min.cs_2    @= cs_2
  dut.spi_min.sclk_2  @= sclk_2
  dut.spi_min.mosi_2  @= mosi_2
  dut.sim_eval_combinational()


  # if miso != '?':
  #    assert dut.spi_min.miso == miso


  if miso_2 != '?':
    assert dut.spi_min.miso_2 == miso_2


  # Tick simulator one cycle
  dut.sim_tick()

def random_signal(bits, fft_size, frac_bits):
  signal = []
  for i in range(fft_size):
    signal.append(math.trunc(i* (2**frac_bits)))

  return fft_call_response( signal, bits, fft_size)

"""Creates a singular FFT call and resposne """
def fft_call_response(array_of_sample_integers, bitwidth, fft_size):
  array = []

  output_array_unpacked = fixed_point_fft(BIT_WIDTH=bitwidth,DECIMAL_PT=16,SIZE_FFT=fft_size,x=array_of_sample_integers)
  input_array  = []
  output_array = []

  for n in range(fft_size):
    input_array.append(array_of_sample_integers[n])
    output_array.append(output_array_unpacked[n])
  

  array.append(packed_msg(input_array, bitwidth, fft_size))
  array.append(packed_msg(output_array, bitwidth, fft_size))
  
  return array


def packed_msg(array, bitwidth, fft_size): #Array of ints
  input = Bits(1)
  bit_convert = mk_bits(bitwidth)
  output = input
  for i in range(len(array)):

    output = concat( bit_convert(array[i]), output )
  
  output = output[1:bitwidth * fft_size + 1]
  
  return output
  

def fixed_point_fft(BIT_WIDTH, DECIMAL_PT, SIZE_FFT, x):
    X_r = list(x)
    X_i = np.zeros(SIZE_FFT)
    
    j = round(SIZE_FFT // 2)


    for i in range(1, SIZE_FFT - 1):
        if i >= j:

            X_r[round(i)], X_r[round(j)] = X_r[round(j)], X_r[round(i)]
        
        k = SIZE_FFT/2

        while(1):
            if k > j:
                break
            j -= k
            k /= 2
        j += k

    #print(X_r)
    #print(X_i)

    sine_table = np.zeros(SIZE_FFT)

    for i in range(SIZE_FFT):
        X_i[i] = 0
        sine_table[i] = math.trunc(math.sin((2 * math.pi * i / SIZE_FFT)) * (2**DECIMAL_PT))

    for stage in range(round(math.log2(SIZE_FFT))):
        
        X_r, X_i = fixed_point_fft_stage(BIT_WIDTH, DECIMAL_PT, SIZE_FFT, stage, sine_table, X_r, X_i)

        
        
    print(X_r)
    return X_r

def fixed_point_fft_stage( BIT_WIDTH, DECIMAL_PT, SIZE_FFT, STAGE_FFT, sine_table, X_r, X_i):

    

    for m in range( 2 ** STAGE_FFT ):
        for i in range( m, SIZE_FFT, 2 ** (STAGE_FFT + 1)):
            #print("m: " + str(m))
            if( m != 0 ):    
                w_r = sine_table[round((m * SIZE_FFT / (2 * (2 ** STAGE_FFT))) % SIZE_FFT + SIZE_FFT/4)]
                w_im = -sine_table[round((m * SIZE_FFT / (2 * (2 ** STAGE_FFT))) % SIZE_FFT)]
            if( m == 0 ):
                w_r = 1 * (2**DECIMAL_PT)
                w_im = 0
            #print(r)
            #print(im)


            X_r[round(i)], X_r[round(i + 2 ** STAGE_FFT)], X_i[round(i)], X_i[round(i + 2 ** STAGE_FFT)] = bfu( X_r[round(i)], X_r[round(i + 2 ** STAGE_FFT)], X_i[round(i)], X_i[round(i + 2 ** STAGE_FFT)], w_r, w_im, BIT_WIDTH, DECIMAL_PT)
    return X_r, X_i

def bfu(a_r, b_r, a_i, b_i, w_r, w_im, BIT_WIDTH, DECIMAL_PT):

    """
    print("w_r: " + str(w_r))
    print("w_i: " + str(w_im))

    print("a_r: " + str(a_r))
    print("a_i: " + str(a_i))
    """

    t_r = ((w_r * b_r) // (2**DECIMAL_PT)) - ((w_im * b_i) // (2**DECIMAL_PT))
    t_i = ((w_r + w_im) * (b_r + b_i) // (2**DECIMAL_PT)) - (w_r * b_r) // (2**DECIMAL_PT) - (w_im * b_i) / (2**DECIMAL_PT)
    
    c_r = a_r + t_r
    c_i = a_i + t_i 

    d_r = a_r - t_r
    d_i = a_i - t_i


    return c_r, d_r, c_i, d_i


def generate_random_stream(dut):
  array = random_signal(32, 8, 16)
  #         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2  
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      ) # cs high
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      ) # period before sclk toggle

  for j in range(8):
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )

    print(array[0])
    for i in range(32):
      # 0
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )

    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    0,      0,     '?'    )
    
    


  for i in range(114):
    # wait for FFT to finish
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )

  for j in range(8):
    
  #         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      1,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )

    for i in range(32):
        # 0
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
    
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    
    print(array)
    print(array[1][j * 32 + 31- 0])
    for i in range(32):

    #         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2
      t( dut, 1,    0,   0,   0,   0,    0,      0,     array[1][j * 32 + 31- i]    ) # pull_en = 1
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')