# -*- coding: utf-8 -*-
# @Author: UnsignedByte
# @Date:   2022-11-12 18:33:26
# @Last Modified by:   UnsignedByte
# @Last Modified time: 2022-11-12 18:33:48

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.passes.backends.verilog import *

class HarnessVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, n=32, d=16 ):

    # If translated into Verilog, we use the explicit name

    # s.set_metadata( VerilogTranslationPass.explicit_module_name, 'HarnessVRTL' )

    # Interface

    s.recv = stream.ifcs.RecvIfcRTL( mk_bits(4*n) )
    s.send = stream.ifcs.SendIfcRTL( mk_bits(2*n) )