`include "../vc/regs.v"
module ControlVRTL 
#(
    parameter N_SAMPLES = 8
)(
    input   logic recv_val,
    input   logic send_rdy,


    output  logic send_val,
    output  logic recv_rdy,

    output  logic [N_SAMPLES - 1:0] en_sel,

    input   logic reset,
    input   logic clk
);
    localparam [1:0] INIT =   2'b00;
    localparam [1:0] STATE1 = 2'b01;
    localparam [1:0] STATE2 = 2'b10; 

    logic [$clog2(N_SAMPLES) + 1:0] count; //counter
    logic [$clog2(N_SAMPLES) + 1:0] count_next;

    logic [1:0] next_state;
    logic [1:0] state;

    DecoderVRTL #( .BIT_WIDTH( $clog2(N_SAMPLES) ) ) decoder ( .in(count), .out(en_sel));

    always @(*) begin 
       case(state)
            INIT: begin 

                if (count_next == N_SAMPLES) begin
                    next_state = STATE1;
                end 
                else begin
                    next_state = INIT;
                end

                end

            STATE1: begin
                if(send_rdy == 1) begin
                    next_state = INIT;
                end else begin
                    next_state = STATE1;
                end
            end

            default: next_state = INIT;
        endcase
    end  

    always @(*) begin 

        case(state)
            INIT: begin 
                if(recv_val == 1) begin
                    count_next = count + 1;
                end else begin
                    count_next = count;
                end

                recv_rdy = 1'b1;
                send_val = 1'b0;
            end

            STATE1: begin
            count_next = 0;
            recv_rdy = 1'b0;
            send_val = 1'b1;
            end

            default: begin
                count_next = 0;
                recv_rdy = 1'b1;
                send_val = 1'b0;
            end

        endcase

    end

    always @ (posedge clk) begin 
        if(reset) begin
            count <= 0;
            state <= INIT;
        end else begin
            count <= count_next;
            state <= next_state;
        end
    end 

endmodule

module DecoderVRTL #(
    parameter BIT_WIDTH = 3
)(
	input  logic [BIT_WIDTH - 1:0] in,
	output logic [(1 << BIT_WIDTH) - 1:0] out
);

	always @(*) out = {{1 << BIT_WIDTH - 1 {1'b0}}, 1'b1} << in;
endmodule

module DeserializerVRTL
#(
    parameter N_SAMPLES = 8,
	parameter BIT_WIDTH  = 32
)(
	
	input  logic recv_val,
    output logic recv_rdy, 	 
	input  logic [BIT_WIDTH - 1:0] recv_msg,

	output logic send_val, 
    input  logic send_rdy,
    output logic [BIT_WIDTH - 1:0] send_msg [N_SAMPLES - 1:0],

    input logic clk, 
	input logic reset
);
    
    logic [N_SAMPLES - 1:0] en_sel;

    //body of code
	ControlVRTL #(.N_SAMPLES(N_SAMPLES)) c
		(
			.recv_val(recv_val), 
			.send_rdy(send_rdy),
			
			.send_val(send_val),
			.recv_rdy(recv_rdy), 

            .reset(reset),
			.clk(clk),

			.en_sel(en_sel)
		);

    generate
        genvar i;
        for( i = 0; i < N_SAMPLES; i++) begin
            vc_EnResetReg #( .p_nbits(BIT_WIDTH) ) register ( .clk(clk), .reset(reset), .en(en_sel[i]), .d(recv_msg), .q(send_msg[i]) );
        end
    endgenerate

endmodule


