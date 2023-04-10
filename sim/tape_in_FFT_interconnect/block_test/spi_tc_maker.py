

# Helper function
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

def bitwise_input_array_helper(output_arr, cs, sclk, mosi ,miso):
  output_arr[0].append(cs)
  output_arr[1].append(sclk)
  output_arr[2].append(mosi)
  output_arr[3].append(miso)

  return output_arr

# [[cs],[sclk],[mosi].[miso]]
def generate_minion_bitwise_test_from_input_array(dut, val_write, val_read, into_SPI_array, outof_spi_array, PACKET_SIZE):
  output_arr = [[],[],[],[]]

  #Hold cs to 1 so the SPI minion is reset to the base state.

                                        #cs clk  mosi  miso
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)
  bitwise_input_array_helper(output_arr, 1, 0,   0,    0)

def test_random( cmdline_opts ):


  dut = FFTInterconnectVRTL()
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  dut.sim_reset()
  
  array = random_signal(32, 8, 16)

#         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2  
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      ) # cs high
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      )
  t( dut, 1,    0,   0,   0,   0,    0,      0,     0      ) # period before sclk toggle

  for j in range(8):
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    0,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   1,   0,   1,    0,      0,     0    )
    t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )

    print(array[0])
    for i in range(32):
      # 0
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    ) # pull_en = 1
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   0,   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    0,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   array[0][j * 32 + 31- i],   0,   1,    0,      0,     0    )
      t( dut, 0,    1,   0,   0,   1,    0,      0,     0    )

    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   1,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    0,      0,     '?'    )
    
    


  for i in range(114):
    # wait for FFT to finish
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )

  for j in range(8):
    
  #         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      1,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      1,     '?'    )

    for i in range(32):
        # 0
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    ) # pull_en = 1
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
        t( dut, 1,    0,   0,   0,   0,    1,      0,     '?'    )
    
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   1,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   1,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    0,   0,   0,   0,    0,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    t( dut, 1,    1,   0,   0,   0,    1,      0,     '?'    )
    
    print(array)
    print(array[1][j * 32 + 31- 0])
    for i in range(32):

    #         cs    sclk mosi miso cs_2  sclk_2  mosi_2 miso_2
      t( dut, 1,    0,   0,   0,   0,    0,      0,     array[1][j * 32 + 31- i]    ) # pull_en = 1
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    0,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')
      t( dut, 1,    0,   0,   0,   0,    1,      0,     '?')