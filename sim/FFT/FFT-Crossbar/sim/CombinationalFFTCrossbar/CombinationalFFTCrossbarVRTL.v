`ifndef COMBINATIONAL_FFT_CROSSBAR
`define COMBINATIONAL_FFT_CROSSBAR

module CombinationalFFTCrossbarVRTl
   #(
        BIT_WIDTH  = 32,
        SIZE_FFT   = 8 ,
        STAGE_FFT  = 0 ,
        FRONT      = 1 
    )
    (
        input  logic  [BIT_WIDTH - 1:0] recv_real      [SIZE_FFT - 1:0],
        input  logic  [BIT_WIDTH - 1:0] recv_imaginary [SIZE_FFT - 1:0],
        input  logic                    recv_val       [SIZE_FFT - 1:0],
        output logic                    recv_rdy       [SIZE_FFT - 1:0],

        output logic [BIT_WIDTH - 1:0] send_real       [SIZE_FFT - 1:0],
        output logic [BIT_WIDTH - 1:0] send_imaginary  [SIZE_FFT - 1:0],
        output logic                   send_val        [SIZE_FFT - 1:0],
        input  logic                   send_rdy        [SIZE_FFT - 1:0]
    );
    generate
        genvar m;
        for( m = 0; m < 2 ** STAGE_FFT; m = m + 1 ) begin
            genvar i;
            for(i = m; i < SIZE_FFT; i = i + 2 ** ( STAGE_FFT + 1 ) ) begin
                    if(FRONT == 1) begin  
                        assign send_real     [i + m] = recv_real     [i];
                        assign send_imaginary[i + m] = recv_imaginary[i];
                        assign send_val      [i + m] = recv_val      [i];
                        assign recv_rdy      [i + m] = send_rdy      [i];

                        assign send_real     [i + m + 1] = recv_real     [i + 2**STAGE_FFT];
                        assign send_imaginary[i + m + 1] = recv_imaginary[i + 2**STAGE_FFT];
                        assign send_val      [i + m + 1] = recv_val      [i + 2**STAGE_FFT];
                        assign recv_rdy      [i + m + 1] = send_rdy      [i + 2**STAGE_FFT];
                    end else begin  
                        assign send_real     [i] = recv_real     [i + m];
                        assign send_imaginary[i] = recv_imaginary[i + m];
                        assign send_val      [i] = recv_val      [i + m];
                        assign recv_rdy      [i] = send_rdy      [i + m];

                        assign send_real     [i + 2**STAGE_FFT] = recv_real     [i + m + 1];
                        assign send_imaginary[i + 2**STAGE_FFT] = recv_imaginary[i + m + 1];
                        assign send_val      [i + 2**STAGE_FFT] = recv_val      [i + m + 1];
                        assign recv_rdy      [i + 2**STAGE_FFT] = send_rdy      [i + m + 1];
                    end
            end
        end
    endgenerate

endmodule

`endif