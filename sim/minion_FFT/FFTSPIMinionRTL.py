#=========================================================================
# Choose PyMTL or Verilog version
#=========================================================================
# Set this variable to 'pymtl' if you are using PyMTL for your RTL design
# (i.e., your design is in IntMultBasePRTL) or set this variable to
# 'verilog' if you are using Verilog for your RTL design (i.e., your
# design is in IntMulBaseVRTL).

rtl_language = 'verilog'

#-------------------------------------------------------------------------
# Do not edit below this line
#-------------------------------------------------------------------------

# PyMTL wrappers for the corresponding Verilog RTL models.

from os import path
from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.passes.backends.verilog import *
from SPI_minion.interfaces.SPIIfc import SPIMinionWrapperIfc
# from pymtl3.stdlib.stream.ifcs import RecvIfcRTL, SendIfcRTL

class FFTSPIMinionVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s ):

    s.set_metadata( VerilogTranslationPass.explicit_module_name, f'FFTSPIMinionRTL' )

    s.spi_min = SPIMinionWrapperIfc()
    # s.recv = RecvIfcRTL(Bits32)
    # s.send = SendIfcRTL(Bits16)

    s.set_metadata( VerilogPlaceholderPass.port_map, {
        s.spi_min.cs       : 'cs',
        s.spi_min.sclk     : 'sclk',
        s.spi_min.mosi     : 'mosi',
        s.spi_min.miso     : 'miso',
        s.spi_min.cs_2     : 'cs_2',
        s.spi_min.sclk_2   : 'sclk_2',
        s.spi_min.mosi_2   : 'mosi_2',
        s.spi_min.miso_2   : 'miso_2',
        
        # s.recv.msg         : 'recv_msg',
        # s.recv.rdy         : 'recv_rdy',
        # s.recv.val         : 'recv_val',
        # s.send.msg         : 'send_msg',
        # s.send.rdy         : 'send_rdy',
        # s.send.val         : 'send_val'
    })


# For to force testing a specific RTL language
import sys
if hasattr( sys, '_called_from_test' ):
  if sys._pymtl_rtl_override:
    rtl_language = sys._pymtl_rtl_override

# Import the appropriate version based on the rtl_language variable

if rtl_language == 'verilog':
  FFTSPIMinionRTL = FFTSPIMinionVRTL
else:
  raise Exception("Invalid RTL language!")