from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.passes.backends.verilog import *

class HarnessVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, n=32, d=16 ):

    # Interface

    s.recv = stream.ifcs.RecvIfcRTL( mk_bits(2*n) )
    s.send = stream.ifcs.SendIfcRTL( mk_bits(n) )
