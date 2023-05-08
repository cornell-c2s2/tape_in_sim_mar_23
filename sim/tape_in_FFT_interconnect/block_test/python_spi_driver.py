
def spi_master(dut, read_en, write_en, send_msg = Bits36(0), packet_size_bits = 36):
    return_msg = Bits(packet_size_bits)