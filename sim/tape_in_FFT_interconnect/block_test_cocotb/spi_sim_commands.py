#--------------------------------------------------------------
#
#   spi_sim_commands.py
#   Constructs logical low-level protocol calls to a dut or whatever.
#   Written by Will Salcedo '23
#
#--------------------------------------------------------------

from pymtl3 import *
from spi_driver_sim import *
from spi_stream_protocol import *

async def spi_write_transaction(dut, msg : Bits) -> None:
    msg_with_protocol = write_msg(msg)
    await spi_write(dut, msg_with_protocol)

async def spi_write_read_transaction(dut, msg: Bits) -> Bits:
    msg_with_protocol = write_read_msg(msg)
    await spi_write(dut, msg_with_protocol)
    msg_with_protocol = nocommand_read_msg()
    retmsg = await spi_write(dut, msg_with_protocol)

    return [retmsg[2:38]]

async def spi_read_transaction(dut) -> Bits:
    msg_with_protocol = read_msg()
    await spi_write(dut, msg_with_protocol)
    msg_with_protocol = nocommand_read_msg()
    retmsg = await spi_write(dut, msg_with_protocol)
    return [retmsg[2:38]]
