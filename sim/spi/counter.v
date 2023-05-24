module counter #(parameter bitwidth = 32) 
(
   // input logic in,
    input logic clk, 
    input logic rst, 
    input logic en,
    output logic [bitwidth:0] out
);

    logic [5:0] count;
    always @(posedge en) begin
        count = count + 1;
    end

    always @(posedge rst) begin
        count = 0;
    end
    
    assign out = count;
endmodule
            
