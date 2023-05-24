`ifndef PROJECT_REGISTER_V
`define PROJECT_REGISTER_V

module RegisterV
	#(parameter N = 32)
	(clk, reset, w, d, q);

	input logic clk;
	input logic reset;
	input  logic w;
	input logic [N-1:0] d;
	output logic [N-1:0] q;
	logic [N-1:0] regout;

	assign q = regout;

	always @(posedge clk) begin
		if (w)
			regout <= d;
	end
endmodule

`endif
