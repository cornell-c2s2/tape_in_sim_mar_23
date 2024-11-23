#--------------------------------------------------------------
#
#   spi_tc_maker.py
#   Functions to mimic a full function SPI driver.
#   Written by Will Salcedo '23
#
#--------------------------------------------------------------

#Cocotb imports
from cocotb.triggers import ClockCycles

#Pymtl imports
from pymtl3 import *

async def tm( dut, miso ): 

    # Write input value to input port
    retval = (dut.spi_min.ms_cs.value, dut.spi_min.ms_sclk.value, dut.spi_min.ms_mosi.value)
    dut.spi_min.ms_miso.value = miso
  
    await ClockCycles(dut.clk, 1)

    return retval


#Writes/Reads an SPI transaction. Lowest level of abstraction. 
def master_serve(dut, src_msg : Bits) -> Bits:

    packet_size = src_msg.nbits
    snk_msg     = Bits(src_msg.nbits)



    while ( await tm( dut, 0)[0] == Bits1(1) ):
        pass

    for i in range(packet_size):
       if 

      #pull CS high to end transaction
    await tr( dut, 1, 0, 0 )
    await tr( dut, 1, 0, 0 )
    await tr( dut, 1, 0, 0 )
    await tr( dut, 1, 0, 0 )

    return snk_msg