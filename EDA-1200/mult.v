module mult
(
  input reset,
  input clock0,
  input [0:19] A,
  input [0:17] B,
  output reg [0:37] Y
);

  always @(posedge clock0) begin
    if (reset) begin
      Y <= 0;
    end else begin
      Y <= A * B;
    end
  end
  
endmodule
