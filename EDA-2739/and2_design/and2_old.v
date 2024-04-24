module and2(
	input wire a,
	input wire b,
	output wire c_oen,
	output wire [1:0] in_oen,
	output wire c

);
assign c = a & b;
assign c_oen = 1'b1;
assign in_oen = {(2){1'b1}};

endmodule 