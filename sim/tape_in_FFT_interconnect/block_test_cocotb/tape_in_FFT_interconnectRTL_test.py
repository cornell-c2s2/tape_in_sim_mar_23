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

from spi_tc_maker import *

from tape_in_FFT_interconnect.tape_in_FFT_interconnectRTL import FFTInterconnectVRTL

from coarse_instruction_digraph import *

import cocotb

# To ensure reproducible testing


random.seed(0xdeadbeef)

#-------------------------------------------------------------------------
# Test Case: basic
#-------------------------------------------------------------------------
async def reset_dut(dut):
    dut.reset.value = 1
    await ClockCycles(dut.clk, 1)
    dut.reset.value = 0
    await ClockCycles(dut.clk, 1)
    dut.reset.value = 1
    await ClockCycles(dut.clk, 1)
    dut.reset.value = 0
    await ClockCycles(dut.clk, 1)

@cocotb.test()
async def test_loopback(dut):
  await reset_dut(dut)
  await loopback(dut)

@cocotb.test()
async def test_loopback_random(dut): #Actually works. Nutty - WS
 await reset_dut(dut)
 for i in range(100):
    await loopback(dut, Bits32(random.randint(-100000,100000)))

@cocotb.test()
async def test_crossbar_bypass(dut):
  await reset_dut(dut)
  await bypass_injection_minion(dut)
  
@cocotb.test()
async def test_crossbar_bypass_random(dut): #Actually works. Nutty - WS
  await reset_dut(dut)
  for i in range(100):
    await bypass_injection_minion(dut, Bits32(random.randint(-65000,65000)))

@cocotb.test()
async def test_fft_injection_minion_basic(dut):
  await reset_dut(dut)
  inarray = [1, 1, 1, 1, 1, 1, 1, 1]
  await fft_injection_minion(dut, inarray)

@cocotb.test()
async def test_fft_injection_minion_basic_random(dut):
  await reset_dut(dut)
  inarray = []
  for i in range(8):
    inarray.append(Bits32(random.randint(-65000,65000)))

  await fft_injection_minion(dut, inarray)

@cocotb.test()
async def test_master_bypass_injection(dut):
  await reset_dut(dut)
  await bypass_inject_master(dut, Bits32(0xFFFFFFFF), 32)

@cocotb.test()
async def test_master_fft_injection(dut):
  await reset_dut(dut)
  array = [1,1,1,1,1,1,1,1]
  await fft_inject_master(dut, array, 32)
  array = [2,2,2,2,2,2,2,2]
  await fft_inject_master(dut, array, 32)
  
@cocotb.test()
async def test_master_bypass_injection(dut):
  await reset_dut(dut)
  await bypass_inject_master(dut, Bits32(0xFFFFFFFF), 32)

@cocotb.test()
async def test_master_bypass_injection_twelve_bits_length(dut):
  await reset_dut(dut)
  await bypass_inject_master(dut, Bits12(0xFFF), 12)

@cocotb.test()
async def test_master_bypass_injection_random_bits_length(dut):
  await reset_dut(dut)
  bitwidth = random.randint(8,32)
  randinteger = random.randint(0,2**(bitwidth - 2))
  await bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)

@cocotb.test()
async def test_master_bypass_injection_random_bits_length_stream(dut):
  await reset_dut(dut)
  for i in range(100):
    bitwidth = random.randint(8,32)
    randinteger = random.randint(0,2**(bitwidth - 1))
    await bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)

@cocotb.test()
async def test_master_fft_injection_twelve_bits(dut):
  await reset_dut(dut)
  array = [1,1,1,1,1,1,1,1]
  await fft_inject_master(dut, array, 12)

@cocotb.test()
async def test_master_fft_injection_random_bits_length_stream(dut):
 await reset_dut(dut)
 for i in range(10):
  bitwidth = random.randint(8,32)
  array = []
  for j in range(8):
    array.append(random.randint(0,2**(min(bitwidth - 1,16))))
  await fft_inject_master(dut, array, bitwidth)

@cocotb.test()
async def test_master_bypass_injection_with_config(dut):
  await reset_dut(dut)
  await spi_config_master(dut, Bits3(0x5), Bits6(0x20))
  await bypass_inject_master(dut, Bits32(0xFFFFFFFF), 32)

@cocotb.test()
async def test_master_bypass_injection_with_random_config_stream(dut):
  await reset_dut(dut)

  for i in range(100):
    bitwidth = random.randint(8,32)
    randinteger = random.randint(0,2**(bitwidth - 1))
    await spi_config_master(dut, Bits3(random.randint(0,7)), Bits6(bitwidth))
    await bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)
  

@cocotb.test()
async def test_master_fft_injection_random_bits_length_stream_config(dut):
  await reset_dut(dut)

  for i in range(10):
    bitwidth = random.randint(8,32)
    array = []
    for j in range(8):
      array.append(random.randint(0,2**(min(bitwidth - 1,16))))
    await spi_config_master(dut, Bits3(random.randint(0,7)),Bits6(bitwidth) )
    await fft_inject_master(dut, array, bitwidth)
    print("Tested Master with FFT Injection in Pass: " + str(i))

@cocotb.test()
async def test_random_digraph_stream(dut):
  await reset_dut(dut)

  for i in range(100):
    await random_function(dut)

@cocotb.test()
async def test_loopback_16(dut):
  await reset_dut(dut)
  fl_model.FFT_LRG_SIZE = 16
  await loopback(dut)

@cocotb.test()
async def test_loopback_random_16(dut): #Actually works. Nutty - WS
  await reset_dut(dut)
  fl_model.FFT_LRG_SIZE = 16

  for i in range(100):
    await loopback(dut, Bits32(random.randint(-100000,100000)))

@cocotb.test()
async def test_crossbar_bypass_16(dut):
  await reset_dut(dut)
  fl_model.FFT_LRG_SIZE = 16
  await bypass_injection_minion(dut)
  
@cocotb.test()
async def test_crossbar_bypass_random_16(dut): #Actually works. Nutty - WS
  await reset_dut(dut)
  fl_model.FFT_LRG_SIZE = 16

  for i in range(100):
    await bypass_injection_minion(dut, Bits32(random.randint(-65000,65000)))

@cocotb.test()
async def test_fft_injection_minion_basic_16(dut):
  await reset_dut(dut)

  print("hi")

  fl_model.FFT_LRG_SIZE = 16

  inarray = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
  await fft_injection_minion(dut, inarray)

async def test_fft_injection_minion_basic_random_16(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 16
  
  dut.sim_reset()
  inarray = []
  for i in range(fl_model.FFT_LRG_SIZE):
    inarray.append(Bits32(random.randint(-65000,65000)))

  fft_injection_minion(dut, inarray)


async def test_master_bypass_injection_16(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 16

  dut.sim_reset()
  bypass_inject_master(dut, Bits32(0xFFFFFFFF), 32)

async def test_master_fft_injection_16(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 16

  dut.sim_reset()
  array = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
  fft_inject_master(dut, array, 32)
  array = [2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2]
  fft_inject_master(dut, array, 32)


async def test_master_bypass_injection_16(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 16

  dut.sim_reset()
  bypass_inject_master(dut, Bits32(0xFFFFFFFF), 32)

async def test_master_bypass_injection_twelve_bits_length_16(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()
  bypass_inject_master(dut, Bits12(0xFFF), 12)

async def test_master_bypass_injection_random_bits_length_16(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 16

  dut.sim_reset()
  bitwidth = random.randint(8,32)
  randinteger = random.randint(0,2**(bitwidth - 2))
  bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)

async def test_master_bypass_injection_random_bits_length_stream_16(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 16

  dut.sim_reset()
  for i in range(100):
    bitwidth = random.randint(8,32)
    print("bitwidth " + str( bitwidth ) )
    randinteger = random.randint(0,2**(bitwidth -1))
    bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)

async def test_master_fft_injection_twelve_bits_16(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 16

  dut.sim_reset()
  array = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
  fft_inject_master(dut, array, 12)

async def test_master_fft_injection_random_bits_length_stream_16(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 16

  dut.sim_reset()

  for i in range(10):
    bitwidth = random.randint(8,32)
    print("bitwidth " + str( bitwidth ) )
    array = []
    for j in range(fl_model.FFT_LRG_SIZE):
      array.append(random.randint(0,2**(min(bitwidth - 1,16))))
    
    fft_inject_master(dut, array, bitwidth)

async def test_master_bypass_injection_with_config_16(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 16

  dut.sim_reset()
  spi_config_master(dut, Bits3(0x5), Bits6(0x20))
  bypass_inject_master(dut, Bits32(0xFFFFFFFF), 32)


async def test_master_bypass_injection_with_random_config_stream_16(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )
  
  fl_model.FFT_LRG_SIZE = 16

  dut.sim_reset()

  for i in range(100):
    bitwidth = random.randint(8,32)
    randinteger = random.randint(0,2**(bitwidth - 1))
    spi_config_master(dut, Bits3(random.randint(0,7)), Bits6(bitwidth))
    bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)
  


async def test_master_fft_injection_random_bits_length_stream_config_16(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 16

  dut.sim_reset()

  for i in range(10):
    bitwidth = random.randint(8,32)
    
    array = []
    for j in range(fl_model.FFT_LRG_SIZE):
      array.append(random.randint(0,2**(min(bitwidth - 1,16))))
    spi_config_master(dut, Bits3(random.randint(0,7)),Bits6(bitwidth) )
    fft_inject_master(dut, array, bitwidth)

async def test_random_digraph_stream_16(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 16

  dut.sim_reset()

  for i in range(100):
    random_function(dut)


async def test_master_fft_injection_twelve_bits_annoying_16(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 16

  dut.sim_reset()
  array = [1,1,2,1,2,1,2,2,1,1,1,1,2,2,1,2]
  fft_inject_master(dut, array, 3)


async def test_tapein_1_random_testing(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )
  fl_model.FFT_LRG_SIZE = 16

  dut.sim_reset()
  array = [1,1,1,1,1,1,1,1]
  tapein_one( dut, array )


async def test_loopback_16(dut):


  dut = FFTInterconnectVRTL(N_SAMPLES = 16)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )
  fl_model.FFT_LRG_SIZE = 16

  dut.sim_reset()
  loopback(dut)

async def test_loopback_128(dut):


  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )
  fl_model.FFT_LRG_SIZE = 128

  dut.sim_reset()
  loopback(dut)



async def test_loopback_random_128(dut): #Actually works. Nutty - WS
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )
  fl_model.FFT_LRG_SIZE = 16


  dut.sim_reset()

  for i in range(100):
    loopback(dut, Bits32(random.randint(-100000,100000)))

async def test_crossbar_bypass_128(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  fl_model.FFT_LRG_SIZE = 128

  dut.sim_reset()

  bypass_injection_minion(dut)
  

async def test_crossbar_bypass_random_128(dut): #Actually works. Nutty - WS
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  fl_model.FFT_LRG_SIZE = 128

  dut.sim_reset()

  for i in range(100):
    bypass_injection_minion(dut, Bits32(random.randint(-65000,65000)))


async def test_fft_injection_minion_basic_128(dut):
  dut = FFTInterconnectVRTL(BIT_WIDTH = 32, DECIMAL_PT = 16, N_SAMPLES = 128 )
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )



  fl_model.FFT_LRG_SIZE = 128

  dut.sim_reset()

  inarray = []
  for i in range(128):
    inarray.append(1)
  fft_injection_minion(dut, inarray)


async def test_fft_injection_minion_basic_random_128(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 128
  
  dut.sim_reset()
  inarray = []
  for i in range(fl_model.FFT_LRG_SIZE):
    inarray.append(Bits32(random.randint(-65000,65000)))

  fft_injection_minion(dut, inarray)


async def test_master_bypass_injection_128(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 128

  dut.sim_reset()
  bypass_inject_master(dut, Bits32(0xFFFFFFFF), 32)

async def test_master_fft_injection_128(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 128

  dut.sim_reset()
  array = []
  for i in range(128):
    array.append(1)
  fft_inject_master(dut, array, 32)
  array = []
  for i in range(128):
    array.append(2)

  fft_inject_master(dut, array, 32)


async def test_master_bypass_injection_128(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 128

  dut.sim_reset()
  bypass_inject_master(dut, Bits32(0xFFFFFFFF), 32)

async def test_master_bypass_injection_twelve_bits_length_128(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  dut.sim_reset()
  bypass_inject_master(dut, Bits12(0xFFF), 12)

async def test_master_bypass_injection_random_bits_length_128(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 128

  dut.sim_reset()
  bitwidth = random.randint(8,32)
  randinteger = random.randint(0,2**(bitwidth - 2))
  bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)

async def test_master_bypass_injection_random_bits_length_stream_128(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 128

  dut.sim_reset()
  for i in range(100):
    bitwidth = random.randint(8,32)
    print("bitwidth " + str( bitwidth ) )
    randinteger = random.randint(0,2**(bitwidth -1))
    bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)


async def test_master_fft_injection_random_bits_length_stream_128(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 128

  dut.sim_reset()

  for i in range(10):
    bitwidth = random.randint(8,32)
    print("bitwidth " + str( bitwidth ) )
    array = []
    for j in range(fl_model.FFT_LRG_SIZE):
      array.append(random.randint(0,2**(min(bitwidth - 1,16))))
    
    fft_inject_master(dut, array, bitwidth)

async def test_master_bypass_injection_with_config_128(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 128

  dut.sim_reset()
  spi_config_master(dut, Bits3(0x5), Bits6(0x20))
  bypass_inject_master(dut, Bits32(0xFFFFFFFF), 32)


async def test_master_bypass_injection_with_random_config_stream_128(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )
  
  fl_model.FFT_LRG_SIZE = 128

  dut.sim_reset()

  for i in range(100):
    bitwidth = random.randint(8,32)
    randinteger = random.randint(0,2**(bitwidth - 1))
    spi_config_master(dut, Bits3(random.randint(0,7)), Bits6(bitwidth))
    bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)
  


async def test_master_fft_injection_random_bits_length_stream_config_128(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 128

  dut.sim_reset()

  for i in range(10):
    bitwidth = random.randint(8,32)
    
    array = []
    for j in range(fl_model.FFT_LRG_SIZE):
      array.append(random.randint(0,2**(min(bitwidth - 1,16))))
    spi_config_master(dut, Bits3(random.randint(0,7)),Bits6(bitwidth) )
    fft_inject_master(dut, array, bitwidth)

async def test_random_digraph_stream_128(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 128)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 128

  dut.sim_reset()

  for i in range(100):
    random_function(dut)


async def test_master_bypass_injection_random_bits_length_64(dut):
  dut = FFTInterconnectVRTL(N_SAMPLES = 64)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=False ) )

  fl_model.FFT_LRG_SIZE = 64

  dut.sim_reset()
  bitwidth = random.randint(8,32)
  randinteger = random.randint(0,2**(bitwidth - 2))
  bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)