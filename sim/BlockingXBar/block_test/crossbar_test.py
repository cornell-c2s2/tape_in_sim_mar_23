#=========================================================================
# Crossbar_test
#=========================================================================

import pytest

from pymtl3 import *
from pymtl3.stdlib.test_utils import run_test_vector_sim


from BlockingXBar.crossbarRTL import crossbarTestHarnessVRTL

# Basic Test
def test_one ( cmdline_opts ): 
  dut = crossbarTestHarnessVRTL( BIT_WIDTH = 32, N_INPUTS = 2, N_OUTPUTS = 2, CONTROL_BIT_WIDTH = 42)
  
  run_test_vector_sim ( dut, [
    ('recv_msg           recv_val recv_rdy* send_msg*           send_val* send_rdy control        control_val control_rdy*'),
    [0xFFFFFFFFFFFFFFFF, 0x3,     0x2,      0xFFFFFFFF00000000, 0x2,      0x3,     0x10000000000, 0x1,        0x1],
    [0xFFFFFFFFFFFFFFFF, 0x3,     0x2,      0x00000000FFFFFFFF, 0x1,      0x3,     0x20000000000, 0x1,        0x1],
    [0xFFFFFFFFAAAAAAAA, 0x3,     0x1,      0xAAAAAAAA00000000, 0x2,      0x3,     0x30000000000, 0x1,        0x1],
    [0xAAAAAAAABBBBBBBB, 0x3,     0x1,      0x00000000BBBBBBBB, 0x1,      0x3,     0x00000000000, 0x1,        0x1],
    [0xAAAAAAAAAAAAAAAA, 0x3,     0x2,      0xAAAAAAAA00000000, 0x2,      0x3,     0x00000000000, 0x1,        0x1],
  ],cmdline_opts)


# Smaller BIT_WIDTH
def test_two ( cmdline_opts ): 
  dut = crossbarTestHarnessVRTL( BIT_WIDTH = 8, N_INPUTS = 2, N_OUTPUTS = 2, CONTROL_BIT_WIDTH = 42)

  run_test_vector_sim ( dut, [
    ('recv_msg           recv_val recv_rdy* send_msg*           send_val* send_rdy control        control_val control_rdy*'),
    [0xABFF,             0x3,     0x2,      0xAB00,             0x2,      0x3,     0x10000000000, 0x1,        0x1],
    [0x0FFF,             0x3,     0x2,      0x000F,             0x1,      0x3,     0x20000000000, 0x1,        0x1],
    [0x00AF,             0x3,     0x1,      0xAF00,             0x2,      0x3,     0x30000000000, 0x1,        0x1],
    [0xB00F,             0x3,     0x1,      0x000F,             0x1,      0x3,     0x00000000000, 0x1,        0x1],
    [0xFA00,             0x3,     0x2,      0xFA00,             0x2,      0x3,     0x00000000000, 0x1,        0x1],
  ],cmdline_opts)


# Smaller CONTROL_BIT_WIDTH
def test_three ( cmdline_opts ): 
  dut = crossbarTestHarnessVRTL( BIT_WIDTH = 32, N_INPUTS = 2, N_OUTPUTS = 2, CONTROL_BIT_WIDTH = 10)

  run_test_vector_sim ( dut, [
    ('recv_msg           recv_val recv_rdy* send_msg*           send_val* send_rdy control        control_val control_rdy*'),
    [0xFFFFFFFFFFFFFFFF, 0x3,     0x2,      0xFFFFFFFF00000000, 0x2,      0x3,     0x100,         0x1,        0x1],
    [0xFFFFFFFFFFFFFFFF, 0x3,     0x2,      0x00000000FFFFFFFF, 0x1,      0x3,     0x200,         0x1,        0x1],
    [0xFFFFFFFFAAAAAAAA, 0x3,     0x1,      0xAAAAAAAA00000000, 0x2,      0x3,     0x300,         0x1,        0x1],
    [0xAAAAAAAABBBBBBBB, 0x3,     0x1,      0x00000000BBBBBBBB, 0x1,      0x3,     0x000,         0x1,        0x1],
    [0xAAAAAAAAAAAAAAAA, 0x3,     0x2,      0xAAAAAAAA00000000, 0x2,      0x3,     0x000,         0x1,        0x1],
  ],cmdline_opts)


# 4 in, 4 out
def test_four ( cmdline_opts ): 
  dut = crossbarTestHarnessVRTL( BIT_WIDTH = 32, N_INPUTS = 4, N_OUTPUTS = 4, CONTROL_BIT_WIDTH = 42)

  run_test_vector_sim ( dut, [
    ('recv_msg                           recv_val recv_rdy* send_msg*                           send_val* send_rdy control        control_val control_rdy*'),
    [0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF, 0xF,     0x8,      0xFFFFFFFF000000000000000000000000, 0x8,      0xF,     0x04000000000, 0x1,        0x1],
    [0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF, 0xF,     0x8,      0x00000000FFFFFFFF0000000000000000, 0x4,      0xF,     0x08000000000, 0x1,        0x1],
    [0xFFFFFFFFAAAAAAAAFFFFFFFFBBBBBBBB, 0xF,     0x8,      0x0000000000000000FFFFFFFF00000000, 0x2,      0xF,     0x0C000000000, 0x1,        0x1],
    [0xAAAAAAAABBBBBBBBFFFFFFFFBBBBBBBB, 0xF,     0x8,      0x000000000000000000000000AAAAAAAA, 0x1,      0xF,     0x10000000000, 0x1,        0x1],
    [0xFFFFFFFFFFFFFFFFFFFFFFFFBBBBBBBB, 0xF,     0x4,      0xFFFFFFFF000000000000000000000000, 0x8,      0xF,     0x14000000000, 0x1,        0x1],
    [0xFFFFFFFFFFFFFFFFFFFFFFFFBBBBBBBB, 0xF,     0x4,      0x00000000FFFFFFFF0000000000000000, 0x4,      0xF,     0x18000000000, 0x1,        0x1],
    [0xFFFFFFFFAAAAAAAAFFFFFFFFBBBBBBBB, 0xF,     0x4,      0x0000000000000000AAAAAAAA00000000, 0x2,      0xF,     0x1C000000000, 0x1,        0x1],
    [0xAAAAAAAABBBBBBBBFFFFFFFFBBBBBBBB, 0xF,     0x4,      0x000000000000000000000000BBBBBBBB, 0x1,      0xF,     0x20000000000, 0x1,        0x1],
    [0xFFFFFFFFFFFFFFFFFFFFFFFFBBBBBBBB, 0xF,     0x2,      0xFFFFFFFF000000000000000000000000, 0x8,      0xF,     0x24000000000, 0x1,        0x1],
    [0xFFFFFFFFFFFFFFFFFFFFFFFFBBBBBBBB, 0xF,     0x2,      0x00000000FFFFFFFF0000000000000000, 0x4,      0xF,     0x28000000000, 0x1,        0x1],
    [0xFFFFFFFFAAAAAAAAFFFFFFFFBBBBBBBB, 0xF,     0x2,      0x0000000000000000FFFFFFFF00000000, 0x2,      0xF,     0x2C000000000, 0x1,        0x1],
    [0xAAAAAAAABBBBBBBBFFFFFFFFBBBBBBBB, 0xF,     0x2,      0x000000000000000000000000FFFFFFFF, 0x1,      0xF,     0x30000000000, 0x1,        0x1],
    [0xFFFFFFFFFFFFFFFFFFFFFFFFBBBBBBBB, 0xF,     0x1,      0xBBBBBBBB000000000000000000000000, 0x8,      0xF,     0x34000000000, 0x1,        0x1],
    [0xFFFFFFFFFFFFFFFFFFFFFFFFBBBBBBBB, 0xF,     0x1,      0x00000000BBBBBBBB0000000000000000, 0x4,      0xF,     0x38000000000, 0x1,        0x1],
    [0xFFFFFFFFAAAAAAAAFFFFFFFFAAAAAAAA, 0xF,     0x1,      0x0000000000000000AAAAAAAA00000000, 0x2,      0xF,     0x3C000000000, 0x1,        0x1],
    [0xAAAAAAAABBBBBBBBFFFFFFFFCCCCCCCC, 0xF,     0x1,      0x000000000000000000000000CCCCCCCC, 0x1,      0xF,     0x00000000000, 0x1,        0x1],
  ],cmdline_opts)


# 4 in, 2 out
def test_five ( cmdline_opts ): 
  dut = crossbarTestHarnessVRTL( BIT_WIDTH = 32, N_INPUTS = 4, N_OUTPUTS = 2, CONTROL_BIT_WIDTH = 42)

  run_test_vector_sim ( dut, [
    ('recv_msg                           recv_val recv_rdy* send_msg*           send_val* send_rdy control        control_val control_rdy*'),
    [0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF, 0xF,     0x8,      0xFFFFFFFF00000000, 0x2,      0x3,     0x08000000000, 0x1,        0x1],
    [0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF, 0xF,     0x8,      0x00000000FFFFFFFF, 0x1,      0x3,     0x10000000000, 0x1,        0x1],
    [0xFFFFFFFFAAAAAAAAFFFFFFFFBBBBBBBB, 0xF,     0x4,      0xAAAAAAAA00000000, 0x2,      0x3,     0x18000000000, 0x1,        0x1],
    [0xAAAAAAAABBBBBBBBFFFFFFFFBBBBBBBB, 0xF,     0x4,      0x00000000BBBBBBBB, 0x1,      0x3,     0x20000000000, 0x1,        0x1],
    [0xFFFFFFFFFFFFFFFFFFFFFFFFBBBBBBBB, 0xF,     0x2,      0xFFFFFFFF00000000, 0x2,      0x3,     0x28000000000, 0x1,        0x1],
    [0xFFFFFFFFFFFFFFFFFFFFFFFFBBBBBBBB, 0xF,     0x2,      0x00000000FFFFFFFF, 0x1,      0x3,     0x30000000000, 0x1,        0x1],
    [0xFFFFFFFFAAAAAAAAFFFFFFFFBBBBBBBB, 0xF,     0x1,      0xBBBBBBBB00000000, 0x2,      0x3,     0x38000000000, 0x1,        0x1],
    [0xAAAAAAAABBBBBBBBFFFFFFFFBBBBBBBB, 0xF,     0x1,      0x00000000BBBBBBBB, 0x1,      0x3,     0x00000000000, 0x1,        0x1],
  ],cmdline_opts)

# No recv_val is 1
def test_seven ( cmdline_opts ): 
  dut = crossbarTestHarnessVRTL( BIT_WIDTH = 32, N_INPUTS = 2, N_OUTPUTS = 2, CONTROL_BIT_WIDTH = 42)

  run_test_vector_sim ( dut, [
    ('recv_msg           recv_val recv_rdy* send_msg*           send_val* send_rdy control        control_val control_rdy*'),
    [0xFFFFFFFFFFFFFFFF, 0x0,     0x2,      0xFFFFFFFF00000000, 0x0,      0x3,     0x10000000000, 0x1,        0x1],
    [0xFFFFFFFFFFFFFFFF, 0x0,     0x2,      0x00000000FFFFFFFF, 0x0,      0x3,     0x20000000000, 0x1,        0x1],
    [0xFFFFFFFFAAAAAAAA, 0x0,     0x1,      0xAAAAAAAA00000000, 0x0,      0x3,     0x30000000000, 0x1,        0x1],
    [0xAAAAAAAABBBBBBBB, 0x0,     0x1,      0x00000000BBBBBBBB, 0x0,      0x3,     0x00000000000, 0x1,        0x1],
    [0xAAAAAAAAAAAAAAAA, 0x0,     0x2,      0xAAAAAAAA00000000, 0x0,      0x3,     0x00000000000, 0x1,        0x1],
  ],cmdline_opts)
