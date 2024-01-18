module counter_8bit (clk, reset, count);
input clk, reset;
output [7:0] count;
reg [7:0] count;                                   

always @ (posedge clk or negedge reset)
if (reset == 1'b0)
begin
  count <= 0;
end 
else 
begin
  count <= count + 1;
end
endmodule  


module counter8bit4 (clock0, clock1, clock2, clock3, reset, cnt0_8, cnt1_8, cnt2_8, cnt3_8);
input clock0, clock1, clock2, clock3;
input reset;
output [7:0] cnt0_8;
output [7:0] cnt1_8;
output [7:0] cnt2_8;
output [7:0] cnt3_8;

counter_8bit u_cnt0(.clk(clock0), .reset(reset), .count(cnt0_8));
counter_8bit u_cnt1(.clk(clock1), .reset(reset), .count(cnt1_8));
counter_8bit u_cnt2(.clk(clock2), .reset(reset), .count(cnt2_8));
counter_8bit u_cnt3(.clk(clock3), .reset(reset), .count(cnt3_8));

endmodule 