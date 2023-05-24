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
from pymtl3.passes.backends.verilog import *
from pymtl3.stdlib.stream.ifcs import RecvIfcRTL, SendIfcRTL
from .interfaces.SPIIfc import SPIMasterIfc
from .interfaces.PushIfc import PushInIfc
from .interfaces.PullIfc import PullOutIfc

class SPIMasterValRdyVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, nbits=34, ncs=1 ):

    #s.set_metadata( VerilogTranslationPass.explicit_module_name, f'SPIMasterValRdyRTL_{nbits}nbits_{ncs}ncs' )

    # Local parameters
    s.nbits = nbits                      # size of message
    s.ncs = ncs                          # number of chip select lines
    s.logBitsN = mk_bits(clog2(nbits)+1) # number of bits required to count to packet size

    # Interface
    s.spi_ifc = SPIMasterIfc( ncs )

    s.send = SendIfcRTL( mk_bits(s.nbits) )
    s.recv = RecvIfcRTL( mk_bits(s.nbits) )

    s.packet_size_ifc = RecvIfcRTL( s.logBitsN ) # size of spi packet (up to nbits)
    s.cs_addr_ifc = RecvIfcRTL( mk_bits(clog2(s.ncs) if s.ncs > 1 else 1) )

    # s.packet_size_ifc.msg = InPort()
    # s.packet_size_ifc.rdy = OutPort()
    # s.packet_size_ifc.val = InPort()

    # s.cs_addr_ifc.msg = InPort()
    # s.cs_addr_ifc.rdy = OutPort()
    # s.cs_addr_ifc.val = InPort()


    """ s.set_metadata( VerilogPlaceholderPass.port_map, {
      s.spi_ifc.cs    : 'cs',
      s.spi_ifc.sclk  : 'sclk',
      s.spi_ifc.mosi  : 'mosi',
      s.spi_ifc.miso  : 'miso',

      s.recv.val  : 'recv_val',
      s.recv.rdy  : 'recv_rdy',
      s.recv.msg  : 'recv_msg',

      s.send.val  : 'send_val',
      s.send.rdy  : 'send_rdy',
      s.send.msg  : 'send_msg',

      s.packet_size_ifc.val : 'packet_size_ifc_val',
      s.packet_size_ifc.rdy : 'packet_size_ifc_rdy',
      s.packet_size_ifc.msg : 'packet_size_ifc_msg',

      s.cs_addr_ifc.val : 'cs_addr_ifc_val',
      s.cs_addr_ifc.rdy : 'cs_addr_ifc_rdy',
      s.cs_addr_ifc.msg : 'cs_addr_ifc_msg',
    }) """
    

# Import the appropriate version based on the rtl_language variable

if rtl_language == 'pymtl':
  from .SPIMasterValRdyPRTL import SPIMasterValRdyPRTL as SPIMasterValRdyRTL
elif rtl_language == 'verilog':
  SPIMasterValRdyRTL = SPIMasterValRdyVRTL
else:
  raise Exception("Invalid RTL language!")