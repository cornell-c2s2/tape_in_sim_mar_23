`ifndef PROJECT_BUTTERFLY_V
`define PROJECT_BUTTERFLY_V
`include "C2S2-Module-Library/lib/sim/fixedpt-iterative-complex-multiplier/FpcmultVRTL.v"
`include "C2S2-Module-Library/lib/sim/nbitregister/RegisterV_Reset.v"
module butterfly #(parameter n = 32, parameter d = 16) (clk, reset, recv_val, recv_rdy, send_val, send_rdy, ar, ac, br, bc, wr, wc, cr, cc, dr, dc)
	/* performs the butterfly operation, equivalent to doing
		| 1  w |   | a |   | c |
		| 1 -w | * | b | = | d |
	*/

  input logic clk, reset;
  input logic recv_val, send_rdy;
	input logic [n-1:0] ar, ac, br, bc, wr, wc;
  output logic send_val, recv_rdy;
	output logic [n-1:0] cr, cc, dr, dc;

	assign cr = ar + br;
	assign cc = ac + bc;

	assign dr = ar - br;
	assign dc = ac - bc;

	logic mul_rdy;
	logic [n-1:0] tr, tc;

	FpcmultVRTL #(.n(n), .d(d)) mul ( // ar * br
		.clk(clk),
		.reset(reset),
		.ar(br),
		.ac(bc),
		.br(wr),
		.bc(wc),
		.b(tr),
		.c(tc),
		.recv_val(recv_val),
		.recv_rdy(),
		.send_val(mul_rdy),
		.send_rdy(1'b1)
	);

	always @(posedge clk) begin
		if (reset) begin
			send_val <= 0;
			recv_rdy <= 1;
		end

		if (recv_val & recv_rdy) begin
			cr <= ar;
			cc <= ac;
			dr <= ar;
			dc <= ac;
			recv_rdy <= 0;
			send_val <= 0;
		end

		if (~send_val & mul_rdy) begin // all multipliers are done!
			cr <= cr + tr;
			cc <= cc + tc;
			dr <= dr - tr;
			dc <= dc - tc;
			send_val <= 1;
		end

		if (~recv_rdy & send_val & send_rdy) begin
			recv_rdy <= 1;
		end
	end
endmodule
`endif
