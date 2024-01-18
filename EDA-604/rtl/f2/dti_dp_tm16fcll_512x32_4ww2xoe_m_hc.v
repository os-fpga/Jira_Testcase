/********************************************************************/
/*  Copyright 1998 - 2022 Dolphin Technology, Inc.                  */
/*  This memory compiler and any data created by it are proprietary */
/*  and confidential information of Dolphin Technology, Inc. and    */
/*  can only be used or viewed with written permission from         */
/*  Dolphin Technology, Inc.                                        */
/*  tsmc16nmffcll, version 1p1p53 Rev_1.1                           */
/********************************************************************/

`timescale 1ns/1ps

module dti_dp_tm16fcll_512x32_4ww2xoe_m_hc (, DO_A, DO_B, A_A, A_B, DI_A, DI_B, CE_N_A, 
       CE_N_B, GWE_N_A, GWE_N_B, OE_N_A, OE_N_B, T_RWM_A, T_RWM_B, CLK_A, CLK_B);

output [31:0] DO_A;             // Port A Data Output
output [31:0] DO_B;             // Port B Data Output
input  [8:0] A_A;               // Port A Address
input  [8:0] A_B;               // Port B Address
input  [31:0] DI_A;             // Port A Data Input
input  [31:0] DI_B;             // Port B Data Input
input  CE_N_A;                  // Port A Chip Select Enable --- Active Low
input  CE_N_B;                  // Port B Chip Select Enable --- Active Low
input  GWE_N_A;                 // Port A Global Write Enable --- Active Low
input  GWE_N_B;                 // Port B Global Write Enable --- Active Low
input  OE_N_A;                  // Port A Output Enable --- Active Low
input  OE_N_B;                  // Port B Output Enable --- Active Low
input  [2:0] T_RWM_A;           // Port A Adjustment for Sense Amp delay
input  [2:0] T_RWM_B;           // Port B Adjustment for Sense Amp delay
input  CLK_A;                   // Port A Clock
input  CLK_B;                   // Port B Clock



dti_1pr_tm16fcll_512x32_4ww2xoe_m_hc_fpga ddti_1pr_tm16fcll_128x56_4ww2x_m_shd_fpga_inst (
  .clkA(CLKA),    // input wire clka
  .clkB(CLKB),     // input wire ena
  .weA(CE_N_A),      // input wire [3 : 0] wea
  .weB(CE_N_B),
  .addrA(A_A),  // input wire [12 : 0] addra
  .dinA(DIA),    // input wire [31 : 0] dina
  .dinB(DIB),
  .addrB(A_B),
  .doutA(DOA),  // output wire [31 : 0] douta
  .doutB(DOB)

);

endmodule

module dti_1pr_tm16fcll_512x32_4ww2xoe_m_hc_fpga (clkA, clkB, weA, weB, addrA, addrB, dinA, dinB, doutA, doutB);
    input clkA, clkB, weA, weB;
    input [8:0] addrA, addrB;
    input [31:0] dinA, dinB;
    output [31:0] doutA, doutB;

reg [8:0] reg_addrA, reg_addrB;
reg [31:0] ram [511:0];
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

endmodule
