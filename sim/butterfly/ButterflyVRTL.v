`ifndef PROJECT_BUTTERFLY_V
`define PROJECT_BUTTERFLY_V
`include "../cmultiplier/FpcmultVRTL.v"
`include "../vc/regs.v"

module ButterflyVRTL

#(
	parameter n = 32,
	parameter d = 16,
	parameter mult = 0
	// Optimization parameter to save area:
	// 0 if we include the multiplier
	// 1 if omega = 1
	// 2 if omega = -1
	// 3 if omega = i (j)
	// 4 if omega = -i (-j)
) (clk, reset, recv_val, recv_rdy, send_val, send_rdy, ar, ac, br, bc, wr, wc, cr, cc, dr, dc);
	/* performs the butterfly operation, equivalent to doing
		| 1  w |   | a |   | c |
		| 1 -w | * | b | = | d |
	*/

	input logic clk, reset;
	input logic recv_val, send_rdy;
	input logic [n-1:0] ar, ac, br, bc, wr, wc;
	output logic send_val, recv_rdy;
	output logic [n-1:0] cr, cc, dr, dc;

	logic [n-1:0] ar_imm, ac_imm;

	logic [n-1:0] tr, tc;
	generate
		case (mult)
			1: begin
				always @(posedge clk) begin
					if (reset) begin
						cr <= 0; cc <= 0; dr <= 0; dc <= 0;
						send_val <= 0;
					end else if (recv_val & recv_rdy) begin
						cr <= ar + br; cc <= ac + bc; dr <= ar - br; dc <= ac - bc;
						send_val <= 1;
					end else if (send_val & send_rdy) begin
						send_val <= 0;
					end else begin
						cr <= cr; cc <= cc; dr <= dr; dc <= dc;
						send_val <= send_val;
					end
				end
				assign recv_rdy = ~send_val;
			end
			2: begin
				always @(posedge clk) begin
					if (reset) begin
						cr <= 0; cc <= 0; dr <= 0; dc <= 0;
						send_val <= 0;
					end else if (recv_val & recv_rdy) begin
						cr <= ar - br; cc <= ac - bc; dr <= ar + br; dc <= ac + bc;
						send_val <= 1;
					end else if (send_val & send_rdy) begin
						send_val <= 0;
					end else begin
						cr <= cr; cc <= cc; dr <= dr; dc <= dc;
						send_val <= send_val;
					end
				end
				assign recv_rdy = ~send_val;
			end
			3: begin
				always @(posedge clk) begin
					if (reset) begin
						cr <= 0; cc <= 0; dr <= 0; dc <= 0;
						send_val <= 0;
					end else if (recv_val & recv_rdy) begin
						cr <= ar - bc; cc <= ac + br; dr <= ar + bc; dc <= ac - br;
						send_val <= 1;
					end else if (send_val & send_rdy) begin
						send_val <= 0;
					end else begin
						cr <= cr; cc <= cc; dr <= dr; dc <= dc;
						send_val <= send_val;
					end
				end
				assign recv_rdy = ~send_val;
			end
			4: begin
				always @(posedge clk) begin
					if (reset) begin
						cr <= 0; cc <= 0; dr <= 0; dc <= 0;
						send_val <= 0;
					end else if (recv_val & recv_rdy) begin
						cr <= ar + bc; cc <= ac - br; dr <= ar - bc; dc <= ac + br;
						send_val <= 1;
					end else if (send_val & send_rdy) begin
						send_val <= 0;
					end else begin
						cr <= cr; cc <= cc; dr <= dr; dc <= dc;
						send_val <= send_val;
					end
				end
				assign recv_rdy = ~send_val;
			end
			default: begin
				FpcmultVRTL #(.n(n), .d(d)) mul ( // ar * br
					.clk(clk),
					.reset(reset),
					.ar(br),
					.ac(bc),
					.br(wr),
					.bc(wc),
					.cr(tr),
					.cc(tc),
					.recv_val(recv_val),
					.recv_rdy(recv_rdy),
					.send_val(send_val),
					.send_rdy(send_rdy)
				);
				vc_EnResetReg #(.p_nbits(n)) ac_reg(.clk(clk), .en(recv_rdy), .d(ac), .q(ac_imm), .reset(reset)); 
				vc_EnResetReg #(.p_nbits(n)) ar_reg(.clk(clk), .en(recv_rdy), .d(ar), .q(ar_imm), .reset(reset));

				assign cr = ar_imm + tr;
				assign cc = ac_imm + tc;
				assign dr = ar_imm - tr;
				assign dc = ac_imm - tc;				
			end
		endcase
	endgenerate
	

	
endmodule
`endif
