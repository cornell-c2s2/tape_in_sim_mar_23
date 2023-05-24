module parametricDemuxVRTL
#(
  //length of message
  parameter p_nbits = 1,   
  //Number of outputs
  parameter p_noutputs = 2
)
(
  input  logic [p_nbits-1:0]                  in_val,
  input  logic [$clog2(p_noutputs)-1:0]       sel,
  output logic [p_nbits-1:0] out_val [p_noutputs-1:0]
);
  genvar i;
  generate
    for (i = 0; i < p_noutputs; i = i + 1) begin : output_gen
      assign out_val[i] = (i == sel) ? in_val : {p_nbits{1'b0}};
    end
  endgenerate
endmodule

