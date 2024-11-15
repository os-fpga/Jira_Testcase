`timescale 1ns/1ps
`celldefine
//
// DFFRE simulation model
// Posedge D flipflop with async reset and enable
//
// Copyright (c) 2023 Rapid Silicon, Inc.  All rights reserved.
//

// No prologue needed.
module DFFRE (
  input D, // Data Input
  input R, // Active-low, asynchronous reset
  input E, // Active-high enable
  input C, // Clock
  output reg Q = 1'b0 // Data Output
);


always @(posedge C, negedge R)
if (!R)
  Q <= 1'b0;
else if (E)
  Q <= D;


wire C_D_SDFCHK;
wire C_nD_SDFCHK;
wire nC_D_SDFCHK;
wire nC_nD_SDFCHK;
wire R_D_SDFCHK;
wire R_nD_SDFCHK;
wire R_SDFCHK;
wire D_SDFCHK;

assign C_D_SDFCHK   = C & D;
assign C_nD_SDFCHK  = C & !D;
assign nC_D_SDFCHK  = !C & D;
assign nC_nD_SDFCHK = !C & !D;
assign R_D_SDFCHK   = R & D;
assign R_nD_SDFCHK  = R & !D; 
assign R_SDFCHK     = R;
assign D_SDFCHK     = D;















































endmodule
`endcelldefine
