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
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x1, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

def fft_injection_minion(dut, array):

    in_msg = FFT_Input_Crossbar_Control( Bits1(0), Bits1(0) )
    out_msg = fl_model.SPI_minion_input(in_msg)
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    in_msg = FFT_Output_Crossbar_Control( Bits1(0) )
    out_msg = fl_model.SPI_minion_input(in_msg)
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    for i in range(TapeInMarchFL.FFT_LRG_SIZE):
        in_msg = FFT_Input_Crossbar_Injection(Bits32(array[i]))

        out_msg = fl_model.SPI_minion_input(in_msg)

        run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)
    for j in range(32 * round(math.log2(TapeInMarchFL.FFT_LRG_SIZE)) + 20): #Wait for FFT to finish.
        dut.sim_tick()
    for j in range(TapeInMarchFL.FFT_LRG_SIZE):
        run_test_vector_on_minion_dut(dut, 0x0, 0x0, 0x1, Bits36(0), Bits36(out_msg[j]), TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)



def bypass_injection_minion(dut, value = Bits32(0xFFFFFFFF)):
    in_msg = FFT_Input_Crossbar_Control( Bits1(0), Bits1(1) )
    out_msg = fl_model.SPI_minion_input(in_msg)
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    in_msg = FFT_Output_Crossbar_Control( Bits1(1) )
    out_msg = fl_model.SPI_minion_input(in_msg)
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    in_msg = FFT_Input_Crossbar_Injection(value)
    out_msg = fl_model.SPI_minion_input(in_msg)
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x1, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

def spi_config_master(dut, frequency : Bits3, packet_size : Bits5):
    in_msg = SPI_Master_frequency_select( frequency )
    out_msg = fl_model.SPI_minion_input( in_msg )
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    in_msg = SPI_Master_Chip_Select( Bits1(0) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    in_msg = SPI_Packet_Size_Select( packet_size )
    out_msg = fl_model.SPI_minion_input( in_msg )
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)


#This test is beyond screwed up because it takes like 5 SPI Master transcactions at this clock division to actually get the thing to work.
def bypass_inject_master(dut, spi_master_message : Bits32): 
    

    
    in_msg = SPI_Packet_Size_Select( Bits6(spi_master_message.nbits) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    in_msg  = FFT_Input_Crossbar_Control( Bits1(1), Bits1(1) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    in_msg  = FFT_Output_Crossbar_Control( Bits1(1) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    in_msg  = SPI_Master_Crossbar_Select( Bits1(1) )
    out_msg = fl_model.SPI_minion_input( in_msg )

    mas_in_msg = spi_master_message
    mas_out_msg = Bits36(0)

    run_test_vector_on_master_minion_transition_dut(dut, 0x1, 0x0, in_msg, out_msg, mas_in_msg, mas_out_msg, TapeInMarchFL.PACKET_SIZE, 32, fl_model.FREQ)

    in_msg  = SPI_Master_Crossbar_Select( Bits1(0) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)
    run_test_vector_on_minion_dut(dut, 0x0, 0x0, 0x1, mas_out_msg, Bits36(0x1FFFFFFFF), TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    while generate_minion_bitwise_test_from_input_array_flush_spi(0x0, 0x1, Bits36(0), Bits32(0), TapeInMarchFL.PACKET_SIZE):
        x = 1





def fft_inject_master(dut, spi_master_message : int):

    in_msg = SPI_Packet_Size_Select( Bits6(0x20) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    in_msg  = FFT_Input_Crossbar_Control( Bits1(1), Bits1(0) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    in_msg  = FFT_Output_Crossbar_Control( Bits1(0) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    in_msg  = SPI_Master_Crossbar_Select( Bits1(1) )
    out_msg = fl_model.SPI_minion_input( in_msg )

    mas_in_msg = spi_master_message
    mas_out_msg = Bits36(0)

    run_test_vector_on_master_minion_transition_dut(dut, 0x1, 0x0, in_msg, out_msg, Bits32(mas_in_msg[0]), mas_out_msg, TapeInMarchFL.PACKET_SIZE, 32, fl_model.FREQ)
    out_msg_fft = fl_model.SPI_master_input(Bits32(mas_in_msg[0]))
    for i in range(1,len(mas_in_msg)):
        run_test_vector_on_master_dut(dut, 0x0, 0x0, 0x0, Bits32(mas_in_msg[i]), mas_out_msg, 32, fl_model.FREQ)
        out_msg_fft = fl_model.SPI_master_input(Bits32(mas_in_msg[i]))
    
    in_msg  = SPI_Master_Crossbar_Select( Bits1(0) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    for j in range(32 * round(math.log2(TapeInMarchFL.FFT_LRG_SIZE)) + 20): #Wait for FFT to finish.
        dut.sim_tick()

    for j in range(TapeInMarchFL.FFT_LRG_SIZE):
        run_test_vector_on_minion_dut(dut, 0x0, 0x0, 0x1, Bits36(0), Bits36(out_msg_fft[j]), TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)
    
    in_msg  = FFT_Deserializer_Reset()
    out_msg = Bits36(0)
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg, TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)
    

    

