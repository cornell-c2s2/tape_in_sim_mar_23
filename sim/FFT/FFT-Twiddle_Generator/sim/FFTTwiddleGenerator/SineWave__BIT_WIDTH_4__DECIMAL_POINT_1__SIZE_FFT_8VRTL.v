//SINE WAVE OF BIT_WIDTH = 4, DECIMAL_PT =  1
//FOR FFT OF SIZE = 8
module SineWave__BIT_WIDTH_4__DECIMAL_POINT_1__SIZE_FFT_8VRTL
   (
       output logic [4 - 1:0] sine_wave_out [0:8 - 1]
   );
   assign sine_wave_out[0] = 0;
   assign sine_wave_out[1] = 1;
   assign sine_wave_out[2] = 2;
   assign sine_wave_out[3] = 1;
   assign sine_wave_out[4] = 0;
   assign sine_wave_out[5] = -1;
   assign sine_wave_out[6] = -2;
   assign sine_wave_out[7] = -1;
endmodule