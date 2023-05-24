#=========================================================================
# Choose PyMTL or Verilog version
#=========================================================================
# Set this variable to 'pymtl' if you are using PyMTL for your RTL design
# (i.e., your design is in IntMultFixedLatPRTL) or set this variable to
# 'verilog' if you are using Verilog for your RTL design (i.e., your
# design is in IntMulFixedLatVRTL).

rtl_language = 'verilog'

#-------------------------------------------------------------------------
# Do not edit below this line
#-------------------------------------------------------------------------

# This is the PyMTL wrapper for the corresponding Verilog RTL model.

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.passes.backends.verilog import *

class FFTTestHarnessVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, BIT_WIDTH = 32, DECIMAL_PT = 16, N_SAMPLES = 8):

    # If translated into Verilog, we use the explicit name

    s.set_metadata( VerilogTranslationPass.explicit_module_name, f'CombinationalFFT_{BIT_WIDTH}_{DECIMAL_PT}_{N_SAMPLES}' )
    s.set_metadata( VerilogVerilatorImportPass.vl_trace_max_array, max(32, N_SAMPLES) )
    s.set_metadata( VerilogVerilatorImportPass.vl_trace_max_width, max(256, BIT_WIDTH) )

    # Interface

    

    s.recv = stream.ifcs.RecvIfcRTL( mk_bits(BIT_WIDTH) )
    s.send = stream.ifcs.SendIfcRTL( mk_bits(BIT_WIDTH) )

# See if the course staff want to force testing a specific RTL language
# for their own testing.

import sys
if hasattr( sys, '_called_from_test' ):
  if sys._pymtl_rtl_override:
    rtl_language = sys._pymtl_rtl_override

# Import the appropriate version based on the rtl_language variable

elif rtl_language == 'verilog':
  xbar = FFTTestHarnessVRTL
else:
  raise Exception("Invalid RTL language!")
