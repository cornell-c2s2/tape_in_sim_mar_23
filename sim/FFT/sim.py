#!/usr/bin/env python
#=========================================================================
# lab1-sim [options]
#=========================================================================
#
#  -h --help           Display this message
#
#  --impl              {rtl-scycle,rtl-fixed,rtl-var,rtl-nstage}
#  --nstages           Number of pipeline stages for nstage models
#  --input <dataset>   {small,large,lomask,himask,lohimask,sparse}
#  --trace             Display line tracing
#  --stats             Display statistics
#  --translate         Translate RTL model to Verilog
#  --dump-vcd          Dump VCD to imul-<impl>-<input>.vcd
#  --dump-vtb           Dump a SystemVerilog test harness
#
# Author : Christopher Batten, Shunning Jiang
# Date   : February 5, 2015
#

# Hack to add project root to python path

import os
import sys

import argparse
import re

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts
from pymtl3.passes.backends.verilog import VerilogPlaceholderPass

# from lab1_imul.IntMulFixedLatCL  import IntMulFixedLatCL
# from lab1_imul.IntMulVarLatCL    import IntMulVarLatCL
# from lab1_imul.IntMulNstageCL    import IntMulNstageCL
from FFTTestHarnessRTL import FFTTestHarnessVRTL

from block_test.FFT_test import TestHarness
from block_test.FFT_test import small_fft, small_msgs_2, small_msgs

#-------------------------------------------------------------------------
# Command line processing
#-------------------------------------------------------------------------

class ArgumentParserWithCustomError(argparse.ArgumentParser):
  def error( self, msg = "" ):
    if ( msg ): print("\n ERROR: %s" % msg)
    print("")
    file = open( sys.argv[0] )
    for ( lineno, line ) in enumerate( file ):
      if ( line[0] != '#' ): sys.exit(msg != "")
      if ( (lineno == 2) or (lineno >= 4) ): print( line[1:].rstrip("\n") )

def parse_cmdline():
  p = ArgumentParserWithCustomError( add_help=False )

  # Standard command line arguments

  p.add_argument( "-h", "--help",    action="store_true" )

  # Additional commane line arguments for the simulator

  p.add_argument( "--impl", default="rtl-scycle",
    choices=[
      "cl-fixed","cl-var","cl-nstage",
      "rtl-scycle","rtl-fixed","rtl-var","rtl-nstage",
    ] )


  p.add_argument( "--input", default="small",
    choices=["small_fft","small_msgs_2","small_msgs"] )

  p.add_argument( "--trace",     action="store_true" )
  p.add_argument( "--stats",     action="store_true" )
  p.add_argument( "--translate", action="store_true" )
  p.add_argument( "--dump-vcd",  action="store_true" )
  p.add_argument( "--dump-vtb",  action="store_true" )

  opts = p.parse_args()
  if opts.help: p.error()
  return opts

#-------------------------------------------------------------------------
# Main
#-------------------------------------------------------------------------

def main():
  opts = parse_cmdline()

  # Create the input pattern

  inputs  = None
  print("here")
  if   opts.input == "small_fft":    inputs = small_fft(0, 0)
  elif opts.input == "small_msgs_2":    inputs = small_msgs_2(0, 0)
  elif opts.input == "small_msgs":   inputs = small_msgs(0, 0)

  ninputs = len(inputs[::2])

  # Determine which model to use in the simulator

  model_impl_dict = {
    "rtl-scycle": FFTTestHarnessVRTL,
  }

  # Check if translation is valid

  if opts.translate and not opts.impl.startswith("rtl"):
    print("\n ERROR: --translate only works with RTL models \n")
    exit(1)

  # Parameters

  params = {"BIT_WIDTH":32,"DECIMAL_PT":16,"N_SAMPLES":8}

  # Create test harness (we can reuse the harness from unit testing)

  th = TestHarness( model_impl_dict[ opts.impl ]( **params ) )

  th.set_param("top.src.construct",  msgs=inputs[::2] )
  th.set_param("top.sink.construct", msgs=inputs[1::2] )

  # Create VCD filename



  cmdline_opts = {
    'dump_vcd': f"{unique_name}" if opts.dump_vcd else '',
    'dump_vtb': f"{unique_name}" if opts.dump_vtb else '',
    'test_verilog': 'zeros' if opts.translate else '',
  }

  # Configure the test harness component

  config_model_with_cmdline_opts( th, cmdline_opts, duts=None )

  # Apply necessary passes

  # Create a simulator
  th.apply( DefaultPassGroup( linetrace=opts.trace ) )

  # Reset test harness

  th.sim_reset()

  # Run simulation

  while not th.done():
    th.sim_tick()

  # Extra ticks to make VCD easier to read

  th.sim_tick()
  th.sim_tick()
  th.sim_tick()

  # Display statistics

  if opts.stats:
    print( f"num_cycles         = {th.sim_cycle_count()}" )
    print( f"num_cycles_per_mul = {th.sim_cycle_count()/(1.0*ninputs):1.2f}" )
    
main()