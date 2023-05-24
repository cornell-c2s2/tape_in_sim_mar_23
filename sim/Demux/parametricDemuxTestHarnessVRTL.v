`include "parametricDemuxVRTL.v"

 module parametricDemuxTestHarnessVRTL
 #(
  parameter p_nbits = 1,   
  parameter p_noutputs = 2
 )(
  input  logic [p_nbits-1:0]                  in_val,
  input  logic [$clog2(p_noutputs)-1:0]       sel,
  output wire [p_noutputs*p_nbits-1:0]       flattened_out_val
 );

  logic [p_nbits-1:0] temp_out_val [p_noutputs-1:0];

  parametricDemuxVRTL #(
    .p_nbits(p_nbits),               
    .p_noutputs(p_noutputs)     
  ) demux_inst (
    .in_val(in_val),
    .sel(sel),
    .out_val(temp_out_val)
  );

  generate
    for (genvar i = 0; i < p_noutputs; i = i + 1) begin : output_gen
      assign flattened_out_val[i*p_nbits +: p_nbits] = temp_out_val[p_noutputs - 1 - i];
    end
  endgenerate

  endmodule

