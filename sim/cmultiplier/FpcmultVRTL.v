`ifndef FIXED_POINT_ITERATIVE_COMPLEX_MULTIPLIER
`define FIXED_POINT_ITERATIVE_COMPLEX_MULTIPLIER
`include "../multiplier/FpmultVRTL.v"

module FpcmultVRTL
# (
	parameter n = 32, // bit width
	parameter d = 16 // number of decimal bits
) (
	input logic clk,
	input logic reset,
	input logic recv_val,
	output logic recv_rdy,
	output logic send_val,
	input logic send_rdy,
	input logic [n-1:0] ar,
	input logic [n-1:0] ac,
	input logic [n-1:0] br,
	input logic [n-1:0] bc,
	output logic [n-1:0] cr,
	output logic [n-1:0] cc
);
	// performs c = a * b on complex a and b

	// cr = (ar * br) - (ac * bc)
	// cc = (ar * bc) + (br * ac) = (ar + ac)(br + bc) - (ac * bc) - (ar * br)
	
	logic [n - 1:0] arbr;
	logic [n - 1:0] acbc;
	logic [n - 1:0] ar_plus_ac;
	logic [n - 1:0] br_plus_bc;
	logic [n - 1:0] ab;

	assign ar_plus_ac = ar + ac;
	assign br_plus_bc = br + bc;

	logic recv_rdy_imm [2:0];
	assign recv_rdy = recv_rdy_imm[0] & recv_rdy_imm[1] & recv_rdy_imm[2];

	logic send_val_imm [2:0];
	assign send_val = send_val_imm[0] & send_val_imm[1] & send_val_imm[2];


	FpmultVRTL #(.n(n), .d(d), .sign(1)) m1 ( // ar * br
		.clk(clk),
		.reset(reset),
		.a(ar),
		.b(br),
		.c(arbr),
		.recv_val(recv_val),
		.recv_rdy(recv_rdy_imm[0]),
		.send_val(send_val_imm[0]),
		.send_rdy(send_rdy)
	);

	FpmultVRTL #(.n(n), .d(d), .sign(1)) m2 ( // ac * bc
		.clk(clk),
		.reset(reset),
		.a(ac),
		.b(bc),
		.c(acbc),
		.recv_val(recv_val),
		.recv_rdy(recv_rdy_imm[1]),
		.send_val(send_val_imm[1]),
		.send_rdy(send_rdy)
	);

	FpmultVRTL #(.n(n), .d(d), .sign(1)) m3 ( // (ar + ac) * (br + bc)
		.clk(clk),
		.reset(reset),
		.a(ar_plus_ac),
		.b(br_plus_bc),
		.c(ab),
		.recv_val(recv_val),
		.recv_rdy(recv_rdy_imm[2]),
		.send_val(send_val_imm[2]),
		.send_rdy(send_rdy)
	);



	assign cr = arbr - acbc;
	assign cc = ab - arbr - acbc;


endmodule

`endif
