#--------------------------------------------------------------
#
#   spi_tc_maker.py
#   Functions to mimic a full function SPI driver.
#   Written by Will Salcedo '23
#
#--------------------------------------------------------------

from pymtl3 import *

def tr( dut, cs, sclk, mosi): #going to be so messy on the screen, must be a better way to do this. 

    # Write input value to input port
    dut.spi_min.cs      @= cs
    dut.spi_min.sclk    @= sclk
    dut.spi_min.mosi    @= mosi
    retval = dut.spi_min.miso 
  
    dut.sim_tick()

    return retval


#Writes/Reads an SPI transaction. Lowest level of abstraction. 
def spi_write(dut, src_msg : Bits) -> Bits:

    packet_size = src_msg.nbits
    snk_msg     = Bits(src_msg.nbits)



    tr( dut, 1, 0, 0 )
    tr( dut, 1, 0, 0 )
    tr( dut, 1, 0, 0 )
    tr( dut, 1, 0, 0 )
    tr( dut, 1, 0, 0 )

    for i in range(packet_size):
        tr(                                dut, 0, 0,   0                            )
        tr(                                dut, 0, 0,   0                            )
        tr(                                dut, 0, 0,   0                            )
        tr(                                dut, 0, 0,   src_msg[packet_size - i - 1] )
        tr(                                dut, 0, 0,   src_msg[packet_size - i - 1] )
        tr(                                dut, 0, 1,   src_msg[packet_size - i - 1] )
        tr(                                dut, 0, 1,   src_msg[packet_size - i - 1] )
        tr(                                dut, 0, 1,   src_msg[packet_size - i - 1] )
        tr(                                dut, 0, 1,   src_msg[packet_size - i - 1] )
        tr(                                dut, 0, 1,   src_msg[packet_size - i - 1] )
        tr(                                dut, 0, 1,   0                            )
        snk_msg[packet_size - i - 1] = tr( dut, 0, 0,   0                            )

      #pull CS high to end transaction
    tr( dut, 1, 0, 0 )
    tr( dut, 1, 0, 0 )
    tr( dut, 1, 0, 0 )
    tr( dut, 1, 0, 0 )

    return snk_msg


