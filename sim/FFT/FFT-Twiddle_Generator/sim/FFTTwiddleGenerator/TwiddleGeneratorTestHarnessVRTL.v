
`ifndef TWIDDLE_GENERATOR_TEST
`define TWIDDLE_GENERATOR_TEST

`include "SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL.v"
`include "SineWave__BIT_WIDTH_4__DECIMAL_POINT_1__SIZE_FFT_8VRTL.v"
`include "SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_4VRTL.v"
`include "TwiddleGeneratorVRTL.v"

module TwiddleGeneratorTestHarnessVRTL
   #(
        BIT_WIDTH   = 4,
        DECIMAL_PT  = 1,
        SIZE_FFT    = 8,
        STAGE_FFT   = 0
    )
    (

        output logic [BIT_WIDTH * SIZE_FFT - 1:0] send_msg
    );

    logic [BIT_WIDTH - 1:0] sine_wave_out [0:SIZE_FFT - 1];

    logic [BIT_WIDTH - 1:0] twiddle_real[SIZE_FFT/2 - 1:0];
    logic [BIT_WIDTH - 1:0] twiddle_imaginary[SIZE_FFT/2 - 1:0];

    logic [BIT_WIDTH - 1:0] twiddle_out  [SIZE_FFT - 1:0];

    always @(*) begin
        int i;
        for(i = 0; i < SIZE_FFT; i = i + 1) begin

            send_msg   [BIT_WIDTH * i +: BIT_WIDTH] = twiddle_out [i][BIT_WIDTH - 1:0];
        end
    end

    generate
        if(BIT_WIDTH == 32 && DECIMAL_PT == 16 && SIZE_FFT == 8) begin
            SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL Sine_32_16_8 (.sine_wave_out(sine_wave_out));
        end
        else if (BIT_WIDTH == 4 && DECIMAL_PT == 1 && SIZE_FFT == 8) begin
            SineWave__BIT_WIDTH_4__DECIMAL_POINT_1__SIZE_FFT_8VRTL Sine_4_1_8 (.sine_wave_out(sine_wave_out));
        end
        else if (BIT_WIDTH == 32 && DECIMAL_PT == 16 && SIZE_FFT == 4) begin
            SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_4VRTL Sine_4_1_4 (.sine_wave_out(sine_wave_out));
        end
    endgenerate

    TwiddleGeneratorVRTL #(.BIT_WIDTH(BIT_WIDTH), .DECIMAL_PT(DECIMAL_PT), .SIZE_FFT(SIZE_FFT), .STAGE_FFT(STAGE_FFT)) TwiddleGenerator (.sine_wave_in(sine_wave_out), 
                                                                                                                 .twiddle_imaginary(twiddle_out[SIZE_FFT/2 - 1:0]), 
                                                                                                                 .twiddle_real(twiddle_out[SIZE_FFT - 1:SIZE_FFT/2])); 

    
endmodule

`endif