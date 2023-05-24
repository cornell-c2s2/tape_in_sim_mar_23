`ifndef PROJECT_REGISTER_V_RESET
`define PROJECT_REGISTER_V_RESET

module RegisterV_Reset
	#(parameter N = 8)
	(clk, reset, w, d, q);
    input logic clk;
    input logic reset;
    input  logic w;
    input logic [N-1:0] d;
    output logic [N-1:0] q;
    logic [N-1:0] regout;

    assign q = regout;

    always @(posedge clk) begin
	if (reset)
	    regout <= 0;
	else if (w)
	    regout <= d;
        
    end
endmodule

`endif
