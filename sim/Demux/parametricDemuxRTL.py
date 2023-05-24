# This is the PyMTL wrapper for the corresponding Verilog RTL model parametrixDemux.

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.passes.backends.verilog import *


class parametricDemuxTestHarnessVRTL( VerilogPlaceholder, Component ):

  # Constructor
    def construct( s, p_nbits, p_noutputs):

      s.set_metadata( VerilogTranslationPass.explicit_module_name, 'Demux' )

      # Interface
      s.in_val = InPort(mk_bits(p_nbits))
      s.sel = InPort(mk_bits(clog2(p_noutputs)))
      s.flattened_out_val= OutPort(mk_bits(p_noutputs*p_nbits))


Demux = parametricDemuxTestHarnessVRTL



  
