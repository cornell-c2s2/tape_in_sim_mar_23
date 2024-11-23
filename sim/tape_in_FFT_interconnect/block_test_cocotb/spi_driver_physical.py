from pymtl3 import *
from spidriver import SPIDriver

s = SPIDriver("/dev/ttyUSB0")

def spi_write_physical(dut, src_msg):
    src_msg_bytes = []


    while src_msg.nbits > 8:
        src_msg_bytes.append(int(src_msg[src_msg.nbits - 8:src_msg.nbits]))
        src_msg = src_msg[:src_msg.nbits - 8]
    src_msg_bytes.append(int(src_msg))
    s.sel()
    readbytes = s.writeread(src_msg_bytes)
    
    s.unsel()

    return Bits40(int.from_bytes(readbytes,'big'))
