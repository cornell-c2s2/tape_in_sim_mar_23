module arbiter(

    input logic parallel0_recv_val;
    output logic parallel0_recv_rdy;
    input logic parallel0_recv_msg; //should be the address

    output logic parallel0_send_val;
    input logic parallel0_send_rdy;
    output logic [31:0] parallel0_send_msg; //spi output

    input logic parallel1_recv_val;
    output logic parallel1_recv_rdy;
    input logic parallel1_recv_msg; //should be the address

    output logic parallel1_send_val;
    input logic parallel1_send_rdy;
    output logic [31:0] parallel1_send_msg; //spi output

    input logic spi_recv_val;
    output logic spi_recv_rdy;
    input logic spi_recv_msg;

    output logic spi_send_val;
    input logic spi_send_rdy;
    output logic spi_send_msg;
);

    logic current_num; //stores current

always @(*) begin
    
end

endmodule