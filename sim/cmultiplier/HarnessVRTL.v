`include "FpcmultVRTL.v"

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
	input logic [4*n-1:0] recv_msg,

	output logic send_val,
	input logic send_rdy,
	output logic [2*n-1:0] send_msg
);

	FpcmultVRTL #(n, d) cmult
	(
		.clk(clk),
		.reset(reset),

		.recv_val(recv_val),
		.recv_rdy(recv_rdy),
		.ar(recv_msg[4*n-1:3*n]),
		.ac(recv_msg[3*n-1:2*n]),
		.br(recv_msg[2*n-1:n]),
		.bc(recv_msg[n-1:0]),

		.send_val(send_val),
		.send_rdy(send_rdy),
		.cr(send_msg[2*n-1:n]),
		.cc(send_msg[n-1:0])
	);

endmodule
