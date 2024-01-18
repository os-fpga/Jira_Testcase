`define Total_instances 1
//`include "../bram_inst_defines.v"

module ram_inst_tdp_no_split_36 #(parameter AWIDTH = 10, DWIDTH = 36) (
  //input clock0, clock1, weA, weB,
  input clock0, clock1, weA, weB,
  input [AWIDTH-1:0] addrA, addrB,
  input [DWIDTH-1:0] dinA, dinB, 
  input [$clog2(`Total_instances)-1:0] id,
  output [DWIDTH-1:0] doutA, doutB);

parameter [80:0] MODE_BITS =81'hdb600000006db0000000;

wire [DWIDTH-1:0] dout_A [0:`Total_instances-1];
wire [DWIDTH-1:0] dout_B [0:`Total_instances-1];
reg [`Total_instances-1:0] weA_arr, weB_arr;
genvar i;

generate
  for (i=0;i<`Total_instances;i=i+1) begin
    RS_TDP36K  #(.MODE_BITS(MODE_BITS))
     inst1(
       .ADDR_A1({ addrA, 5'h00 }),
       .ADDR_A2({ addrA[8:0], 5'h00 }),
       .ADDR_B1({ addrB, 5'h00 }),
       .ADDR_B2({ addrB[8:0], 5'h00 }),
       .BE_A1(3),
       .BE_A2(3),
       .BE_B1(3),
       .BE_B2(3),
       .CLK_A1(clock0),
       .CLK_A2(clock0),
       .CLK_B1(clock1),
       .CLK_B2(clock1),
       .FLUSH1(0),
       .FLUSH2(0),
      //  .RDATA_A1({doutA[33:32],doutA[15:0]}),
      //  .RDATA_A2({doutA[35:34],doutA[31:16]}),
      //  .RDATA_B1({doutB[33:32],doutB[15:0]}),
      //  .RDATA_B2({doutB[35:34],doutB[31:16]}),
       .RDATA_A1({dout_A[i][33:32],dout_A[i][15:0]}),
       .RDATA_A2({dout_A[i][35:34],dout_A[i][31:16]}),
       .RDATA_B1({dout_B[i][33:32],dout_B[i][15:0]}),
       .RDATA_B2({dout_B[i][35:34],dout_B[i][31:16]}),
       .REN_A1(~weA_arr[i]),
       .REN_A2(~weA_arr[i]),
       .REN_B1(~weB_arr[i]),
       .REN_B2(~weB_arr[i]),
       .WDATA_A1({dinA[33:32],dinA[15:0]}),
       .WDATA_A2({dinA[35:34],dinA[31:16]}),
       .WDATA_B1({dinB[33:32],dinB[15:0]}),
       .WDATA_B2({dinB[35:34],dinB[31:16]}),
       .WEN_A1(weA_arr[i]),
       .WEN_A2(weA_arr[i]),
       .WEN_B1(weB_arr[i]),
       .WEN_B2(weB_arr[i])
    );
  end

endgenerate
 
assign doutA = dout_A[id];
assign doutB = dout_B[id];

integer j;

always @ (*) begin
  for(j=0;j<`Total_instances;j=j+1)begin
    weA_arr[j] = 'd0;
    weB_arr[j] = 'd0;
  end
    weA_arr[id] = weA;
    weB_arr[id] = weB;
end
endmodule
