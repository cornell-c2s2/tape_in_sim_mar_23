'''
==========================================================================
SPIIfc.py
==========================================================================
Master and minion SPI interfaces.
Author : Kyle Infantino
  Date : Mar 22, 2022
'''

from pymtl3 import *

#-------------------------------------------------------------------------
# SPIMasterIfc
#-------------------------------------------------------------------------

class SPIMasterIfc( Interface ):

  def construct( s, ncs ):
    s.cs   = [ OutPort() for _ in range(ncs) ] 
    s.sclk = OutPort()
    s.mosi = OutPort()
    s.miso = InPort()

  def __str__( s ):
    return f"{s.sclk}|{s.cs}|{s.mosi}|{s.miso}"

#-------------------------------------------------------------------------
# SPIMinionIfc
#-------------------------------------------------------------------------

class SPIMinionIfc( Interface ):

  def construct( s ):
    s.sclk  = InPort()
    s.cs    = InPort()
    s.mosi  = InPort()
    s.miso  = OutPort()

  def __str__( s ):
    return f"{s.sclk}|{s.cs}|{s.mosi}|{s.miso}"

#-------------------------------------------------------------------------
# SPIMinionWrapperIfc
#-------------------------------------------------------------------------

class SPIMinionWrapperIfc( Interface ):

  def construct( s ):
    s.sclk  = InPort()
    s.cs    = InPort()
    s.mosi  = InPort()
    s.miso  = OutPort()
    s.sclk_2  = InPort()
    s.cs_2    = InPort()
    s.mosi_2  = InPort()
    s.miso_2  = OutPort()
    s.sclk_3  = InPort()
    s.cs_3    = InPort()
    s.mosi_3  = InPort()
    s.miso_3  = OutPort()
    s.ms_sclk  = OutPort()
    s.ms_cs    = OutPort()
    s.ms_mosi  = OutPort()
    s.ms_miso  = InPort()

  def __str__( s ):
    return f"{s.sclk}|{s.cs}|{s.mosi}|{s.miso}|{s.sclk_2}|{s.cs_2}|{s.mosi_2}|{s.miso_2}"