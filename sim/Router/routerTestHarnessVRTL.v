`include "routerVRTL.v"

 module routerTestHarnessVRTL
#(
  parameter p_nbits = 8,
  parameter p_noutputs = 8
)(
  input logic                                                    valid,
  input logic  [p_noutputs-1:0]                                  ready,
  input logic  [p_nbits-1:0]                                     message_in, 
  output logic                                                  ready_out,
  output logic [p_noutputs-1:0]                                 valid_out,
  output logic [(p_nbits-$clog2(p_noutputs))*p_noutputs-1:0]     message_out     
);

logic [(p_nbits-$clog2(p_noutputs))-1:0]  temp_message_out  [p_noutputs-1:0];
logic [p_noutputs-1:0] temp_valid_out;
logic temp_ready [p_noutputs-1:0];

  routerVRTL #(
    .p_nbits(p_nbits),
    .p_noutputs(p_noutputs)
  ) router_inst (
    .valid(valid),
    .ready(temp_ready),
    .message_in(message_in),
    .valid_out(temp_valid_out),
    .ready_out(ready_out),
    .message_out(temp_message_out)
  );

  generate
    for (genvar i = 0; i < p_noutputs; i = i + 1) begin 
      assign valid_out[i +: 1] = temp_valid_out[p_noutputs - 1 - i];
    end
  endgenerate

  generate
    for ( genvar j = 0; j < p_noutputs; j = j + 1) begin 
      assign message_out[j*(p_nbits-$clog2(p_noutputs)) +: p_nbits-$clog2(p_noutputs)] = temp_message_out[p_noutputs-j-1];
    end
  endgenerate

  generate
    for ( genvar k = 0; k < p_noutputs; k = k + 1) begin 
      assign temp_ready[p_noutputs-k-1] = ready[k +: 1];
    end
  endgenerate
  endmodule

