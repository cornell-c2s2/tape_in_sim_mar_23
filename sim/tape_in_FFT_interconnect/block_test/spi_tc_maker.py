#--------------------------------------------------------------
#
# spi_tc_maker
# Class which encapsulates the SPI Protocal for Tape In 2.
# By Will Salcedo with help from Austin Brown
# 
# Extremely compicated and muddled. This module is still very much an experiment and could be improved upon in the future. 
#
#--------------------------------------------------------------


from pymtl3 import *

# Helper function to drive Verilog model and compare test cases
def t( dut, 
       cs,    sclk,    mosi,    miso, \
       cs_2,  sclk_2,  mosi_2,  miso_2, \
       cs_3,  sclk_3,  mosi_3,  miso_3, \
       ms_cs, ms_sclk, ms_mosi, ms_miso
       ): #going to be so messy on the screen, must be a better way to do this. 

  # Write input value to input port
  dut.spi_min.cs      @= cs
  dut.spi_min.sclk    @= sclk
  dut.spi_min.mosi    @= mosi

  dut.spi_min.cs_2    @= cs_2
  dut.spi_min.sclk_2  @= sclk_2
  dut.spi_min.mosi_2  @= mosi_2

  dut.spi_min.cs_2    @= cs_3
  dut.spi_min.sclk_2  @= sclk_3
  dut.spi_min.mosi_2  @= mosi_3

  dut.spi_min.ms_miso @= ms_miso


  if miso != '?':
    assert dut.spi_min.miso == miso, "ERROR: expected value incorrect. Expected: " + str(miso) + " Recieved: " + str(dut.spi_min.miso)


  if miso_2 != '?':
    assert dut.spi_min.miso_2 == miso_2

  if miso_3 != '?':
    assert dut.spi_min.miso_3 == miso_3

  if ms_cs != '?':
    assert dut.spi_min.ms_cs == ms_cs
  
  if ms_sclk != '?':
    assert dut.spi_min.ms_sclk == ms_sclk

  if ms_mosi != '?':
    assert dut.spi_min.ms_mosi == ms_mosi


  # Tick simulator one cycle
  dut.sim_tick()


def tr( dut, 
       cs,    sclk,    mosi,    miso,
       ): #going to be so messy on the screen, must be a better way to do this. 

  # Write input value to input port
  dut.spi_min.cs      @= cs
  dut.spi_min.sclk    @= sclk
  dut.spi_min.mosi    @= mosi
  
  retval = dut.spi_min.miso 
  
  dut.sim_tick()
  return retval

  

#Helper funciton which appends values to our SPI vector array. Helps for readability.
def bitwise_input_array_helper(output_arr, cs, sclk, mosi ,miso):
  output_arr[0].append(cs)
  output_arr[1].append(sclk)
  output_arr[2].append(mosi)
  output_arr[3].append(miso)

  return output_arr

def bitwise_input_array_helper_master_transition(output_arr, min_cs, min_sclk, min_mosi, min_miso, mas_cs, mas_sclk, mas_mosi, mas_miso):
  output_arr[0].append(min_cs)
  output_arr[1].append(min_sclk)
  output_arr[2].append(min_mosi)
  output_arr[3].append(min_miso)
  output_arr[4].append(mas_cs)
  output_arr[5].append(mas_sclk)
  output_arr[6].append(mas_mosi)
  output_arr[7].append(mas_miso)


  return output_arr
def generate_minion_bitwise_test_from_input_array(val_write, val_read, src_msg, snk_msg, PACKET_SIZE):
  output_arr = [[],[],[],[]]

  #Hold cs to 1 so the SPI minion is reset to the base state.

                                        #cs clk  mosi  miso
  bitwise_input_array_helper(output_arr, 1, 0,   0,    '?')
  bitwise_input_array_helper(output_arr, 1, 0,   0,    '?')
  bitwise_input_array_helper(output_arr, 1, 0,   0,    '?')
  bitwise_input_array_helper(output_arr, 1, 0,   0,    '?')
  bitwise_input_array_helper(output_arr, 1, 0,   0,    '?')


  #Sending the val_write and val_read bits over

  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' ) # pull_en = 1
  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   val_write,    '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   val_write,    '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   0,            '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' ) # pull_en = 1
  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   val_read,     '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   val_read,     '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   0,            '?' )

  #User defined payload
  for i in range(PACKET_SIZE):
    bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' ) # pull_en = 1
    bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   src_msg[PACKET_SIZE - i - 1],   '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   src_msg[PACKET_SIZE - i - 1],   '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            '?' )

  
  #pull CS high to end transaction
  bitwise_input_array_helper(output_arr, 1, 0,   0,            '?' ) # pull_en = 1
  bitwise_input_array_helper(output_arr, 1, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            '?' )

  #if you are expecting data back... 
  if val_read == 1:
    #Manually send that we are not reading or writing in the next cycles. 
    bitwise_input_array_helper(output_arr, 1, 0,   0,          '?' ) # pull_en = 1
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          1 ) # pull_en = 1
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          1 ) # pull_en = 1
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    #Confirm that what you get back is correct
    for i in range(PACKET_SIZE):
      bitwise_input_array_helper(output_arr, 0, 0,   0,          snk_msg[PACKET_SIZE - i - 1]) # pull_en = 1
      bitwise_input_array_helper(output_arr, 0, 0,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 0,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 0,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 0,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 0,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 1,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 1,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 1,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 1,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 1,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 1,   0,         '?'        )
  
  return output_arr

#Secret sauce that generates a test vector which allows you to just iterate through the array and pass values to t()
# [[cs],[sclk],[mosi].[miso]]
def generate_minion_bitwise_test_from_input_array_flush_spi(dut, val_write, val_read, src_msg, snk_msg, PACKET_SIZE):

  #Hold cs to 1 so the SPI minion is reset to the base state.

     #cs clk  mosi  miso
  tr( dut, 1, 0,   0,    0)
  tr( dut, 1, 0,   0,    0)
  tr( dut, 1, 0,   0,    0)
  tr( dut, 1, 0,   0,    0)
  tr( dut, 1, 0,   0,    0)


  #Sending the val_write and val_read bits over

  tr( dut, 0, 0,   0,            '?' ) # pull_en = 1
  tr( dut, 0, 0,   0,            '?' )
  tr( dut, 0, 0,   0,            '?' )
  tr( dut, 0, 0,   0,            '?' )
  tr( dut, 0, 0,   val_write,    '?' )
  tr( dut, 0, 0,   val_write,    '?' )
  tr( dut, 0, 1,   val_write,    '?' )
  tr( dut, 0, 1,   val_write,    '?' )
  tr( dut, 0, 1,   val_write,    '?' )
  tr( dut, 0, 1,   val_write,    '?' )
  tr( dut, 0, 1,   val_write,    '?' )
  tr( dut, 0, 1,   0,            '?' )
  tr( dut, 0, 0,   0,            '?' ) # pull_en = 1
  tr( dut, 0, 0,   0,            '?' )
  tr( dut, 0, 0,   0,            '?' )
  tr( dut, 0, 0,   0,            '?' )
  tr( dut, 0, 0,   val_read,     '?' )
  tr( dut, 0, 0,   val_read,     '?' )
  tr( dut, 0, 1,   val_read,     '?' )
  tr( dut, 0, 1,   val_read,     '?' )
  tr( dut, 0, 1,   val_read,     '?' )
  tr( dut, 0, 1,   val_read,     '?' )
  tr( dut, 0, 1,   val_read,     '?' )
  tr( dut, 0, 1,   0,            '?' )

  #User defined payload
  for i in range(PACKET_SIZE):
    tr( dut, 0, 0,   0,            '?' ) # pull_en = 1
    tr( dut, 0, 0,   0,            '?' )
    tr( dut, 0, 0,   0,            '?' )
    tr( dut, 0, 0,   0,            '?' )
    tr( dut, 0, 0,   src_msg[PACKET_SIZE - i - 1],   '?' )
    tr( dut, 0, 0,   src_msg[PACKET_SIZE - i - 1],   '?' )
    tr( dut, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    tr( dut, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    tr( dut, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    tr( dut, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    tr( dut, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    tr( dut, 0, 1,   0,            '?' )

  
  #pull CS high to end transaction
  tr( dut, 1, 0,   0,            '?' ) # pull_en = 1
  tr( dut, 1, 0,   0,            '?' )
  tr( dut, 1, 0,   0,            '?' )
  tr( dut, 1, 0,   0,            '?' )
  tr( dut, 1, 0,   0,            '?' )
  tr( dut, 1, 0,   0,            '?' )
  tr( dut, 1, 1,   0,            '?' )
  tr( dut, 1, 1,   0,            '?' )
  tr( dut, 1, 1,   0,            '?' )
  tr( dut, 1, 1,   0,            '?' )
  tr( dut, 1, 1,   0,            '?' )
  tr( dut, 1, 1,   0,            '?' )

  #if you are expecting data back... 
  if val_read == 1:
    #Manually send that we are not reading or writing in the next cycles. 
    tr( dut, 1, 0,   0,          '?' ) # pull_en = 1
    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )

    valid_msg = bool(tr(dut,  0, 0,   0,      dut.spi_min.miso    )) # pull_en = 1

    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 0,   0,          1   ) # pull_en = 1
    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 0,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    tr( dut, 0, 1,   0,          '?' )
    #Confirm that what you get back is correct
    for i in range(PACKET_SIZE):
      tr( dut, 0, 0,   0,          '?')
      tr( dut, 0, 0,   0,         '?'        )
      tr( dut, 0, 0,   0,         '?'        )
      tr( dut, 0, 0,   0,         '?'        )
      tr( dut, 0, 0,   0,         '?'        )
      tr( dut, 0, 0,   0,         '?'        )
      tr( dut, 0, 1,   0,         '?'        )
      tr( dut, 0, 1,   0,         '?'        )
      tr( dut, 0, 1,   0,         '?'        )
      tr( dut, 0, 1,   0,         '?'        )
      tr( dut, 0, 1,   0,         '?'        )
      tr( dut, 0, 1,   0,         '?'        )
  
  return valid_msg


def generate_master_minion_immediate_transition_bitwise_test_from_input_array(val_write, val_read, min_src_msg, min_snk_msg, mas_src_msg, mas_snk_msg, PACKET_SIZE, PACKET_SIZE_MASTER, FREQ):
  output_arr = [[],[],[],[],[],[],[],[]]

  #Hold cs to 1 so the SPI minion is reset to the base state.

                                        #cs clk  mosi  miso
  bitwise_input_array_helper_master_transition(output_arr, 1, 0,   0,    0, '?', '?', '?', 0)
  bitwise_input_array_helper_master_transition(output_arr, 1, 0,   0,    0, '?', '?', '?', 0)
  bitwise_input_array_helper_master_transition(output_arr, 1, 0,   0,    0, '?', '?', '?', 0)
  bitwise_input_array_helper_master_transition(output_arr, 1, 0,   0,    0, '?', '?', '?', 0)
  bitwise_input_array_helper_master_transition(output_arr, 1, 0,   0,    0, '?', '?', '?', 0)


  #Sending the val_write and val_read bits over

  bitwise_input_array_helper_master_transition(output_arr, 0, 0,   0,            '?', '?', '?', '?', 0 ) # pull_en = 1
  bitwise_input_array_helper_master_transition(output_arr, 0, 0,   0,            '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 0,   0,            '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 0,   0,            '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 0,   val_write,    '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 0,   val_write,    '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 1,   val_write,    '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 1,   val_write,    '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 1,   val_write,    '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 1,   val_write,    '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 1,   val_write,    '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 1,   0,            '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 0,   0,            '?', '?', '?', '?', 0 ) # pull_en = 1
  bitwise_input_array_helper_master_transition(output_arr, 0, 0,   0,            '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 0,   0,            '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 0,   0,            '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 0,   val_read,     '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 0,   val_read,     '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 1,   val_read,     '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 1,   val_read,     '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 1,   val_read,     '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 1,   val_read,     '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 1,   val_read,     '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 0, 1,   0,            '?', '?', '?', '?', 0 )

  #User defined payload
  for i in range(PACKET_SIZE):
    bitwise_input_array_helper_master_transition(output_arr, 0, 0,   0,            '?', '?', '?', '?', 0 ) # pull_en = 1
    bitwise_input_array_helper_master_transition(output_arr, 0, 0,   0,            '?', '?', '?', '?', 0 )
    bitwise_input_array_helper_master_transition(output_arr, 0, 0,   0,            '?', '?', '?', '?', 0 )
    bitwise_input_array_helper_master_transition(output_arr, 0, 0,   0,            '?', '?', '?', '?', 0 )
    bitwise_input_array_helper_master_transition(output_arr, 0, 0,   min_src_msg[PACKET_SIZE - i - 1],   '?', '?', '?', '?', 0 )
    bitwise_input_array_helper_master_transition(output_arr, 0, 0,   min_src_msg[PACKET_SIZE - i - 1],   '?', '?', '?', '?', 0 )
    bitwise_input_array_helper_master_transition(output_arr, 0, 1,   min_src_msg[PACKET_SIZE - i - 1],   '?', '?', '?', '?', 0 )
    bitwise_input_array_helper_master_transition(output_arr, 0, 1,   min_src_msg[PACKET_SIZE - i - 1],   '?', '?', '?', '?', 0 )
    bitwise_input_array_helper_master_transition(output_arr, 0, 1,   min_src_msg[PACKET_SIZE - i - 1],   '?', '?', '?', '?', 0 )
    bitwise_input_array_helper_master_transition(output_arr, 0, 1,   min_src_msg[PACKET_SIZE - i - 1],   '?', '?', '?', '?', 0 )
    bitwise_input_array_helper_master_transition(output_arr, 0, 1,   min_src_msg[PACKET_SIZE - i - 1],   '?', '?', '?', '?', 0 )
    bitwise_input_array_helper_master_transition(output_arr, 0, 1,   0,            '?', '?', '?', '?', 0 )

  
  #pull CS high to end transaction
  bitwise_input_array_helper_master_transition(output_arr, 1, 0,   0,            '?', '?', '?', '?', 0 ) # pull_en = 1
  bitwise_input_array_helper_master_transition(output_arr, 1, 0,   0,            '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 1, 0,   0,            '?', '?', '?', '?', 0 )
  
  bitwise_input_array_helper_master_transition(output_arr, 1, 0, 0, '?', 0, 1,  mas_snk_msg[PACKET_SIZE_MASTER - 1],  mas_src_msg[PACKET_SIZE_MASTER - 1]) #SCLK HIGH
  bitwise_input_array_helper_master_transition(output_arr, 1, 0, 0, '?', 0, 1,  mas_snk_msg[PACKET_SIZE_MASTER - 1],  mas_src_msg[PACKET_SIZE_MASTER - 1]) #SCLK HIGH
  bitwise_input_array_helper_master_transition(output_arr, 1, 0, 0, '?', 0, 1,  mas_snk_msg[PACKET_SIZE_MASTER - 1],  mas_src_msg[PACKET_SIZE_MASTER - 1]) #SCLK HIGH
  for i in range(PACKET_SIZE_MASTER):
    bitwise_input_array_helper_master_transition(output_arr, 1, 0, 0, '?', 0, 1,  mas_snk_msg[PACKET_SIZE_MASTER - i - 1],  mas_src_msg[PACKET_SIZE_MASTER - i - 1]) #SCLK HIGH
    for j in range(2**(FREQ) - 1):#repeat for frequency configuration
      bitwise_input_array_helper_master_transition(output_arr, 1, 0, 0, '?', 0, 1,  mas_snk_msg[PACKET_SIZE_MASTER - i - 1],  mas_src_msg[PACKET_SIZE_MASTER - i - 1])

    bitwise_input_array_helper_master_transition(output_arr, 1, 1, 0, '?', 0, 0,  '?', ~mas_src_msg[PACKET_SIZE_MASTER - i - 1]) #SCLK LOW
    for j in range(2**(FREQ) - 1): #repeat for frequency configuration
      bitwise_input_array_helper_master_transition(output_arr, 1, 1, 0, '?', 0, 0,  '?', ~mas_src_msg[PACKET_SIZE_MASTER - i - 1])
  
  bitwise_input_array_helper_master_transition(output_arr, 1, 0,   0,            '?', '?', '?', '?', 0 )
  bitwise_input_array_helper_master_transition(output_arr, 1, 0,   0,            '?', '?', '?', '?', 0 )



  return output_arr


def generate_minion_bitwise_test_from_input_array_poll_valid(val_write, val_read, src_msg, snk_msg, PACKET_SIZE):
  output_arr = [[],[],[],[]]

  #Hold cs to 1 so the SPI minion is reset to the base state.

                                        #cs clk  mosi  miso
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)


  #Sending the val_write and val_read bits over

  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' ) # pull_en = 1
  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   val_write,    '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   val_write,    '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   0,            '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' ) # pull_en = 1
  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   val_read,     '?' )
  bitwise_input_array_helper(output_arr, 0, 0,   val_read,     '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     '?' )
  bitwise_input_array_helper(output_arr, 0, 1,   0,            '?' )

  #User defined payload
  for i in range(PACKET_SIZE):
    bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' ) # pull_en = 1
    bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   src_msg[PACKET_SIZE - i - 1],   '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   src_msg[PACKET_SIZE - i - 1],   '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[PACKET_SIZE - i - 1],   '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            '?' )

  
  #pull CS high to end transaction
  bitwise_input_array_helper(output_arr, 1, 0,   0,            '?' ) # pull_en = 1
  bitwise_input_array_helper(output_arr, 1, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 0,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            '?' )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            '?' )

  #if you are expecting data back... 
  if val_read == 1:
    #Manually send that we are not reading or writing in the next cycles. 
    bitwise_input_array_helper(output_arr, 1, 0,   0,          '?' ) # pull_en = 1
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          1   ) # pull_en = 1
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          1   ) # pull_en = 1
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 0,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    bitwise_input_array_helper(output_arr, 0, 1,   0,          '?' )
    #Confirm that what you get back is correct
    for i in range(PACKET_SIZE):
      bitwise_input_array_helper(output_arr, 0, 0,   0,          snk_msg[PACKET_SIZE - i - 1]) # pull_en = 1
      bitwise_input_array_helper(output_arr, 0, 0,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 0,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 0,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 0,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 0,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 1,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 1,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 1,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 1,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 1,   0,         '?'        )
      bitwise_input_array_helper(output_arr, 0, 1,   0,         '?'        )
  
  return output_arr

def generate_master_bitwise_test_from_input_array(val_write, val_read, src_msg, snk_msg, PACKET_SIZE, FREQ):
  output_arr = [[],[],[],[]]

  #perspective of the microphone
                                        #cs clk mosi miso
  bitwise_input_array_helper(output_arr, 1, 0,  0,   0)
  bitwise_input_array_helper(output_arr, 1, 0,  0,   0)

  for i in range(PACKET_SIZE):
    bitwise_input_array_helper(output_arr, 0, 1,  snk_msg[PACKET_SIZE - i - 1],  src_msg[PACKET_SIZE - i - 1]) #SCLK HIGH
    for j in range(2**(FREQ) - 1):#repeat for frequency configuration
      bitwise_input_array_helper(output_arr, 0, 1,  snk_msg[PACKET_SIZE - i - 1],  src_msg[PACKET_SIZE - i - 1])
    
    bitwise_input_array_helper(output_arr, 0, 0,  '?', src_msg[PACKET_SIZE - i - 1]) #SCLK LOW
    for j in range(2**(FREQ) - 1): #repeat for frequency configuration
      bitwise_input_array_helper(output_arr, 0, 0,  '?', src_msg[PACKET_SIZE - i - 1])

  
  bitwise_input_array_helper(output_arr, 0, 0,  '?', 0) #cs_low_wait
  bitwise_input_array_helper(output_arr, 1, 0,  '?', 0) #done
  return output_arr


def run_test_vector_on_minion_dut(dut, spi_select, val_write, val_read, src_msg, snk_msg, PACKET_SIZE, FREQ):

  spi_array = [[],[],[],[]]

  spi_array = generate_minion_bitwise_test_from_input_array(val_write, val_read, src_msg, snk_msg, PACKET_SIZE)

  if(spi_select == 0):
    for i in range(len(spi_array[0])):
      t( dut, spi_array[0][i], spi_array[1][i], spi_array[2][i], spi_array[3][i], Bits1(0), Bits1(0), Bits1(0), '?', Bits1(0), Bits1(0), Bits1(0), '?', '?', '?', '?', Bits1(0))
  elif(spi_select == 1):
    for i in range(len(spi_array[0])):
      t( dut, Bits1(0), Bits1(0), Bits1(0), '?', spi_array[0][i], spi_array[1][i], spi_array[2][i], spi_array[3][i], Bits1(0), Bits1(0), Bits1(0), '?', '?', '?', '?', Bits1(0))
  elif(spi_select == 2):
    for i in range(len(spi_array[0])):
      t( dut, Bits1(0), Bits1(0), Bits1(0), '?', Bits1(0), Bits1(0), Bits1(0), '?', spi_array[0][i], spi_array[1][i], spi_array[2][i], spi_array[3][i], '?', '?', '?', Bits1(0))

def run_test_vector_on_master_dut(dut, spi_select, val_write, val_read, src_msg, snk_msg, PACKET_SIZE, FREQ):

  spi_ms_array = [[],[],[],[]]
  spi_ms_array = generate_master_bitwise_test_from_input_array(val_write, val_read, src_msg, snk_msg, PACKET_SIZE, FREQ)

  for i in range(len(spi_ms_array[0])):
    #t( dut, Bits1(0), Bits1(0), Bits1(0), '?', Bits1(0), Bits1(0), Bits1(0), '?', Bits1(0), Bits1(0), Bits1(0), '?', spi_ms_array[0][i], spi_ms_array[1][i], spi_ms_array[2][i], spi_ms_array[3][i])
    t( dut, Bits1(0), Bits1(0), Bits1(0), '?', Bits1(0), Bits1(0), Bits1(0), '?', Bits1(0), Bits1(0), Bits1(0), '?', '?', '?', '?', spi_ms_array[3][i])

def run_test_vector_on_master_minion_transition_dut(dut, val_write, val_read, min_src_msg, min_snk_msg, mas_src_msg, mas_snk_msg, PACKET_SIZE, PACKET_SIZE_MASTER, FREQ):
  spi_array = [[],[],[],[],[],[],[],[]]

  spi_array = generate_master_minion_immediate_transition_bitwise_test_from_input_array(val_write, val_read, min_src_msg, min_snk_msg, mas_src_msg, mas_snk_msg, PACKET_SIZE, PACKET_SIZE_MASTER, FREQ)

  for i in range(len(spi_array[0])):
    #t( dut, spi_array[0][i], spi_array[1][i], spi_array[2][i], spi_array[3][i], Bits1(0), Bits1(0), Bits1(0), '?', Bits1(0), Bits1(0), Bits1(0), '?', spi_array[4][i], spi_array[5][i], spi_array[6][i], spi_array[7][i])
    t( dut, spi_array[0][i], spi_array[1][i], spi_array[2][i], spi_array[3][i], Bits1(0), Bits1(0), Bits1(0), '?', Bits1(0), Bits1(0), Bits1(0), '?', '?', '?', '?', spi_array[7][i])