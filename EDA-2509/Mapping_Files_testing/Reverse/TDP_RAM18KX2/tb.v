`timescale 1ns / 1ps

module RS_TDP36K_tb();
reg   [2:0] addr_B;
wire  [17:0] dout_wrap, dout_dut;
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
output reg [17:0] dout    //SBox output
);

always @ ( posedge clk) 
if (~rst)
    dout <= 18'h00;
else
    if(valid_in) begin
     case (addr)          //substitution table
       3'h0              : dout <= 18'h2BB92;   // 18'b101011101110010010
       3'h1              : dout <= 18'h36F76;   // 18'b110110111101110110
       3'h2              : dout <= 18'h156C9;   // 18'b010101011011001001
       3'h3              : dout <= 18'h0C253;   // 18'b001100001001010011
       3'h4              : dout <= 18'h266AA;   // 18'b100110011010101010
       default           : dout <= 18'h00000;
       
    endcase
  end
// end

endmodule
