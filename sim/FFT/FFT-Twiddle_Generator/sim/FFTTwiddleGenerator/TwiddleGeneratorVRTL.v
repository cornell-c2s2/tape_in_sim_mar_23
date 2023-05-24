`ifndef TWIDDLE_GENERATOR
`define TWIDDLE_GENERATOR
module TwiddleGeneratorVRTL 
   #(
        BIT_WIDTH     = 4,
        DECIMAL_PT    = 2,
        SIZE_FFT      = 8,
        STAGE_FFT     = 0 
    )
    (
        input logic  [BIT_WIDTH - 1:0] sine_wave_in     [0:SIZE_FFT - 1], //sine_wave_in = sin(2*pi m / N)
        
        output logic [BIT_WIDTH - 1:0] twiddle_real     [SIZE_FFT/2 - 1:0],
        output logic [BIT_WIDTH - 1:0] twiddle_imaginary[SIZE_FFT/2 - 1:0]
    );

    int trace;
    assign trace =  1'd1 << DECIMAL_PT;
    int trace2;
    assign trace2 = ( 1 * ( SIZE_FFT / ( 2* (2**STAGE_FFT) ) ) ) % SIZE_FFT;
    int trace3;
    assign trace3 = ( 2 * ( SIZE_FFT / ( 2* (2**STAGE_FFT) ) ) ) % SIZE_FFT;
    int trace4;
    assign trace4 = ( 3 * ( SIZE_FFT / ( 2* (2**STAGE_FFT) ) ) ) % SIZE_FFT;
    generate
        genvar m;
        //if(SIZE_FFT > 2) begin 
            for(m = 0; m < 2 ** STAGE_FFT; m = m + 1) begin
                genvar i;
                for(i = 0; i < SIZE_FFT; i = i + 2 ** (STAGE_FFT + 1) ) begin
                    if(m == 0) begin
                        assign twiddle_real     [i/2 + m] = 1'b1 << DECIMAL_PT;
                        assign twiddle_imaginary[i/2 + m] = 0;
                    end else begin
						assign twiddle_real     [i/2 + m] =  sine_wave_in[(  m * ( SIZE_FFT / ( 2 * (2**STAGE_FFT) ) ) + SIZE_FFT/4) % SIZE_FFT   ];
                        assign twiddle_imaginary[i/2 + m] =  -sine_wave_in[(  ( m * ( SIZE_FFT / ( 2 * (2**STAGE_FFT) ) ) ) % SIZE_FFT )              ];
                    end
                end
            end
        //end else begin
        //    genvar i;
        //    for(i = 0; i < (SIZE_FFT/2) - 1; i++) begin 
        //        assign twiddle_real[i] = 1 << DECIMAL_PT;
        //        assign twiddle_imaginary[i] = 0;
        //    end
        //end
    endgenerate

endmodule

`endif
