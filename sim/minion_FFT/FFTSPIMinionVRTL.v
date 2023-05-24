`ifndef FFT_SPI_MINION_VRTL
`define FFT_SPI_MINION_VRTL
`include "../SPI_minion/components/SPIMinionVRTL.v"
`include "../SPI_minion/components/SPIMinionAdapterVRTL.v"
`include "../FFT/FFTVRTL.v"
`include "../serializer/SerializerVRTL.v"
`include "../deserializer/DeserializerVRTL.v"

module FFTSPIMinionVRTL
#(
    BIT_WIDTH  = 32,
    DECIMAL_PT = 16,
    N_SAMPLES  = 8
)
(
    input  logic             clk,
    input  logic             reset,
    input  logic             cs,
    input  logic             sclk,
    input  logic             mosi,
    output logic             miso,
    input  logic             cs_2,
    input  logic             sclk_2,
    input  logic             mosi_2,
    output logic             miso_2
);

logic                    push_en_1;
logic                    pull_en_1;

logic [BIT_WIDTH + 1:0]  push_msg_1;
logic [BIT_WIDTH - 1:0]  pull_msg_1;
logic                    pull_msg_val_1;
logic                    pull_msg_spc_1;

logic                    push_en_2;
logic                    pull_en_2;

logic [BIT_WIDTH + 1:0]  push_msg_2;
logic [BIT_WIDTH - 1:0]  pull_msg_2;
logic                    pull_msg_val_2;
logic                    pull_msg_spc_2;

logic [BIT_WIDTH - 1:0]  recv_msg_a_1;
logic                    recv_rdy_a_1;
logic                    recv_val_a_1;
logic [BIT_WIDTH - 1:0]  send_msg_a_2;
logic                    send_rdy_a_2;
logic                    send_val_a_2;

logic [BIT_WIDTH - 1:0]  recv_msg_s   [N_SAMPLES - 1:0];
logic                    recv_rdy_s;
logic                    recv_val_s;
logic [BIT_WIDTH - 1:0]  send_msg_s;
logic                    send_rdy_s;
logic                    send_val_s;

logic [BIT_WIDTH - 1:0]  recv_msg_d;
logic                    recv_rdy_d;
logic                    recv_val_d;
logic [BIT_WIDTH - 1:0]  send_msg_d   [N_SAMPLES - 1:0];
logic                    send_rdy_d;
logic                    send_val_d;

logic                    minion1_parity;
logic                    minion2_parity;
logic                    adapter1_parity;
logic                    adapter2_parity;

SPI_minion_components_SPIMinionVRTL #(.nbits(BIT_WIDTH+2)) minion1
(
    .clk(clk),
    .cs(cs),
    .miso(miso),
    .mosi(mosi),
    .reset(reset),
    .sclk(sclk),
    .pull_en(pull_en_1),
    .pull_msg({pull_msg_val_1, pull_msg_spc_1, pull_msg_1}),
    .push_en(push_en_1),
    .push_msg(push_msg_1),  
    .parity(minion1_parity)
);

SPI_minion_components_SPIMinionAdapterVRTL #(.nbits(BIT_WIDTH+2), .num_entries(N_SAMPLES)) adapter1
(
    .clk(clk),
    .reset(reset),
    .pull_en(pull_en_1),
    .pull_msg_val(pull_msg_val_1),
    .pull_msg_spc(pull_msg_spc_1),
    .pull_msg_data(pull_msg_1),
    .push_en(push_en_1),
    .push_msg_val_wrt(push_msg_1[BIT_WIDTH + 1]),
    .push_msg_val_rd(push_msg_1[BIT_WIDTH]),
    .push_msg_data(push_msg_1[BIT_WIDTH - 1:0]),  
    .recv_msg(recv_msg_a_1),
    .recv_val(recv_val_a_1),
    .recv_rdy(recv_rdy_a_1),

    .send_msg(recv_msg_d),
    .send_val(recv_val_d),
    .send_rdy(recv_rdy_d),
    .parity(adapter1_parity)
);

DeserializerVRTL #(.BIT_WIDTH(BIT_WIDTH), .N_SAMPLES(N_SAMPLES)) deserializer(
    .clk(clk),
    .reset(reset),
    .recv_msg(recv_msg_d),
    .recv_val(recv_val_d),
    .recv_rdy(recv_rdy_d),

    .send_msg(send_msg_d),
    .send_val(send_val_d),
    .send_rdy(send_rdy_d)
);

FFTVRTL #(.BIT_WIDTH(BIT_WIDTH), .DECIMAL_PT(DECIMAL_PT), .N_SAMPLES(N_SAMPLES)) FFT(
    .clk(clk),
    .reset(reset),
    .recv_msg(send_msg_d),
    .recv_val(send_val_d),
    .recv_rdy(send_rdy_d),

    .send_msg(recv_msg_s),
    .send_val(recv_val_s),
    .send_rdy(recv_rdy_s)
);

SerializerVRTL #(.BIT_WIDTH(BIT_WIDTH), .N_SAMPLES(N_SAMPLES)) serializer(
    .clk(clk),
    .reset(reset),
    .recv_msg(recv_msg_s),
    .recv_val(recv_val_s),
    .recv_rdy(recv_rdy_s),

    .send_msg(send_msg_s),
    .send_val(send_val_s),
    .send_rdy(send_rdy_s)
);

SPI_minion_components_SPIMinionAdapterVRTL #(.nbits(BIT_WIDTH+2), .num_entries(N_SAMPLES)) adapter2
(
    .clk(clk),
    .reset(reset),
    .pull_en(pull_en_2),
    .pull_msg_val(pull_msg_val_2),  // add these 3
    .pull_msg_spc(pull_msg_spc_2),  // add these 3
    .pull_msg_data(pull_msg_2),     // add these 3
    .push_en(push_en_2),
    .push_msg_val_wrt(push_msg_2[BIT_WIDTH + 1]), // don't care
    .push_msg_val_rd(push_msg_2[BIT_WIDTH]), // don't care
    .push_msg_data(push_msg_2[BIT_WIDTH - 1:0]), // don't care
    .recv_msg(send_msg_s),
    .recv_val(send_val_s),
    .recv_rdy(send_rdy_s),

    .send_msg(send_msg_a_2),
    .send_val(send_val_a_2),
    .send_rdy(send_rdy_a_2),
    .parity(adapter2_parity)
);

SPI_minion_components_SPIMinionVRTL #(.nbits(BIT_WIDTH+2)) minion2
(
    .clk(clk),
    .cs(cs_2),
    .miso(miso_2),
    .mosi(mosi_2),
    .reset(reset),
    .sclk(sclk_2),
    .pull_en(pull_en_2),
    .pull_msg({pull_msg_val_2, pull_msg_spc_2, pull_msg_2}), // val+space+[15:0]
    .push_en(push_en_2),
    .push_msg(push_msg_2),  
    .parity(minion2_parity)
);

assign recv_val_a_1 = 0;
assign recv_msg_a_1 = 0;
assign send_rdy_a_2 = 0;

endmodule

`endif