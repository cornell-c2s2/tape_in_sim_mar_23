# This is the PyMTL wrapper for the corresponding Verilog RTL model CrossbarVRTL.

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.passes.backends.verilog import *


class crossbarTestHarnessVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, BIT_WIDTH, N_INPUTS, N_OUTPUTS, CONTROL_BIT_WIDTH  ):

    s.set_metadata( VerilogTranslationPass.explicit_module_name, 'crossbar' )

    # Interface
    s.recv_msg = InPort(mk_bits(BIT_WIDTH*N_INPUTS))
    s.recv_val = InPort(mk_bits(N_INPUTS))
    s.recv_rdy = OutPort(mk_bits(N_INPUTS))
    s.send_msg = OutPort(mk_bits(BIT_WIDTH*N_OUTPUTS))
    s.send_val = OutPort(mk_bits(N_OUTPUTS))
    s.send_rdy = InPort(mk_bits(N_OUTPUTS))
    s.control = InPort(mk_bits(CONTROL_BIT_WIDTH))
    s.control_val = InPort(1)
    s.control_rdy = OutPort(1)


Crossbar = crossbarTestHarnessVRTL
