`define RIGEL_10x8
module gpio_and(
	input wire a,
	input wire b,
	output wire c
);
assign c = a & b;
endmodule 