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

class CombinationalFFTCrossbarTestHarnessVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, BIT_WIDTH  = 1, SIZE_FFT = 2, STAGE_FFT = 0, FRONT = 1):

    # If translated into Verilog, we use the explicit name

    s.set_metadata( VerilogTranslationPass.explicit_module_name, 'CombinationalFFTCrossbarTestHarness' )

    # Interface

    

    s.recv = stream.ifcs.RecvIfcRTL( mk_bits(2 * BIT_WIDTH * SIZE_FFT) )
    s.send = stream.ifcs.SendIfcRTL( mk_bits(2 * BIT_WIDTH * SIZE_FFT) )

# See if the course staff want to force testing a specific RTL language
# for their own testing.

import sys
if hasattr( sys, '_called_from_test' ):
  if sys._pymtl_rtl_override:
    rtl_language = sys._pymtl_rtl_override

# Import the appropriate version based on the rtl_language variable

elif rtl_language == 'verilog':
  xbar = CombinationalFFTCrossbarTestHarnessVRTL
else:
  raise Exception("Invalid RTL language!")