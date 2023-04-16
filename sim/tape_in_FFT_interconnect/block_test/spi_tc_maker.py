

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
  """
  dut.spi_min.ms_cs   @= ms_cs
  dut.spi_min.ms_sclk @= ms_sclk
  dut.spi_min.ms_miso @= ms_miso
  dut.sim_eval_combinational()
  """
  """
  dut.spi_min.ms_packet_size_val @= ms_packet_size_val
  dut.spi_min.ms_packet_size_msg @= ms_packet_size_msg
  dut.spi_min.ms_cs_val @= ms_cs_val
  dut.spi_min.ms_cs_msg @= ms_cs_msg
  dut.spi_min.ms_freq_val @= ms_freq_val
  dut.spi_min.ms_freq_msg @= ms_freq_msg
  dut.spi_min.ms_send_rdy @= ms_send_rdy
  dut.spi_min.ms_recv_val @= ms_recv_val
  dut.spi_min.ms_recv_msg @= ms_recv_msg
  dut.spi_min.ms_miso @= ms_miso
  """
  #These will be used for the next tape-in
  #dut.spi_min.ms_mode.rdy @=
  #dut.spi_min.ms_mode.val @=
  #dut.spi_min.ms_mode.msg @=


  if miso != '?':
    assert dut.spi_min.miso == miso


  if miso_2 != '?':
    assert dut.spi_min.miso_2 == miso_2

  if miso_3 != '?':
    assert dut.spi_min.miso_3 == miso_3


  if ms_mosi != '?':
    assert dut.spi_min.ms_mosi == ms_mosi


  # Tick simulator one cycle
  dut.sim_tick()

#Helper funciton which appends values to our SPI vector array. Helps for readability.
def bitwise_input_array_helper(output_arr, cs, sclk, mosi ,miso):
  output_arr[0].append(cs)
  output_arr[1].append(sclk)
  output_arr[2].append(mosi)
  output_arr[3].append(miso)

  return output_arr


#Secret sauce that generates a test vector which allows you to just iterate through the array and pass values to t()
# [[cs],[sclk],[mosi].[miso]]
def generate_minion_bitwise_test_from_input_array(val_write, val_read, src_msg, snk_msg, PACKET_SIZE):
  output_arr = [[],[],[],[]]

  #Hold cs to 1 so the SPI minion is reset to the base state.

                                        #cs clk  mosi  miso
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)


  #Sending the val_write and val_read bits over

  bitwise_input_array_helper(output_arr, 0, 0,   0,            0 ) # pull_en = 1
  bitwise_input_array_helper(output_arr, 0, 0,   0,            0 )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            0 )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            0 )
  bitwise_input_array_helper(output_arr, 0, 0,   val_write,    0 )
  bitwise_input_array_helper(output_arr, 0, 0,   val_write,    0 )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    0 )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    0 )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    0 )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    0 )
  bitwise_input_array_helper(output_arr, 0, 1,   val_write,    0 )
  bitwise_input_array_helper(output_arr, 0, 1,   0,            0 )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            0 ) # pull_en = 1
  bitwise_input_array_helper(output_arr, 0, 0,   0,            0 )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            0 )
  bitwise_input_array_helper(output_arr, 0, 0,   0,            0 )
  bitwise_input_array_helper(output_arr, 0, 0,   val_read,     0 )
  bitwise_input_array_helper(output_arr, 0, 0,   val_read,     0 )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     0 )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     0 )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     0 )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     0 )
  bitwise_input_array_helper(output_arr, 0, 1,   val_read,     0 )
  bitwise_input_array_helper(output_arr, 0, 1,   0,            0 )

  #User defined payload
  for i in range(PACKET_SIZE):
    bitwise_input_array_helper(output_arr, 0, 0,   0,            0 ) # pull_en = 1
    bitwise_input_array_helper(output_arr, 0, 0,   0,            0 )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            0 )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            0 )
    bitwise_input_array_helper(output_arr, 0, 0,   src_msg[i],   0 )
    bitwise_input_array_helper(output_arr, 0, 0,   src_msg[i],   0 )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[i],   0 )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[i],   0 )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[i],   0 )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[i],   0 )
    bitwise_input_array_helper(output_arr, 0, 1,   src_msg[i],   0 )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            0 )

  
  #pull CS high to end transaction
  bitwise_input_array_helper(output_arr, 1, 0,   0,            0 ) # pull_en = 1
  bitwise_input_array_helper(output_arr, 1, 0,   0,            0 )
  bitwise_input_array_helper(output_arr, 1, 0,   0,            0 )
  bitwise_input_array_helper(output_arr, 1, 0,   0,            0 )
  bitwise_input_array_helper(output_arr, 1, 0,   0,            0 )
  bitwise_input_array_helper(output_arr, 1, 0,   0,            0 )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            0 )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            0 )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            0 )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            0 )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            0 )
  bitwise_input_array_helper(output_arr, 1, 1,   0,            0 )

  #if you are expecting data back... 
  if val_read == 1:
    #Manually send that we are not reading or writing in the next cycles. 
    bitwise_input_array_helper(output_arr, 0, 0,   0,            1 ) # pull_en = 1
    bitwise_input_array_helper(output_arr, 0, 0,   0,            1 )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            1 )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            1 )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            1 )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            1 )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            1 )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            1 )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            1 )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            1 )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            1 )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            1 )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            0 ) # pull_en = 1
    bitwise_input_array_helper(output_arr, 0, 0,   0,            0 )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            0 )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            0 )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            0 )
    bitwise_input_array_helper(output_arr, 0, 0,   0,            0 )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            0 )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            0 )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            0 )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            0 )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            0 )
    bitwise_input_array_helper(output_arr, 0, 1,   0,            0 )

    #Confirm that what you get back is correct
    for i in range(PACKET_SIZE):
      bitwise_input_array_helper(output_arr, 0, 0,   0,          snk_msg[i]) # pull_en = 1
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

"""

# Helper function to drive Verilog model and compare test cases
def t( dut, 
       cs,    sclk,    mosi,    miso, \
       cs_2,  sclk_2,  mosi_2,  miso_2, \
       cs_3,  sclk_3,  mosi_3,  miso_3,
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

  dut.spi_min.ms_cs   @= ms_cs
  dut.spi_min.ms_sclk @= ms_sclk
  dut.spi_min.ms_miso @= ms_miso
  dut.sim_eval_combinational()


  if miso != '?':
    assert dut.spi_min.miso == miso


  if miso_2 != '?':
    assert dut.spi_min.miso_2 == miso_2

  if miso_3 != '?':
    assert dut.spi_min.miso_3 == miso_3


  if ms_mosi != '?':
    assert dut.spi_min.ms_mosi == ms_mosi


  # Tick simulator one cycle
  dut.sim_tick()
"""
"""
#Helper funciton which appends values to our SPI vector array. Helps for readability.
def bitwise_master_input_array_helper(output_arr, cs, sclk, mosi, miso):
  output_arr[0].append(cs)
  output_arr[1].append(sclk)
  output_arr[2].append(mosi)
  output_arr[3].append(miso)

  return output_arr
"""
def generate_master_bitwise_test_from_input_array(val_write, val_read, src_msg, snk_msg, PACKET_SIZE):
  output_arr = [[],[],[],[]]

  #perspective of the microphone
                                        #cs clk mosi miso
  bitwise_input_array_helper(output_arr, 1, 0,  0,   0) #will be repeated for number of configurations (x4 for now) INIT
  bitwise_input_array_helper(output_arr, 1, 0,  0,   0) 
  bitwise_input_array_helper(output_arr, 1, 0,  0,   0)
  bitwise_input_array_helper(output_arr, 1, 0,  0,   0)


  bitwise_input_array_helper(output_arr, 0, 0,  1,   0) #START0
  bitwise_input_array_helper(output_arr, 0, 0,  1,   0) #START1

  for i in range(PACKET_SIZE):
    bitwise_input_array_helper(output_arr, 0, 1,  src_msg[i],  ~src_msg[i]) #SCLK HIGH
    for i in range(FREQ**2-1):#repeat for frequency configuration
      bitwise_input_array_helper(output_arr, 0, 1,  src_msg[i],  ~src_msg[i])
    
    bitwise_input_array_helper(output_arr, 0, 0,  '?', src_msg[i]) #SCLK LOW
    for i in range(FREQ**2-1): #repeat for frequency configuration
      bitwise_input_array_helper(output_arr, 0, 0,  '?', src_msg[i])

  
  bitwise_input_array_helper(output_arr, 0, 0,  '?', 0) #cs_low_wait
  bitwise_input_array_helper(output_arr, 1, 0,  '?', 0) #done


def run_test_vector_on_dut(dut, spi_select, val_write, val_read, src_msg, snk_msg, PACKET_SIZE, FREQ):

  spi_array = generate_minion_bitwise_test_from_input_array(val_write, val_read, src_msg, snk_msg, PACKET_SIZE)
  spi_ms_array = generate_master_bitwise_test_from_input_array(val_write, val_read, src_msg, snk_msg, PACKET_SIZE, FREQ)

  if(spi_select == 0):
    for i in range(len(spi_array[0])):
      t( dut, spi_array[0][i], spi_array[1][i], spi_array[2][i], spi_array[3][i], 0, 0, 0, '?', 0, 0, 0, '?', '?', '?', '?', 0)
  elif(spi_select == 1):
    for i in range(len(spi_array[0])):
      t( dut, 0, 0, 0, '?', spi_array[0][i], spi_array[1][i], spi_array[2][i], spi_array[3][i], 0, 0, 0, '?', '?', '?', '?', 0)
  elif(spi_select == 2):
    for i in range(len(spi_array[0])):
      t( dut, 0, 0, 0, '?', 0, 0, 0, '?', spi_array[0][i], spi_array[1][i], spi_array[2][i], spi_array[3][i], '?', '?', '?', 0)
  elif(spi_select = 3):
    for i in range(len(spi_array[0])):
      t( dut, 0, 0, 0, '?', 0, 0, 0, '?', 0, 0, 0, '?', spi_ms_array[0][i], spi_ms_array[1][i], spi_ms_array[2][i], spi_ms_array[3][i])