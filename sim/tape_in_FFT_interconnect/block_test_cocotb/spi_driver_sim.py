# --------------------------------------------------------------
#
#   spi_tc_maker.py
#   Functions to mimic a full function SPI driver.
#   Written by Will Salcedo '23
#
# --------------------------------------------------------------

#Cocotb imports
from cocotb.triggers import ClockCycles

#Pymtl imports
from pymtl3 import *

async def tr(
    dut, cs, sclk, mosi
):  # going to be so messy on the screen, must be a better way to do this.

    # Write input value to input port
    dut.cs.value = cs
    dut.sclk.value = sclk
    dut.mosi.value = int(mosi)
    retval = dut.miso.value.integer
    await ClockCycles(dut.clk, 1)
    return retval


# Writes/Reads an SPI transaction. Lowest level of abstraction.
async def spi_write(dut, src_msg: Bits) -> Bits:
    packet_size = src_msg.nbits
    snk_msg = Bits(packet_size)
    
    await tr(dut, 1, 0, 0)

    for i in range(packet_size):
        await tr(dut, 0, 0, 0)
        await tr(dut, 0, 0, src_msg[packet_size - i - 1])
        await tr(dut, 0, 1, src_msg[packet_size - i - 1])
        await tr(dut, 0, 1, 0)
        snk_msg[packet_size - i - 1] = await tr(dut, 0, 0, 0)

    # pull CS high to end await transaction
    await tr(dut, 1, 0, 0)

    return snk_msg
