
# This is the PyMTL wrapper for the corresponding Verilog RTL model RegIncVRTL.

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.passes.backends.verilog import *


class DecoderVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, m, n):
    # If translated into Verilog, we use the explicit name

    s.set_metadata( VerilogTranslationPass.explicit_module_name, 'Decoder' )

    # Interface
    #s.enable = InPort(1)
    s.x = InPort(m)
    s.y = OutPort(n)

Decoder = DecoderVRTL