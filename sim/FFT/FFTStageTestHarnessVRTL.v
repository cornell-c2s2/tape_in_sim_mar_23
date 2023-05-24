`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_512VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_256VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_128VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_64VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_32VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_16VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_4VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_2VRTL.v"
`include "../../../C2S2-SERDES/sim/deserializer/DeserializerVRTL.v"
`include "../../../C2S2-SERDES/sim/serializer/SerializerVRTL.v"
`include "./FFT_StageVRTL.v"

module FFTStageTestHarnessVRTL
    #(
        BIT_WIDTH  = 32,
        DECIMAL_PT = 16,
        N_SAMPLES  = 8,
        STAGE_FFT  = 0
    )
    (
        input  logic [BIT_WIDTH - 1:0] recv_msg,
        input  logic                   recv_val,
        output logic                   recv_rdy,

        output logic [BIT_WIDTH - 1:0] send_msg,
        output logic                   send_val,
        input  logic                   send_rdy,

        input  logic                   reset,
        input  logic                   clk
    );
    
    logic [BIT_WIDTH - 1:0] sine_wave_out [0:N_SAMPLES - 1];

/*
    logic [BIT_WIDTH - 1:0] recv_msg_intermediate [2 * N_SAMPLES - 1:0];
    logic [BIT_WIDTH - 1:0] send_msg_intermediate [2 * N_SAMPLES - 1:0];

    always @(*) begin
        int i;
        for(i = 0; i < 2 * N_SAMPLES; i = i + 1) begin

            send_msg   [BIT_WIDTH * i +: BIT_WIDTH] = send_msg_intermediate [i][BIT_WIDTH - 1:0];
            recv_msg_intermediate [i][BIT_WIDTH - 1:0]        = recv_msg[BIT_WIDTH * i +: BIT_WIDTH];
        end
    end
*/

    generate 
		if (BIT_WIDTH == 32 && DECIMAL_PT == 16) begin
			case (N_SAMPLES)
				512:SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_512VRTL SineWave (.sine_wave_out(sine_wave_out));
				256:SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_256VRTL SineWave (.sine_wave_out(sine_wave_out));
				128:SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_128VRTL SineWave (.sine_wave_out(sine_wave_out));
				64:	SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_64VRTL SineWave (.sine_wave_out(sine_wave_out));
				32:	SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_32VRTL SineWave (.sine_wave_out(sine_wave_out));
				16:	SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_16VRTL SineWave (.sine_wave_out(sine_wave_out));
				8:	SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL SineWave (.sine_wave_out(sine_wave_out));
				4:	SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_4VRTL SineWave (.sine_wave_out(sine_wave_out));
				2:	SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_2VRTL SineWave (.sine_wave_out(sine_wave_out));
			endcase
        end
    endgenerate

	logic recv_val_t;
	logic recv_rdy_t;
    logic [BIT_WIDTH - 1:0] recv_msg_t [2*N_SAMPLES - 1:0];
	logic send_val_t;
	logic send_rdy_t;
    logic [BIT_WIDTH - 1:0] send_msg_t [2*N_SAMPLES - 1:0];

	DeserializerVRTL #( .N_SAMPLES(2*N_SAMPLES), .BIT_WIDTH(BIT_WIDTH) ) deser (
		.recv_msg(recv_msg),
		.recv_val(recv_val),
		.recv_rdy(recv_rdy),

		.send_msg(recv_msg_t),
		.send_val(recv_val_t),
		.send_rdy(recv_rdy_t),

		.reset(reset),
		.clk(clk)
	);

	SerializerVRTL #( .N_SAMPLES(2*N_SAMPLES), .BIT_WIDTH(BIT_WIDTH) ) ser (
		.recv_msg(send_msg_t),
		.recv_val(send_val_t),
		.recv_rdy(send_rdy_t),

		.send_msg(send_msg),
		.send_val(send_val),
		.send_rdy(send_rdy),
		
		.reset(reset),
		.clk(clk)
	);


    FFT_StageVRTL #( .BIT_WIDTH(BIT_WIDTH), .DECIMAL_PT(DECIMAL_PT), .N_SAMPLES(N_SAMPLES), .STAGE_FFT(STAGE_FFT)) fft_stage
    (
        .recv_msg_real(recv_msg_t[    N_SAMPLES - 1: 0        ]),
        .recv_msg_imag(recv_msg_t[2 * N_SAMPLES - 1: N_SAMPLES]),
        .recv_val(recv_val_t),
        .recv_rdy(recv_rdy_t),

        .send_msg_real(send_msg_t[    N_SAMPLES - 1: 0        ]),
        .send_msg_imag(send_msg_t[2 * N_SAMPLES - 1: N_SAMPLES]),
        .send_val(send_val_t),
        .send_rdy(send_rdy_t),

        .sine_wave_out(sine_wave_out),

        .reset(reset),
        .clk(clk)
    );

endmodule
