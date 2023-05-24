`ifndef FIXED_POINT_ITERATIVE_MULTIPLIER
`define FIXED_POINT_ITERATIVE_MULTIPLIER

`include "../multiplier/muxes.v"
`include "../multiplier/RegisterV_Reset.v"

module FpmultVRTL
# (
	parameter n = 32, // bit width
	parameter d = 16, // number of decimal bits
	parameter sign = 1 // 1 if signed, 0 otherwise.
) (clk, reset, recv_val, recv_rdy, send_val, send_rdy, a, b, c);
	// performs the operation c = a*b
	// Equivalent to taking the integer representations of both numbers,
	// multiplying, and then shifting right
	input logic clk, reset;
	input logic recv_val, send_rdy;
	input logic [n-1:0] a, b;
	output logic [n-1:0] c;
	output logic send_val, recv_rdy;

	logic do_carry, do_add, in_wait;

	fpmult_control #(n, d) control (
		.clk(clk),
		.reset(reset),
		.recv_val(recv_val),
		.recv_rdy(recv_rdy),
		.send_val(send_val),
		.send_rdy(send_rdy),
		.in_wait(in_wait),
		.do_add(do_add),
		.do_carry(do_carry)
	);

	fpmult_datapath #(n, d) datapath (
		.clk(clk),
		.reset(reset),
		.in_wait(in_wait),
		.do_add(do_add),
		.do_carry((sign != 0) & do_carry),
		.a({ {d{(sign != 0) & a[n-1]}}, a }),
		.b(b),
		.c(c)
	);

endmodule

module fpmult_control
# (
	parameter n, parameter d
) (
	input logic clk,
	input logic reset,
	input logic recv_val,
	output logic recv_rdy,
	output logic send_val,
	input logic send_rdy,
	output logic in_wait,
	output logic do_add,
	output logic do_carry
);

	localparam [1:0]
		IDLE = 2'd0,
		CALC = 2'd1,
		DONE = 2'd2;

	logic [1:0] state, next_state;
	logic [$clog2(n)-1:0] counter;
	logic counter_reset;
	
	// manage state
	always @(*) begin
		case (state)
			IDLE: begin
				if (recv_val) next_state = CALC;
				else next_state = IDLE;
			end
			CALC: begin
				if (counter == ($clog2(n))'(n-1)) next_state = DONE;
				else next_state = CALC;
			end
			DONE: begin
				if (send_rdy) next_state = IDLE;
				else next_state = DONE;
			end
			default: begin
				next_state = IDLE;
			end
		endcase
	end

	// manage datapath
	always @(*) begin
		case (state)
			IDLE: begin
				in_wait = 1; do_add = 0; do_carry = 0; counter_reset = 0;
				recv_rdy = 1; send_val = 0;
			end
			CALC: begin
				in_wait = 0; do_add = 1; do_carry = (counter == ($clog2(n))'(n-1)); counter_reset = 0;
				recv_rdy = 0; send_val = 0;
			end
			DONE: begin
				in_wait = 0; do_add = 0; do_carry = 0; counter_reset = 1;
				recv_rdy = 0; send_val = 1;
			end
			default: begin
			end
		endcase
	end

	// reset logic
	always @(posedge clk) begin
		if (reset) begin
			state <= IDLE;
		end else begin
			state <= next_state;
		end
	end

	// counter logic
	always @(posedge clk) begin
		if (reset || counter_reset) begin
			counter <= 0;
		end else if (state == CALC) begin
			counter <= counter + 1;
		end else begin
			counter <= counter;
		end
	end
	
endmodule

module fpmult_datapath
# (
	parameter n, parameter d
) (
	input logic clk,
	input logic reset,
	input logic in_wait, // waiting for input
	input logic do_add,
	input logic do_carry,
	input logic [n+d-1:0] a,
	input logic [n-1:0] b,
	output logic [n-1:0] c
);

	logic [(n+d)-1:0] acc_in;
	logic [(n+d)-1:0] acc_out;
	
	RegisterV_Reset #(n+d) acc_reg (
		.clk(clk),
		.reset(in_wait | reset),
		.w(1),
		.d(acc_in),
		.q(acc_out)
	);

	logic [(n+d)-1:0] a_const_out;

	RegisterV_Reset #(n+d) a_const_reg (
		.clk(clk),
		.reset(reset),
		.w(in_wait),
		.d(a),
		.q(a_const_out)
	);

	logic [(n+d)-1:0] a_in;
	logic [(n+d)-1:0] a_out;

	RegisterV_Reset #(n+d) a_reg (
		.clk(clk),
		.reset(reset),
		.w(1),
		.d(a_in),
		.q(a_out)
	);

	logic [(n+d)-1:0] b_in;
	logic [(n+d)-1:0] b_out;

	RegisterV_Reset #(n) b_reg (
		.clk(clk),
		.reset(reset),
		.w(1),
		.d(b_in),
		.q(b_out)
	);

	vc_Mux2 #(n+d) a_sel (
		.in0(a_out << 1),
		.in1(a),
		.sel(in_wait),
		.out(a_in)
	);

	vc_Mux2 #(n) b_sel (
		.in0(b_out >> 1),
		.in1(b),
		.sel(in_wait),
		.out(b_in)
	);

	logic [n+d-1:0] add_tmp;
	logic [n+d-1:0] carry;

	logic [2*n-1:0] carry_tmp, carry_tmp2;
	assign carry_tmp = { {(n-d){a_const_out[n+d-1]}}, a_const_out}; // sign extend a
	assign carry_tmp2 = ((carry_tmp << n) - carry_tmp) << (n-1);

	vc_Mux2 #(n+d) carry_sel (
		.in0(a_out),
		.in1(carry_tmp2[n+d-1:0]),
		.sel(do_carry),
		.out(add_tmp)
	);

	vc_Mux2 #(n+d) add_sel (
		.in0(acc_out),
		.in1(acc_out + add_tmp),
		.sel(do_add & b_out[0]),
		.out(acc_in)
	);

	assign c = acc_out[n+d-1:d];
endmodule

`endif
