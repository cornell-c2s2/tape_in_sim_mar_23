`include "FpmultVRTL.v"

module HarnessVRTL
#(
	parameter n = 32,
	parameter d = 16
)
(
	input logic clk,
	input logic reset,

	input logic recv_val,
	output logic recv_rdy,
	input logic [2*n-1:0] recv_msg,

	output logic send_val,
	input logic send_rdy,
	output logic [n-1:0] send_msg
);

	FpmultVRTL #(n, d) mult
	(
		.clk(clk),
		.reset(reset),

		.recv_val(recv_val),
		.recv_rdy(recv_rdy),
		.a(recv_msg[2*n-1:n]),
		.b(recv_msg[n-1:0]),

		.send_val(send_val),
		.send_rdy(send_rdy),
		.c(send_msg)
	);

endmodule
