module shiftreg #(parameter bitwidth = 32) 
(
    input logic reset,
    input logic load_en,
    input logic shift_en,
    input logic in,
    input logic [bitwidth-1:0] load_data,
    output logic out
);

    logic [bitwidth:0] regval;
 
    always @(*) begin
        if (load_en) regval <= load_data;
        else if (shift_en) regval <= regval >> 1;
        else if (reset) regval <= 32'b0;
        else regval <= regval;
    end
    assign out = regval[0];
endmodule
