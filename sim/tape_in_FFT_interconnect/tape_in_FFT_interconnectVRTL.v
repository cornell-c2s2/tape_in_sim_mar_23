`ifndef TAPE_IN_FFT_INTERCONNECT_VRTL
`define TAPE_IN_FFT_INTERCONNECT_VRTL

`include "../../../C2S2-Module-Library/sim/spi/SPIMasterValRdyVRTL.v"
`include "../../../spi_minion/sim/SPI_minion/components/SPIMinionAdapterConnectedVRTL.v"
`include "../../../tape_in_sim/sim/minion_FFT/FFTSPIMinionVRTL.v"
`include "../../../C2S2-PacketRoutingInterconnect/sim/BlockingXBar/crossbarVRTL.v"
`include "../../../C2S2-PacketRoutingInterconnect/sim/BlockingXBar/crossbaroneoutVRTL.v"
`include "../../../C2S2-PacketRoutingInterconnect/sim/Router/routerVRTL.v"
`include "../../../C2S2-PacketRoutingInterconnect/sim/Arbiter/ArbitratorVRTL.v"

module tape_in_FFT_interconnectVRTL
#(
    BIT_WIDTH  = 32,
    DECIMAL_PT = 16,
    N_SAMPLES  = 256
)
(
    input  logic             clk,
    input  logic             reset,

    input  logic             minion_cs,
    input  logic             minion_sclk,
    input  logic             minion_mosi,
    output logic             minion_miso,
    output logic             minion_parity ,
    output logic             adapter_parity,

    input  logic             minion_cs_2,
    input  logic             minion_sclk_2,
    input  logic             minion_mosi_2,
    output logic             minion_miso_2,

    

    input  logic             minion_cs_3,
    input  logic             minion_sclk_3,
    input  logic             minion_mosi_3,
    output logic             minion_miso_3,


    output logic             master_cs  ,
    input  logic             master_miso,
    output logic             master_mosi,
    output logic             master_sclk

);

localparam MAX_ADDRESSABLE_SRCS_POW_2 = 16;
localparam MAX_ADDRESSABLE_SRC_LOG2 = $clog2(MAX_ADDRESSABLE_SRCS_POW_2);

logic                   spi_minion_send_val;
logic                   spi_minion_send_rdy;
logic [BIT_WIDTH + MAX_ADDRESSABLE_SRC_LOG2 - 1:0] spi_minion_send_msg;

logic                   spi_minion_recv_val;
logic                   spi_minion_recv_rdy;
logic [BIT_WIDTH + MAX_ADDRESSABLE_SRC_LOG2 - 1:0] spi_minion_recv_msg;

logic                   module_interconnect_src_val[0:MAX_ADDRESSABLE_SRCS_POW_2 - 1];
logic                   module_interconnect_src_rdy[0:MAX_ADDRESSABLE_SRCS_POW_2 - 1];
logic [BIT_WIDTH - 1:0] module_interconnect_src_msg[0:MAX_ADDRESSABLE_SRCS_POW_2 - 1];

logic                   module_interconnect_snk_val[0:MAX_ADDRESSABLE_SRCS_POW_2 - 1];
logic                   module_interconnect_snk_rdy[0:MAX_ADDRESSABLE_SRCS_POW_2 - 1];
logic [BIT_WIDTH - 1:0] module_interconnect_snk_msg[0:MAX_ADDRESSABLE_SRCS_POW_2 - 1];

logic                   spi_master_send_val;
logic                   spi_master_send_rdy;
logic [BIT_WIDTH - 1:0] spi_master_send_msg;

logic                   spi_master_recv_val;
logic                   spi_master_recv_rdy;
logic [BIT_WIDTH - 1:0] spi_master_recv_msg;

logic [BIT_WIDTH - 1:0] fft_input_xbar_recv_msg[0:1];
logic fft_input_xbar_recv_val[0:1];
logic fft_input_xbar_recv_rdy[0:1];

logic [BIT_WIDTH - 1:0] fft_input_xbar_send_msg[0:1];
logic fft_input_xbar_send_val[0:1];
logic fft_input_xbar_send_rdy[0:1];


logic [BIT_WIDTH - 1:0] fft_output_xbar_recv_msg[0:1];
logic fft_output_xbar_recv_val[0:1];
logic fft_output_xbar_recv_rdy[0:1];

logic [BIT_WIDTH - 1:0] spi_master_xbar_recv_msg[0:1];
logic spi_master_xbar_recv_val[0:1];
logic spi_master_xbar_recv_rdy[0:1];

logic [BIT_WIDTH - 1:0]  recv_msg_s   [N_SAMPLES - 1:0];
logic                    recv_rdy_s;
logic                    recv_val_s;



logic [BIT_WIDTH - 1:0]  send_msg_d   [N_SAMPLES - 1:0];
logic                    send_rdy_d;
logic                    send_val_d;

logic                    master_cs_temp [0:1];

logic [BIT_WIDTH + MAX_ADDRESSABLE_SRC_LOG2 - 1 : 0 ] arb_imm;


SPIMinionAdapterConnectedVRTL #(.BIT_WIDTH(BIT_WIDTH + MAX_ADDRESSABLE_SRC_LOG2), .N_SAMPLES(N_SAMPLES) ) ctrl_spi_minion 
                (.clk(clk), .reset(reset), .cs(minion_cs), .sclk(minion_sclk), .mosi(minion_mosi), .miso(minion_miso),
                 .recv_msg(spi_minion_recv_msg), .recv_rdy(spi_minion_recv_rdy), .recv_val(spi_minion_recv_val), 
                 .send_msg(spi_minion_send_msg), .send_rdy(spi_minion_send_rdy), .send_val(spi_minion_send_val),
                 .minion_parity(minion_parity), .adapter_parity(adapter_parity));

ArbitratorVRTL #(.nbits(BIT_WIDTH), 
             .num_inputs(MAX_ADDRESSABLE_SRCS_POW_2)) arbiter 
             ( 
             .clk(clk), 
             .reset(reset), 

             .recv_val(module_interconnect_snk_val), 
             .recv_rdy(module_interconnect_snk_rdy), 
             .recv_msg(module_interconnect_snk_msg), 

             .send_val(spi_minion_recv_val), 
             .send_rdy(spi_minion_recv_rdy), 
             .send_msg(spi_minion_recv_msg));

routerVRTL #(.p_nbits(BIT_WIDTH + MAX_ADDRESSABLE_SRC_LOG2), .p_noutputs(MAX_ADDRESSABLE_SRCS_POW_2)) router
            (
                .valid     (spi_minion_send_val),
                .ready_out (spi_minion_send_rdy),
                .message_in(spi_minion_send_msg),
                
                .valid_out  (module_interconnect_src_val),
                .ready      (module_interconnect_src_rdy),
                .message_out(module_interconnect_src_msg)
            );

//Address 0: Loopack through the arbiters back to the SPI adapter. 
assign module_interconnect_snk_val[0] = module_interconnect_src_val[0];
assign module_interconnect_src_rdy[0] = module_interconnect_snk_rdy[0];
assign module_interconnect_snk_msg[0] = module_interconnect_src_msg[0];



//Address 1: FFT Input Crossbar Control
crossbarVRTL #(.BIT_WIDTH(BIT_WIDTH), .N_INPUTS(2), .N_OUTPUTS(2), .CONTROL_BIT_WIDTH(BIT_WIDTH)) fft_input_xbar  (.clk(clk), 
                                                                                    .reset(reset), 
                                                                                    
                                                                                    .recv_msg(fft_input_xbar_recv_msg), 
                                                                                    .recv_val(fft_input_xbar_recv_val), 
                                                                                    .recv_rdy(fft_input_xbar_recv_rdy), 
                                                                                    
                                                                                    .send_msg(fft_input_xbar_send_msg), 
                                                                                    .send_val(fft_input_xbar_send_val), 
                                                                                    .send_rdy(fft_input_xbar_send_rdy), 
                                                                                    
                                                                                    .control    (module_interconnect_src_msg[1]), 
                                                                                    .control_val(module_interconnect_src_val[1]), 
                                                                                    .control_rdy(module_interconnect_src_rdy[1]));



assign fft_input_xbar_recv_msg[0]     = module_interconnect_src_msg[7];
assign fft_input_xbar_recv_val[0]     = module_interconnect_src_val[7];
assign module_interconnect_src_rdy[7] = fft_input_xbar_recv_rdy[0];

assign fft_input_xbar_recv_msg[1] = spi_master_send_msg;
assign fft_input_xbar_recv_val[1] = spi_master_send_val;
assign spi_master_send_val        = fft_input_xbar_recv_rdy[1];





//Address 2: FFT Output Crossbar Control
crossbaroneoutVRTL #(.BIT_WIDTH(BIT_WIDTH), .N_INPUTS(2), .N_OUTPUTS(1), .CONTROL_BIT_WIDTH(BIT_WIDTH)) fft_output_xbar (.clk(clk), 
                                                                                    .reset(reset), 
                                                                                    
                                                                                    .recv_msg(fft_output_xbar_recv_msg), 
                                                                                    .recv_val(fft_output_xbar_recv_val), 
                                                                                    .recv_rdy(fft_output_xbar_recv_rdy), 
                                                                                    
                                                                                    .send_msg(module_interconnect_snk_msg[1]), 
                                                                                    .send_val(module_interconnect_snk_val[1]), 
                                                                                    .send_rdy(module_interconnect_snk_rdy[1]), 
                                                                                    
                                                                                    .control    (module_interconnect_src_msg[2]), 
                                                                                    .control_val(module_interconnect_src_val[2]), 
                                                                                    .control_rdy(module_interconnect_src_rdy[2]));



//Address 6: SPI Master Crossbar 
crossbaroneoutVRTL #(.BIT_WIDTH(BIT_WIDTH), .N_INPUTS(2), .N_OUTPUTS(1), .CONTROL_BIT_WIDTH(BIT_WIDTH)) spi_master_xbar (.clk(clk), 
                                                                                    .reset(reset), 
                                                                                    
                                                                                    .recv_msg(spi_master_xbar_recv_msg), 
                                                                                    .recv_val(spi_master_xbar_recv_val), 
                                                                                    .recv_rdy(spi_master_xbar_recv_rdy), 
                                                                                    
                                                                                    .send_msg(spi_master_recv_msg), 
                                                                                    .send_val(spi_master_recv_val), 
                                                                                    .send_rdy(spi_master_recv_rdy), 
                                                                                    
                                                                                    .control    (module_interconnect_src_msg[6]), 
                                                                                    .control_val(module_interconnect_src_val[6]), 
                                                                                    .control_rdy(module_interconnect_src_rdy[6]));



assign spi_master_xbar_recv_msg[0]     = module_interconnect_src_msg[8];
assign spi_master_xbar_recv_val[0]     = module_interconnect_src_val[8];
assign module_interconnect_src_rdy[8]  = spi_master_xbar_recv_rdy[0];

assign spi_master_xbar_recv_msg[1] = 0;
assign spi_master_xbar_recv_val[1] = 1;

assign master_cs = master_cs_temp[0];

SPIMasterValRdyVRTL #(.nbits(32), .ncs(2)) spi_master (
  .clk(clk), 
  .reset(reset), 
  
  .spi_ifc_cs  (master_cs_temp), 
  .spi_ifc_miso(master_miso),
  .spi_ifc_mosi(master_mosi),
  .spi_ifc_sclk(master_sclk),

  .recv_val(spi_master_send_val),
  .recv_rdy(spi_master_send_rdy),
  .recv_msg(spi_master_send_msg),

  .send_val(spi_master_recv_val),
  .send_rdy(spi_master_recv_rdy),
  .send_msg(spi_master_recv_msg),

  .packet_size_ifc_val(module_interconnect_src_msg[5]), //Address 5: SPI Master Packet Size Select
  .packet_size_ifc_rdy(module_interconnect_src_val[5]),
  .packet_size_ifc_msg(module_interconnect_src_rdy[5]),

  .cs_addr_ifc_val(module_interconnect_src_msg[4]), // Address 4: SPI Master Chip Select
  .cs_addr_ifc_rdy(module_interconnect_src_val[4]),
  .cs_addr_ifc_msg(module_interconnect_src_rdy[4]),

  .freq_ifc_val(module_interconnect_src_msg[3]), //new //Address 3: SPI Master Frequency Select
  .freq_ifc_rdy(module_interconnect_src_val[3]), //new 
  .freq_ifc_msg(module_interconnect_src_rdy[3]) //new
  );




DeserializerVRTL #(.BIT_WIDTH(BIT_WIDTH), .N_SAMPLES(N_SAMPLES)) deserializer(
    .clk(clk),
    .reset(reset),
    .recv_msg(fft_input_xbar_send_msg[0]),
    .recv_val(fft_input_xbar_send_val[0]),
    .recv_rdy(fft_input_xbar_send_rdy[0]),

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

    .send_msg(fft_output_xbar_recv_msg[1]),
    .send_val(fft_output_xbar_recv_val[1]),
    .send_rdy(fft_output_xbar_recv_rdy[1])
);



FFTSPIMinionVRTL #(.BIT_WIDTH(BIT_WIDTH), .DECIMAL_PT(DECIMAL_PT), .N_SAMPLES(8)) tape_in_one_model (
                   .clk(clk), .reset(reset), 
                   .cs(minion_cs_2), .sclk(minion_sclk_2), .mosi(minion_mosi_2), .miso(minion_miso_2), 
                   .cs_2(minion_cs_3), .sclk_2(minion_sclk_3), .mosi_2(minion_mosi_3), .miso_2(minion_miso_3));



endmodule

`endif