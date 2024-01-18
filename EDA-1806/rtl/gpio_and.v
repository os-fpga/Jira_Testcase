`define RIGEL_104x68
module gpio_and(
	input wire a,
	input wire b,
	output wire c
);
assign c = a & b;
endmodule 