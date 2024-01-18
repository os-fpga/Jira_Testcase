/********************************************************************/
/*  Copyright 1998 - 2022 Dolphin Technology, Inc.                  */
/*  This memory compiler and any data created by it are proprietary */
/*  and confidential information of Dolphin Technology, Inc. and    */
/*  can only be used or viewed with written permission from         */
/*  Dolphin Technology, Inc.                                        */
/*  tsmc16nmffcll, version 1p1p52 Rev_2.6                           */
/********************************************************************/

/*The default setting corresponds to T_RWM == "011".*/

`timescale 1ns/1ps


module dti_1pr_tm16fcll_128x56_4ww2x_m_shd ( DO, A, DI, CE_N, GWE_N, T_RWM, T_DLY, CLK);
output [55:0] DO;               // Data Output
input  [6:0] A;                 // Address
input  [55:0] DI;               // Data Input
input  CE_N;                    // Chip Select Enable --- Active Low
input  GWE_N;                   // Global Write Enable --- Active Low
input  [2:0] T_RWM;             // Adjustment for Sense Amp delay
input  [2:0] T_DLY;
input  CLK;                     // Clock


dti_1pr_tm16fcll_128x56_4ww2x_m_shd_fpga ddti_1pr_tm16fcll_128x56_4ww2x_m_shd_fpga_inst (
  .clk(CLK),    // input wire clka
  .ena(~CE_N),      // input wire ena
  .we( {4{~GWE_N}} & ~BYWE_N),      // input wire [3 : 0] wea
  .addr(A),  // input wire [12 : 0] addra
  .din(DI),    // input wire [31 : 0] dina
  .dout(DO)  // output wire [31 : 0] douta

);

endmodule


/////////////////////////////////////////////

module dti_1pr_tm16fcll_128x56_4ww2x_m_shd_fpga
#(
//--------------------------------------------------------------------------
parameter NUM_COL = 4, // 4 columns of 1 byte each make : 32 bits
parameter COL_WIDTH = 14, //1 byte
parameter ADDR_WIDTH = 7, // Addr Width in bits : 2 *ADDR_WIDTH = RAM Depth ---> 2^10 = 1024
parameter DATA_WIDTH = NUM_COL*COL_WIDTH // Data Width in bits
//--------------------------------------------------------------------------
) (
input clk,
input ena,
input [NUM_COL-1:0] we,
input [ADDR_WIDTH-1:0] addr,
input [DATA_WIDTH-1:0] din,
output reg [DATA_WIDTH-1:0] dout
);

reg [DATA_WIDTH-1:0] ram [(2**ADDR_WIDTH)-1:0];
integer i;

always @ (posedge clk) 
begin
	if(ena) 
	begin
		for(i=0;i<NUM_COL;i=i+1) 
		begin
			if(we[i]) 
			begin
				ram[addr][i*COL_WIDTH +: COL_WIDTH] <= din[i*COL_WIDTH +: COL_WIDTH];
				dout[i*COL_WIDTH +: COL_WIDTH] <= din[i*COL_WIDTH +: COL_WIDTH];
			end
			else
				dout[i*COL_WIDTH +: COL_WIDTH] <= ram[addr][i*COL_WIDTH +: COL_WIDTH];
		end
	end
end

endmodule 
