// `ifndef PROJECT_DECODER_V
// `define PROJECT_DECODER_V


// module DecoderVRTL
//     #(   parameter m = 3, 
//         parameter n = 1 << m
//     )(
//         input  logic [m-1:0] x, 
//         output logic [n-1:0] y
//     );

//     ///////////////////////////////// design
//     always @(*)begin
//         y = {{n-1{1'b0}},1'b1} << x; // << is a shift operator going left shift x positions
//     end
//     /////////////////////////////////

// endmodule

// `endif
//SV2V again
module DecoderVRTL (
	x,
	y
);
    `ifdef USE_POWER_PINS
    inout vccd1, // User area 1 1.8V supply
    inout vssd1, // User area 1 digital ground
    `endif
	parameter m = 3;
	parameter n = 1 << m;
	input wire [m - 1:0] x;
	output reg [n - 1:0] y;
	always @(*) y = {{n - 1 {1'b0}}, 1'b1} << x;
endmodule



