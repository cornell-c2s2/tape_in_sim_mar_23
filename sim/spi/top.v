`ifndef spi_master
`define spi_master
`endif

`include "spi_master.v"
`include "shiftreg.v"
`include "counter.v"

module top #(parameter nbits = 34) (
    // SPECIFY I/O HERE
    input reset,
    input clk,

    input logic packet_size_ifc_val, 
    output logic packet_size_ifc_rdy,
    input logic [$clog2(nbits)-1:0] packet_size_ifc_msg,    

    output logic send_val,
    input logic send_rdy,
    output logic recv_rdy,
    input logic recv_val,
    input [nbits-1:0] recv_msg, // enters block as nbit wide signal
    output [nbits-1:0] send_msg, // sipo shreg output

    output cs0,
    output sclk,
    output mosi,
    input miso
);
    
    logic recv_rdy_out;
    assign recv_rdy = recv_rdy_out;

    logic sclk_negedge;
    logic sclk_posedge;

    logic count_en;
    logic count_rst;
    logic count

    spi_master_ctrl fsm (
        //MAKE CONNECTIONS HERE
        .packet_size_reg(packet_size_ifc_msg),
        .packet_size_ifc_val(packet_size_ifc_val),
        .packet_size_reg_en(), // not sure what this is
	.packet_size_ifc_rdy(packet_size_ifc_rdy),
        // let's omit cs for now
        .send_val(send_val),
        .send_rdy(send_rdy),
        .recv_rdy(recv_rdy_out),
        .recv_val(recv_val),
        .sclk_posedge(sclk_posedge),
        .sclk_negedge(sclk_negedge),
        .count_increment(count_en),
        .count_reset(count_rst)
        .count(count),
        .cs(cs0), // only 1 cs for now
        .sclk(sclk)
    );

    // NEED TO PUT VALRDY BLOCK FOR PACKET SIZE

    counter count (
        .rst(count_rst),
        .clk(clk),
        .en(count_en),
        .out(count)
    );

    shiftreg shregout (
        .clk(clk),
        .reset(reset),
        .load_en(recv_val & recv_rdy_out),
        .shift_en(sclk_negedge),
        .in(1'b0),
        .load_data(recv_msg << (nbits - packet_size_ifc_msg)), //fill in
        .out(mosi) 
    );

    shiftreg shregin (
        .clk(clk),
        .reset(reset),
        .load_en(1'b0),
        .shift_en(sclk_posedge),
        .in(miso),
        .load_data(1'b0),
        .out(send_msg) // not sure if right width
    );
