//SINE WAVE OF BIT_WIDTH = 32, DECIMAL_PT =  16
//FOR FFT OF SIZE = 8
module SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL
   (
       output logic [32 - 1:0] sine_wave_out [0:8 - 1]
   );
   assign sine_wave_out[0] = 0;
   assign sine_wave_out[1] = 46340;
   assign sine_wave_out[2] = 65536;
   assign sine_wave_out[3] = 46340;
   assign sine_wave_out[4] = 0;
   assign sine_wave_out[5] = -46340;
   assign sine_wave_out[6] = -65536;
   assign sine_wave_out[7] = -46340;
endmodule