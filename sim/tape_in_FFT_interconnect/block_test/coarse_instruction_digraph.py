from pymtl3 import *
from math import log2
import math
import numpy as np

from .TapeInMarchFLClass import *
from .spi_tc_maker import *
from .command_generator import *

fl_model = TapeInMarchFL()

def loopback(dut, value = Bits32(0xdeadbeef)):
    in_msg = FFT_Loopback(value)
    out_msg = fl_model.SPI_minion_input(in_msg)
    run_test_vector_on_dut(dut, 0x0, 0x1, 0x1, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

def fft_injection_minion(dut):
    pass

def bypass_injection_minion(dut):
    pass

def spi_config_master(dut):
    pass

def bypass_inject_master(dut):
    pass

def fft_inject_master(dut):
    pass

