module duplicates_iobuf (
  input wire clk,
  input wire reset,
  input wire [1:0] a,
  input wire [1:0] b,
  output reg [2:0] c
);

/*   Uncomment below code to run with instantiated IO buffers
*/
wire clk_ibuf;
wire clk_buf;
wire reset_ibuf;
wire [1:0] a_ibuf;
wire [1:0] b_ibuf;
reg [2:0] c_out;

I_BUF # (.WEAK_KEEPER("NONE")) clk_IBUF     (.I(clk),       .EN(1'b1), .O(clk_ibuf));
I_BUF # (.WEAK_KEEPER("NONE")) a0_IBUF   (.I(a[0]),      .EN(1'b1), .O(a_ibuf[0]));
I_BUF # (.WEAK_KEEPER("NONE")) a1_IBUF    (.I(a[1]),      .EN(1'b1), .O(a_ibuf[1]));
I_BUF # (.WEAK_KEEPER("NONE")) reset_IBUF   (.I(reset),     .EN(1'b1), .O(reset_ibuf));
I_BUF # (.WEAK_KEEPER("NONE")) b0_IBUF     (.I(b[0]),       .EN(1'b1), .O(b_ibuf[0]));
I_BUF # (.WEAK_KEEPER("NONE")) b1_IBUF     (.I(b[1]),       .EN(1'b1), .O(b_ibuf[1]));

CLK_BUF clk_BUF (.I(clk_ibuf), .O(clk_buf));    // Clock Buffer

O_BUF c0_OBUF (.I(c_out[0]), .O(c[0]));
O_BUF c1_OBUF (.I(c_out[1]), .O(c[1]));
O_BUF c2_OBUF (.I(c_out[2]), .O(c[2]));


always@(posedge clk_buf) begin 
  if (reset_ibuf) begin 
    c_out <= 3'd0;
  end else begin
    c_out <= a_ibuf + b_ibuf;
  end
end
/*
*/

/* Uncomment the below code to compile without instantiated IO buffers
*/
// always@(posedge clk) begin 
//   if (reset) begin 
//     c <= 3'd0;
//   end else begin
//     c <= a + b;
//   end
// end
/*
*/

endmodule