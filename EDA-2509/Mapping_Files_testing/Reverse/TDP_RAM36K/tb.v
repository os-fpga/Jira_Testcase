`timescale 1ns / 1ps

module RS_TDP36K_tb();
reg   [2:0] addr_B;
wire  [35:0] dout_wrap, dout_dut;
reg         clk, rst;
reg         ren_B;
reg         valid_in;

integer mismatch=0;
reg [31:0]cycle;

on_chip_memory wrapper(
.addr_B(addr_B),
.ren_B(ren_B),
.dout_B(dout_wrap),
.clk(clk)
);

SBox SBox_inst (
.clk(clk),
.rst(rst),
.valid_in(valid_in),
.addr(addr_B),
.dout(dout_dut)
);

always #(10)   
clk = !clk;

integer i;
initial begin

    {clk, ren_B, addr_B, cycle, i, valid_in, rst} = 0;
    #20;
    rst = 1'b1;
    valid_in = 1'b1;

    for (i=0; i<=4; i=i+1)begin
        repeat (1) @ (negedge clk)
        addr_B <= i;
        ren_B <=1; 
        cycle = cycle +1;
        compare(cycle);
    end

    if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
    
    repeat (9) @(posedge clk); 
    $finish;
    end

    task compare(input integer cycle);
    if(dout_dut !== dout_wrap) begin
        $display("dout mismatch. Golden: %0h, Wrapper: %0h, Time: %0t", dout_dut, dout_wrap, $time);
        mismatch = mismatch+1;
    end
    endtask

    initial begin
        $dumpfile("wave.vcd");
        $dumpvars;
    end
endmodule


module SBox               
(
input clk,               //system clock
input rst,
input valid_in,          //valid input signal
input [2:0] addr,        //SBox input byte
output reg [35:0] dout    //SBox output
);

always @ ( posedge clk) 
if (~rst)
    dout <= 36'hxxxxxxxxx;
else
    if(valid_in) begin
     case (addr)          //substitution table
       3'h0              : dout <= 36'h00002F123; // 000000000000000000 101111000100100011
       3'h1              : dout <= 36'h000031D1E; // 000000000000000000 110001110100011110
       3'h2              : dout <= 36'h00000C4D2; // 000000000000000000 001100010011010010
       3'h3              : dout <= 36'h00001BBBC; // 000000000000000000 011011101110111100
       3'h4              : dout <= 36'h00002EEEE; // 000000000000000000 101110111011101110
       default           : dout <= 36'h000000000;
       
    endcase
  end
// end

endmodule