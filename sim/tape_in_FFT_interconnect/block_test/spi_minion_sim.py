#--------------------------------------------------------------
#
#   spi_tc_maker.py
#   Functions to mimic a full function SPI driver.
#   Written by Will Salcedo '23
#
#--------------------------------------------------------------

from pymtl3 import *

def tm( dut, miso ): 

    # Write input value to input port
    retval = (dut.spi_min.ms_cs, dut.spi_min.ms_sclk, dut.spi_min.ms_mosi)
    dut.spi_min.ms_miso @= miso
  
    dut.sim_tick()

    return retval


#Writes/Reads an SPI transaction. Lowest level of abstraction. 
def master_serve(dut, src_msg : Bits) -> Bits:

    packet_size = src_msg.nbits
    snk_msg     = Bits(src_msg.nbits)



    while ( tm( dut, 0)[0] == Bits1(1) ):
        pass

    for i in range(packet_size):
       if 

      #pull CS high to end transaction
    tr( dut, 1, 0, 0 )
    tr( dut, 1, 0, 0 )
    tr( dut, 1, 0, 0 )
    tr( dut, 1, 0, 0 )

    return snk_msg