`ifndef REGISTER_V
`define REGISTER_V

module RegisterV
	#(parameter BIT_WIDTH = 32)
	(clk, reset, w, d, q);

	input logic clk;
	input logic reset;
	input  logic w;
	input logic [BIT_WIDTH-1:0] d;
	output logic [BIT_WIDTH-1:0] q;
	logic [BIT_WIDTH-1:0] regout;

	assign q = regout;

	always @(posedge clk) begin
		if (w)
			regout <= d;
	end
endmodule

`endif
