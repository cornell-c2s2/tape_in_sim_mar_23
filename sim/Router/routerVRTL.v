`include "../Router/muxes.v"
`include "../Router/parametricDemuxVRTL.v"

module routerVRTL
#(
  parameter p_nbits = 32,
  parameter p_noutputs = 8
)(
  input  logic                                  valid,
  input  logic  [p_nbits-1:0]                   message_in, 
  output logic                                  ready_out,
  
  output logic                                  valid_out   [0:p_noutputs-1], 
  input  logic                                  ready       [0:p_noutputs-1], 
  output logic [p_nbits-$clog2(p_noutputs)-1:0] message_out [0:p_noutputs-1]
);

logic valid_holder [p_noutputs-1:0];
logic [p_nbits-1 : p_nbits-$clog2(p_noutputs)] select;
logic [p_nbits-$clog2(p_noutputs)-1:0] cut_message;
logic [p_noutputs-1:0] temp_ready;

assign select = message_in[p_nbits-1 : p_nbits-$clog2(p_noutputs)];
assign cut_message = message_in[p_nbits-$clog2(p_noutputs)-1:0];

  //Ready bit
  vc_MuxN #(                   
    .p_nbits(1),               
    .p_ninputs(p_noutputs)     
  ) mux_inst (
    .in(temp_ready),
    .sel(select),
    .out(ready_out)
  );

  //Valid bit
  parametricDemuxVRTL #(       
    .p_nbits(1),               
    .p_noutputs(p_noutputs)     
  ) demux_inst (
    .in_val(valid),
    .sel(select),
    .out_val(valid_holder)
  );


  generate
    for ( genvar i = 0; i < p_noutputs; i = i + 1) begin 
      assign valid_out[i] = valid_holder[i];
    end
  endgenerate

  //Assigns all the output wires to cut_message
  generate
    for ( genvar j = 0; j < p_noutputs; j = j + 1) begin 
      assign message_out[j] = cut_message;
    end
  endgenerate

  //Ready is not of correct form for the mux. Needs to be changed...
  //Mismatch between port which is not an array, and expression which is an array.
  generate
    for ( genvar k = 0; k < p_noutputs; k = k + 1) begin 
      assign temp_ready[k +: 1] = ready[k]; 
    end
  endgenerate
endmodule



