
`include "../../../C2S2-SERDES/sim/serializer/SerializerVRTL.v"

module SerializerTestHarnessVRTL
    #(
        BIT_WIDTH  = 32,
        N_SAMPLES  = 8
    )
    (
        input  logic [BIT_WIDTH * N_SAMPLES - 1:0] recv_msg,
        input  logic                   recv_val,
        output logic                   recv_rdy,

        output logic [BIT_WIDTH - 1:0] send_msg,
        output logic                   send_val,
        input  logic                   send_rdy,

        input  logic                   reset,
        input  logic                   clk
    );
    
    logic [BIT_WIDTH - 1:0] recv_msg_intermediate [N_SAMPLES - 1:0];

    always @(*) begin
        int i;
        for(i = 0; i < N_SAMPLES; i = i + 1) begin

            recv_msg_intermediate [i][BIT_WIDTH - 1:0]        = recv_msg[BIT_WIDTH * i +: BIT_WIDTH];
        end
    end

    SerializerVRTL #( .BIT_WIDTH(BIT_WIDTH), .N_SAMPLES(N_SAMPLES)) serializer
    (
        .recv_msg(recv_msg_intermediate),
        .recv_val(recv_val),
        .recv_rdy(recv_rdy),

        .send_msg(send_msg),
        .send_val(send_val),
        .send_rdy(send_rdy),

        .reset(reset),
        .clk(clk)
    );

endmodule
