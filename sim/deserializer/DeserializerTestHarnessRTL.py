#=========================================================================
# ParallelTestHarnessRTL.py
#=========================================================================
rtl_language = 'verilog'

#-------------------------------------------------------------------------
# Do not edit below this line
#-------------------------------------------------------------------------

# This is the PyMTL wrapper for the corresponding Verilog RTL model.

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.passes.backends.verilog import *

class DeserializerTestHarnessVRTL( VerilogPlaceholder, Component ):
  # Constructor
  def construct( s, BIT_WIDTH = 32, N_SAMPLES = 8):
    # If translated into Verilog, we use the explicit name
    s.set_metadata( VerilogTranslationPass.explicit_module_name, 'deserializer' )
    # Interface
    s.recv = stream.ifcs.RecvIfcRTL( mk_bits(BIT_WIDTH) )
    s.send = stream.ifcs.SendIfcRTL( mk_bits(BIT_WIDTH * N_SAMPLES) )
# See if the course staff want to force testing a specific RTL language
# for their own testing.
import sys
if hasattr( sys, '_called_from_test' ):
  if sys._pymtl_rtl_override:
    rtl_language = sys._pymtl_rtl_override
# Import the appropriate version based on the rtl_language variable
elif rtl_language == 'verilog':
  deserializer = DeserializerTestHarnessVRTL
else:
  raise Exception("Invalid RTL language!")

 