// `timescale 1ns / 1ps
`ifndef TESTBENC
  `define size 7
`endif

module bit7_up_counter (clock0,counter1,rst);

    input clock0;
    input rst;
    output [`size-1:0] counter1;
    wire [`size-1:0] counter1;

    counter 
    counter1_dut (
      .clk_counter (clock0 ),
      .rst_counter (rst ),
      .q_counter  ( counter1)
    );

endmodule 

module counter (clk_counter, q_counter, rst_counter);

input clk_counter;
input rst_counter;
output [`size-1:0] q_counter;
reg [`size-1:0] q_counter;

always @ (posedge clk_counter)
begin
    if(rst_counter)
q_counter <= 'b0000000;
else
q_counter <= q_counter + 1;
end

endmodule 