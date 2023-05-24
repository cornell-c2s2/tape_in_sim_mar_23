//SINE WAVE OF BIT_WIDTH = 32, DECIMAL_PT =  16
//FOR FFT OF SIZE = 4
module SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_4VRTL
   (
       output logic [32 - 1:0] sine_wave_out [0:4 - 1]
   );
   assign sine_wave_out[0] = 0;
   assign sine_wave_out[1] = 65536;
   assign sine_wave_out[2] = 0;
   assign sine_wave_out[3] = -65536;
endmodule