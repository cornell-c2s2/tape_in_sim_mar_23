# -*- coding: utf-8 -*-
# @Author: UnsignedByte
# @Date:   2022-11-24 13:03:57
# @Last Modified by:   UnsignedByte
# @Last Modified time: 2022-11-24 13:04:25

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.passes.backends.verilog import *

class HarnessVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, n=32, d=16, mult=1 ):
    # Interface

    s.recv = stream.ifcs.RecvIfcRTL( mk_bits(6*n) )
    s.send = stream.ifcs.SendIfcRTL( mk_bits(4*n) )
