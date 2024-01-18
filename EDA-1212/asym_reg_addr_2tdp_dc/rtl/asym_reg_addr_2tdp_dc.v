
module asym_reg_addr_2tdp_dc (clkA, clkB, weA, weB, addrA, addrB, dinA, dinB, doutA, doutB, weA1, weB1, addrA1, addrB1, dinA1, dinB1, doutA1, doutB1);
input clkA, clkB, weA, weB;
input [7:0] addrA, addrB;
input [7:0] dinA, dinB;
output [7:0] doutA, doutB;

reg [7:0] reg_addrA, reg_addrB;
reg [7:0] ram [255:0];

input  weA1, weB1;
input [9:0] addrA1, addrB1;
input [15:0] dinA1, dinB1;
output [15:0] doutA1, doutB1;

reg [9:0] reg_addrA1, reg_addrB1;
reg [15:0] ram1 [1023:0];



always @(posedge clkA)
begin
reg_addrA <= addrA;
if (weA)
  ram[addrA] <= dinA;
    
end


always @(posedge clkB)
begin
reg_addrB <= addrB;
if (weB)
    ram[addrB] <= dinB;
  
end


assign doutA = ram[reg_addrA];
assign doutB = ram[reg_addrB];

/*********************************************************/
always @(posedge clkA)
begin
reg_addrA1 <= addrA1;
if (weA1)
  ram1[addrA1] <= dinA1;
    
end


always @(posedge clkB)
begin
reg_addrB1 <= addrB1;
if (weB1)
    ram1[addrB1] <= dinB1;
  
end


assign doutA1 = ram1[reg_addrA1];
assign doutB1 = ram1[reg_addrB1];

endmodule