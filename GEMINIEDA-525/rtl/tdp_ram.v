
module tdp_ram (clkA, clkB, weA, weB, addrA, addrB, dinA, dinB, doutA, doutB);
input clkA, clkB, weA, weB;
input [8:0] addrA, addrB;
input [31:0] dinA, dinB;
output reg [31:0]  doutB;
output  [31:0] doutA;

reg [8:0] addrA_reg;
reg [31:0] ram [511:0];

always @(posedge clkA)
begin
  addrA_reg<=addrA;
  if (weA)
      ram[addrA] <= dinA;
end
assign  doutA = ram[addrA];

always @(posedge clkB)
begin
  if (weB)
      ram[addrB] <= dinB;
  else
      doutB <= ram[addrB];
end

endmodule
