from pymtl3 import *
from math import log2
import math
import numpy as np
import random 

from .TapeInMarchFLClass import *
from .spi_tc_maker import *
from .command_generator import *
from .spi_sim_commands import *

fl_model = TapeInMarchFL()



def loopback(dut, value = Bits32(0xAAAAAAAA)):
    in_msg = FFT_Loopback(value)
    out_msg = fl_model.SPI_minion_input(in_msg)
    ret_msg = spi_write_read_transaction( dut, in_msg )

    assert out_msg == ret_msg, "ERROR: expected value incorrect. Expected: " + str(out_msg) + " Recieved: " + str(ret_msg)

def fft_injection_minion(dut, array):

    in_msg = FFT_Input_Crossbar_Control( Bits1(0), Bits1(0) )
    out_msg = fl_model.SPI_minion_input(in_msg)
    spi_write_transaction( dut, in_msg )

    in_msg = FFT_Output_Crossbar_Control( Bits1(0) )
    out_msg = fl_model.SPI_minion_input(in_msg)
    spi_write_transaction( dut, in_msg )

    for i in range(fl_model.FFT_LRG_SIZE):
        in_msg = FFT_Input_Crossbar_Injection(Bits32(array[i]))
        out_msg = fl_model.SPI_minion_input(in_msg)
        spi_write_transaction(dut, in_msg)
    
    for j in range(fl_model.FFT_LRG_SIZE * round(math.log2(fl_model.FFT_LRG_SIZE)) + 20): #Wait for FFT to finish.
        dut.sim_tick()
    for j in range(fl_model.FFT_LRG_SIZE):
        ret_val = spi_read_transaction(dut)
        delta = 10
        assert abs((out_msg[j] - ret_val[0]).int()) < delta, "ERROR: recieved-expected delta too large. Expected: " + str(out_msg[j]) + " Recieved: " + str(ret_val[0])+ " Delta: " + str(abs((out_msg[j] - ret_val[0]).int())) +  " >= " + str(delta)



def bypass_injection_minion(dut, value = Bits32(0xFFFFFFFF)):
    in_msg = FFT_Input_Crossbar_Control( Bits1(0), Bits1(1) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    
    spi_write_transaction( dut, in_msg )

    in_msg = FFT_Output_Crossbar_Control( Bits1(1) )
    out_msg = fl_model.SPI_minion_input(in_msg)
    
    spi_write_transaction( dut, in_msg )

    in_msg = FFT_Input_Crossbar_Injection(value)
    out_msg = fl_model.SPI_minion_input(in_msg)
    
    ret_val = spi_write_read_transaction(dut, in_msg)

    assert ret_val == out_msg, "ERROR: DUT value incorrect. Expected: " + str(out_msg) + " Recieved: " + str(ret_val)

def spi_config_master(dut, frequency : Bits3, packet_size : Bits6):

    in_msg = SPI_Master_Frequency_Select( frequency )
    out_msg = fl_model.SPI_minion_input( in_msg )
    spi_write_transaction( dut, in_msg )

    in_msg = SPI_Master_Chip_Select( Bits1(0) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    spi_write_transaction( dut, in_msg )

    in_msg = SPI_Packet_Size_Select( packet_size )
    out_msg = fl_model.SPI_minion_input( in_msg )
    spi_write_transaction( dut, in_msg )


#Edge case galore to preserve a high level of abstraction for tests created by the user. 
#The Master introduces a bunch of synchronization issues for the Minion.
#Need to flush components and such.
def bypass_inject_master(dut, spi_master_message : Bits, spi_master_packet_size : int): 
    

    
    in_msg = SPI_Packet_Size_Select( Bits6(spi_master_message.nbits) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    spi_write_transaction( dut, in_msg )

    in_msg  = FFT_Input_Crossbar_Control( Bits1(1), Bits1(1) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    spi_write_transaction( dut, in_msg )

    in_msg  = FFT_Output_Crossbar_Control( Bits1(1) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    spi_write_transaction( dut, in_msg )

    in_msg  = SPI_Master_Crossbar_Select( Bits1(1) )
    out_msg = fl_model.SPI_minion_input( in_msg )

    #Keep this in old SPI callcode because this requires strict timing to test in isolation. 
    mas_in_msg = spi_master_message
    mas_out_msg = Bits36(0)

    run_test_vector_on_master_minion_transition_dut(dut, 0x1, 0x0, in_msg, out_msg, mas_in_msg, mas_out_msg, TapeInMarchFL.PACKET_SIZE, spi_master_message.nbits, fl_model.FREQ)

    in_msg  = SPI_Master_Crossbar_Select( Bits1(0) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    
    #Can verify using new SPI Calls 
    spi_write_transaction( dut, in_msg )
    ret_msg = spi_read_transaction( dut )
    assert ret_msg == [concat(Bits4(1),zext(spi_master_message,32))], "ERROR: expected value incorrect. Expected: " + str(concat(Bits4(1),zext(spi_master_message,32))) + " Recieved: " + str(ret_msg)

    for i in range((2**fl_model.FREQ) * spi_master_packet_size * 2):
        dut.sim_tick()

    while generate_minion_bitwise_test_from_input_array_flush_spi(dut, 0x0, 0x1, Bits36(0), Bits32(0), TapeInMarchFL.PACKET_SIZE):
        x = 1




#Need to send an array of FFT messages in the system, this is simulating continuous streaming.
def fft_inject_master(dut, spi_master_message : int, spi_master_packet_size : int):

    in_msg = SPI_Packet_Size_Select( Bits6(spi_master_packet_size) )
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

    run_test_vector_on_master_minion_transition_dut(dut, 0x1, 0x0, in_msg, out_msg, Bits(spi_master_packet_size,mas_in_msg[0]), mas_out_msg, TapeInMarchFL.PACKET_SIZE, spi_master_packet_size, fl_model.FREQ)
    out_msg_fft = fl_model.SPI_master_input(Bits(spi_master_packet_size,v=mas_in_msg[0]))

    print(mas_in_msg)
    print(Bits32(mas_in_msg[0]))
    for i in range(1,len(mas_in_msg)):
        print(Bits32(mas_in_msg[i]))
        print("checking result: " + str(i))
        run_test_vector_on_master_dut(dut, 0x0, 0x0, 0x0, Bits32(mas_in_msg[i]), mas_out_msg, spi_master_packet_size, fl_model.FREQ)
        out_msg_fft = fl_model.SPI_master_input(Bits32(mas_in_msg[i]))
        
    
    print(out_msg_fft)
    in_msg  = SPI_Master_Crossbar_Select( Bits1(0) )
    out_msg = fl_model.SPI_minion_input( in_msg )
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg[0], TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)

    print("completed test vector")
    for j in range(32 * round(math.log2(fl_model.FFT_LRG_SIZE)) + 20): #Wait for FFT to finish.
        dut.sim_tick()

    print("starting to check results")
    for j in range(fl_model.FFT_LRG_SIZE):
        ret_val = spi_read_transaction(dut)
        delta = 12

        difference = (out_msg_fft[j] - ret_val[0]).int()
        assert abs(difference) < delta, "ERROR: recieved-expected delta too large. Expected: " + str(out_msg_fft[j]) + " Recieved: " + str(ret_val[0])+ " Delta: " + str(abs(difference)) + " => "+ str(delta)
        print("checking result: " + str(j))

    print("reset deserializer")
    in_msg  = FFT_Deserializer_Reset()
    out_msg = Bits36(0)
    run_test_vector_on_minion_dut(dut, 0x0, 0x1, 0x0, in_msg, out_msg, TapeInMarchFL.PACKET_SIZE, fl_model.FREQ)
    for i in range(max((2**fl_model.FREQ) * spi_master_packet_size * 2, 32 * round(math.log2(fl_model.FFT_LRG_SIZE)) + 20)):
        dut.sim_tick()
    
    print("started flush")
    while generate_minion_bitwise_test_from_input_array_flush_spi(dut, 0x0, 0x1, Bits36(0), Bits32(0), TapeInMarchFL.PACKET_SIZE): #Flush Errant Transactions
        x = 1
    print("finished flush")

    

def random_function(dut):
    selection = random.randint(0,5)
    print("selection: " + str( selection ) )
    if(selection == 0):
        loopback(dut, Bits32(random.randint(-100000,100000)))
    elif(selection == 1):
        bypass_injection_minion(dut, Bits32(random.randint(-65000,65000)))
    elif(selection == 2):
        inarray = []
        for i in range(fl_model.FFT_LRG_SIZE):
            inarray.append(Bits32(random.randint(-65000,65000)))
        fft_injection_minion(dut, inarray)
    elif(selection == 3):
        bitwidth = random.randint(8,32)
        randinteger = random.randint(-2**(bitwidth - 1),2**(bitwidth - 1))
        bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)
    elif(selection == 4):
        bitwidth = random.randint(8,32)
        randinteger = random.randint(0,2**(bitwidth - 1))
        spi_config_master(dut, Bits3(random.randint(0,7)), Bits6(bitwidth))
        bypass_inject_master(dut, Bits(bitwidth,v=randinteger), bitwidth)
    elif(selection == 5):
        bitwidth = random.randint(8,32)
        array = []
        for j in range(fl_model.FFT_LRG_SIZE):
            array.append(random.randint(0,2**(min(bitwidth - 1,16))))
        spi_config_master(dut, Bits3(random.randint(0,7)),Bits6(bitwidth) )
        fft_inject_master(dut, array, bitwidth)

def tapein_one( dut, call_fft ):
    resp_fft = fixed_point_fft(32, 16, 8, call_fft)
    out_msg = Bits32(0)


    for i in range(fl_model.FFT_SML_SIZE):
        
        run_test_vector_on_minion_dut(dut, 0x1, 0x1, 0x0, Bits32(call_fft[i]), out_msg, 32, fl_model.FREQ)
    
    for i in range(fl_model.FFT_SML_SIZE):
        
        run_test_vector_on_minion_dut(dut, 0x2, 0x0, 0x1, out_msg, resp_fft, 32, fl_model.FREQ)

