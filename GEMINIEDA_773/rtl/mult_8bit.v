module mult_8bit(a, b, c);
input [7:0] a, b;
output [15:0] c;
                                 
  assign c = a * b;

endmodule 
