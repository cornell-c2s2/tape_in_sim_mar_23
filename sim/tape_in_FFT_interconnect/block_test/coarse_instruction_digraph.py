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

def fft_injection_minion(dut, array):

    in_msg = FFT_Input_Crossbar_Control( Bits1(0), Bits1(0) )
    out_msg = fl_model.SPI_minion_input(in_msg)
    run_test_vector_on_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    in_msg = FFT_Output_Crossbar_Control( Bits1(0) )
    out_msg = fl_model.SPI_minion_input(in_msg)
    run_test_vector_on_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    for i in range(TapeInMarchFL.FFT_LRG_SIZE):
        in_msg = FFT_Input_Crossbar_Injection(Bits32(array[i]))

        out_msg = fl_model.SPI_minion_input(in_msg)

        run_test_vector_on_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)
    for j in range(32 * round(math.log2(TapeInMarchFL.FFT_LRG_SIZE)) + 20):
        dut.sim_tick()
    for j in range(TapeInMarchFL.FFT_LRG_SIZE):
        run_test_vector_on_dut(dut, 0x0, 0x0, 0x1, Bits36(0), Bits36(out_msg[j]), TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)



def bypass_injection_minion(dut, value = Bits32(0xFFFFFFFF)):
    in_msg = FFT_Input_Crossbar_Control( Bits1(0), Bits1(1) )
    out_msg = fl_model.SPI_minion_input(in_msg)
    run_test_vector_on_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    in_msg = FFT_Output_Crossbar_Control( Bits1(1) )
    out_msg = fl_model.SPI_minion_input(in_msg)
    run_test_vector_on_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    in_msg = FFT_Input_Crossbar_Injection(value)
    out_msg = fl_model.SPI_minion_input(in_msg)
    run_test_vector_on_dut(dut, 0x0, 0x1, 0x1, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

def spi_config_master(dut):
    pass

def bypass_inject_master(dut):
    pass

def fft_inject_master(dut):
    pass

