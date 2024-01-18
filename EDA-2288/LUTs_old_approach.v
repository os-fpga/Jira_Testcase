
/////////////////////////Original Model from RS_PRIMTIVES repo////////////////////////////////
module LUT1 #(
  parameter [1:0] INIT_VALUE = 2'h0 // 2-bit LUT logic value
) (
  input A, // Data Input
  output Y // Data Output
);

  assign Y = INIT_VALUE[A] ;


endmodule

module LUT4 #(
  parameter [15:0] INIT_VALUE = 16'h0000 // 16-bit LUT logic value
) (
  input [3:0] A, // Data Input
  output Y // Data Output
);

  assign Y = INIT_VALUE[A] ;


endmodule
 
