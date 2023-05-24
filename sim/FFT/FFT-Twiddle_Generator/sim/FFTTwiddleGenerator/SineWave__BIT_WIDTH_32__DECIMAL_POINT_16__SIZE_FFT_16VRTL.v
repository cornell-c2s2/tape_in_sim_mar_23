//SINE WAVE OF BIT_WIDTH = 32, DECIMAL_PT =  16
//FOR FFT OF SIZE = 16
module SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_16VRTL
   (
       output logic [32 - 1:0] sine_wave_out [0:16 - 1]
   );
   assign sine_wave_out[0] = 0;
   assign sine_wave_out[1] = 25079;
   assign sine_wave_out[2] = 46340;
   assign sine_wave_out[3] = 60547;
   assign sine_wave_out[4] = 65536;
   assign sine_wave_out[5] = 60547;
   assign sine_wave_out[6] = 46340;
   assign sine_wave_out[7] = 25079;
   assign sine_wave_out[8] = 0;
   assign sine_wave_out[9] = -25079;
   assign sine_wave_out[10] = -46340;
   assign sine_wave_out[11] = -60547;
   assign sine_wave_out[12] = -65536;
   assign sine_wave_out[13] = -60547;
   assign sine_wave_out[14] = -46340;
   assign sine_wave_out[15] = -25079;
endmodule