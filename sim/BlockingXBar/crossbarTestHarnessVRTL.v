`include "crossbarVRTL.v"

module crossbarTestHarnessVRTL
    #(
        parameter BIT_WIDTH = 32, 
        parameter N_INPUTS = 2,
        parameter N_OUTPUTS = 2,
        parameter CONTROL_BIT_WIDTH = 42
    )

    (
        input  logic [BIT_WIDTH*N_INPUTS-1:0]       recv_msg                  ,
        input  logic [N_INPUTS - 1:0]               recv_val                  ,
        output logic [N_INPUTS - 1:0]               recv_rdy                  ,

        output logic [BIT_WIDTH*N_OUTPUTS-1:0]      send_msg                  ,
        output logic [N_OUTPUTS - 1:0]              send_val                  ,
        input  logic [N_OUTPUTS - 1:0]              send_rdy                  ,

        input  logic                                reset                     ,
        input  logic                                clk                       ,

        input  logic [CONTROL_BIT_WIDTH - 1:0]      control                   ,
        input  logic                                control_val               ,
        output logic                                control_rdy               
    );

logic [BIT_WIDTH-1:0]  temp_send_msg  [N_OUTPUTS-1:0];
logic [BIT_WIDTH-1:0]  temp_recv_msg  [N_INPUTS-1:0];
logic temp_send_val [N_OUTPUTS-1:0];
logic temp_recv_rdy [N_INPUTS-1:0];
logic temp_recv_val [N_INPUTS-1:0];
logic temp_send_rdy [N_OUTPUTS-1:0];

crossbarVRTL #(
    .BIT_WIDTH(BIT_WIDTH),
    .N_INPUTS(N_INPUTS),
    .N_OUTPUTS(N_OUTPUTS),
    .CONTROL_BIT_WIDTH(CONTROL_BIT_WIDTH)
  ) crossbar_inst (
    .recv_msg(temp_recv_msg),
    .recv_val(temp_recv_val),
    .recv_rdy(temp_recv_rdy),
    .send_msg(temp_send_msg),
    .send_val(temp_send_val),
    .send_rdy(temp_send_rdy),          
    .reset(reset),
    .clk(clk),
    .control(control),
    .control_val(control_val),
    .control_rdy(control_rdy)
  );

  generate
    for (genvar i = 0; i < N_OUTPUTS; i = i + 1) begin : output_gen
      assign send_val[i +: 1] = temp_send_val[i];
    end
  endgenerate

  generate
    for (genvar j = 0; j < N_INPUTS; j = j + 1) begin : output_gen
      assign recv_rdy[j +: 1] = temp_recv_rdy[j];
    end
  endgenerate

  generate
    for ( genvar l = 0; l < N_OUTPUTS; l = l + 1) begin : output_gen
      assign send_msg[l*(BIT_WIDTH) +: BIT_WIDTH] = temp_send_msg[l];
    end
  endgenerate

  generate
    for ( genvar k = 0; k < N_INPUTS; k = k + 1) begin : output_gen
      assign temp_recv_val[k] = recv_val[k +: 1];
    end
  endgenerate

  generate
    for ( genvar m = 0; m < N_OUTPUTS; m = m + 1) begin : output_gen
      assign temp_send_rdy[m] = send_rdy[m +: 1];
    end
  endgenerate

  generate
    for ( genvar n = 0; n < N_INPUTS; n = n + 1) begin : output_gen
      assign temp_recv_msg[n] = recv_msg[n*(BIT_WIDTH) +: BIT_WIDTH];
    end
  endgenerate

  endmodule
