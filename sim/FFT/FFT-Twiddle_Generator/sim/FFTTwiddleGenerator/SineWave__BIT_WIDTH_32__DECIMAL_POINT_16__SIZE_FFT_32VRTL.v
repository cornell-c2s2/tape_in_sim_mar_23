//SINE WAVE OF BIT_WIDTH = 32, DECIMAL_PT =  16
//FOR FFT OF SIZE = 32
module SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_32VRTL
   (
       output logic [32 - 1:0] sine_wave_out [0:32 - 1]
   );
   assign sine_wave_out[0] = 0;
   assign sine_wave_out[1] = 12785;
   assign sine_wave_out[2] = 25079;
   assign sine_wave_out[3] = 36409;
   assign sine_wave_out[4] = 46340;
   assign sine_wave_out[5] = 54491;
   assign sine_wave_out[6] = 60547;
   assign sine_wave_out[7] = 64276;
   assign sine_wave_out[8] = 65536;
   assign sine_wave_out[9] = 64276;
   assign sine_wave_out[10] = 60547;
   assign sine_wave_out[11] = 54491;
   assign sine_wave_out[12] = 46340;
   assign sine_wave_out[13] = 36409;
   assign sine_wave_out[14] = 25079;
   assign sine_wave_out[15] = 12785;
   assign sine_wave_out[16] = 0;
   assign sine_wave_out[17] = -12785;
   assign sine_wave_out[18] = -25079;
   assign sine_wave_out[19] = -36409;
   assign sine_wave_out[20] = -46340;
   assign sine_wave_out[21] = -54491;
   assign sine_wave_out[22] = -60547;
   assign sine_wave_out[23] = -64276;
   assign sine_wave_out[24] = -65536;
   assign sine_wave_out[25] = -64276;
   assign sine_wave_out[26] = -60547;
   assign sine_wave_out[27] = -54491;
   assign sine_wave_out[28] = -46340;
   assign sine_wave_out[29] = -36409;
   assign sine_wave_out[30] = -25079;
   assign sine_wave_out[31] = -12785;
endmodule