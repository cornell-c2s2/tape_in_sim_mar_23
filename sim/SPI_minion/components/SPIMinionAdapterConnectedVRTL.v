`include "../SPI_minion/components/SPIMinionVRTL.v"
`include "../SPI_minion/components/SPIMinionAdapterVRTL.v"

module SPIMinionAdapterConnectedVRTL
#(
    BIT_WIDTH  = 32,
    N_SAMPLES  = 8
)
(
    input  logic                    clk,
    input  logic                    reset,
    input  logic                    cs,
    input  logic                    sclk,
    input  logic                    mosi,
    output logic                    miso,
    input  logic [BIT_WIDTH - 1:0]  recv_msg,
    output logic                    recv_rdy,
    input  logic                    recv_val,
    output logic [BIT_WIDTH - 1:0]  send_msg,
    input  logic                    send_rdy,
    output logic                    send_val,
    output logic                    minion_parity,
    output logic                    adapter_parity
);

logic                    push_en;
logic                    pull_en;

logic [BIT_WIDTH + 1:0]  push_msg;
logic [BIT_WIDTH - 1:0]  pull_msg;
logic                    pull_msg_val;
logic                    pull_msg_spc;

SPI_minion_components_SPIMinionVRTL #(.nbits(BIT_WIDTH+2)) minion
(
    .clk(clk),
    .cs(cs),
    .miso(miso),
    .mosi(mosi),
    .reset(reset),
    .sclk(sclk),
    .pull_en(pull_en),
    .pull_msg({pull_msg_val, pull_msg_spc, pull_msg}),
    .push_en(push_en),
    .push_msg(push_msg),  
    .parity(minion_parity)
);

SPI_minion_components_SPIMinionAdapterVRTL #(.nbits(BIT_WIDTH+2), .num_entries(N_SAMPLES)) adapter1
(
    .clk(clk),
    .reset(reset),
    .pull_en(pull_en),
    .pull_msg_val(pull_msg_val),
    .pull_msg_spc(pull_msg_spc),
    .pull_msg_data(pull_msg),
    .push_en(push_en),
    .push_msg_val_wrt(push_msg[BIT_WIDTH + 1]),
    .push_msg_val_rd(push_msg[BIT_WIDTH]),
    .push_msg_data(push_msg[BIT_WIDTH - 1:0]),  
    .recv_msg(recv_msg),
    .recv_val(recv_val),
    .recv_rdy(recv_rdy),

    .send_msg(send_msg),
    .send_val(send_val),
    .send_rdy(send_rdy),
    .parity(adapter_parity)
);

endmodule
