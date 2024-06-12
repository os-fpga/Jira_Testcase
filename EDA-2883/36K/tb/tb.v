`timescale 1ns / 1ps

module testbench();
reg   [9:0] addr_A, addr_B;
reg   [31:0] din_A;
wire  [31:0] dout_gold, dout_ocm;
reg          clk_A;
reg          wen_A;
reg          ren_B;

integer mismatch=0;
reg [6:0]cycle;

on_chip_memory on_chip_memory_inst (
    .addr_A(addr_A),
    .din_A(din_A),
    .addr_B(addr_B),
    .wen_A(wen_A),
    .ren_B(ren_B),
    .dout_B(dout_ocm),
    .clk(clk_A)
);

ram dut (
.addr_A(addr_A),
.addr_B(addr_B),
.din_A(din_A),
.clk_A(clk_A),
.dout_B(dout_gold),
.wen_A(wen_A),
.ren_B(ren_B)
);

always #(10)   
clk_A = !clk_A;

integer i;
initial begin
    {clk_A, wen_A, ren_B, addr_A, addr_B ,din_A, cycle, i} = 0;
    
    repeat (2) @(negedge clk_A);
    
    // writing Data
    for (i=0; i<= 1023; i=i+1)begin
        repeat (1) @ (negedge clk_A)
        addr_A <= i; wen_A <=1; ren_B<=0; din_A<= $random;
        cycle = cycle +1;
    end

    //  Reading Data
    for (i=0; i<= 1023; i=i+1)begin
        repeat (1) @ (negedge clk_A)
        addr_B <= i; wen_A <=0; ren_B<=1; 
        cycle = cycle +1;
        compare(cycle);
    end

    // writes and reads simulatnously 
    for (i=0; i<= 1023; i=i+1)begin
        repeat (1) @ (negedge clk_A)
        addr_A <= i; wen_A <= 1; ren_B <= 0; din_A <= $random;
        repeat (1) @ (negedge clk_A)
        addr_B <= i; wen_A <= 0; ren_B <= 1;
        cycle = cycle +2;
        compare(cycle);
    end

    if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
    
    repeat (10) @(negedge clk_A); 
    $finish;
    end

    task compare(input integer cycle);
    if(dout_gold !== dout_ocm) begin
        $display("dout_B mismatch. Golden: %0h, Wrapper: %0h, Time: %0t", dout_gold, dout_ocm, $time);
        mismatch = mismatch+1;
    end
    endtask

initial begin
    `ifdef SIM_VERILATOR
        $dumpfile("verilator.vcd");
    `elsif SIM_IVERILOG
        $dumpfile("iverilog.vcd");
    `endif
    $dumpvars;
end
endmodule

module ram (clk_A, wen_A, ren_B, addr_A, addr_B, din_A, dout_B);
input clk_A;
input wen_A, ren_B;
input [9:0] addr_A, addr_B;
input [31:0] din_A;
output reg [31:0] dout_B = 0;
reg [31:0] RAM [1023:0];
always @(posedge clk_A)
    begin
        if (wen_A)
            RAM[addr_A] <= din_A;
        if (ren_B)
            dout_B <= RAM[addr_B];
        else
            dout_B <= 32'dx;
    end

endmodule