# This is the PyMTL wrapper for the corresponding Verilog RTL model router.

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.passes.backends.verilog import *
import math



class routerTestHarnessVRTL( VerilogPlaceholder, Component ):

  # Constructor
    def construct( s, p_nbits, p_noutputs):
      
      s.set_metadata( VerilogTranslationPass.explicit_module_name, 'Router' )
     

    #add ports
      s.valid = InPort(1)
      s.ready = InPort(mk_bits(p_noutputs))
      s.message_in = InPort(mk_bits(p_nbits))
      s.valid_out = OutPort(mk_bits(p_noutputs))
      s.ready_out = OutPort(1)
      
      #Length of all cut messages.
      s.message_out = OutPort(mk_bits(p_noutputs*(p_nbits - math.ceil(math.log2(p_noutputs)))))


Router = routerTestHarnessVRTL



  