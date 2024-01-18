
module tb_bytewrite_sp_ram_wf;

//--------------------------------------------------------------------------
parameter NUM_COL = 4; // 4 columns of 1 byte each make : 32 bits
parameter COL_WIDTH = 8; //1 byte
parameter ADDR_WIDTH = 10; // Addr Width in bits : 2 *ADDR_WIDTH = RAM Depth ---> 2^10 = 1024
parameter DATA_WIDTH = NUM_COL*COL_WIDTH; // Data Width in bits
//--------------------------------------------------------------------------

reg clk;
reg ena;
reg [NUM_COL-1:0] we;
reg [ADDR_WIDTH-1:0] addr;
reg [DATA_WIDTH-1:0] din;
wire [DATA_WIDTH-1:0] dout;


    integer mismatch=0;
    reg [6:0]cycle;

    bytewrite_sp_ram_wf golden(.*);

    //clock//
    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin
    {ena, we, addr, din, cycle} = 0;

    for (integer i = 0; i<1024; i= i+1) golden.ram[i] = 'b0;

    repeat (1)@(posedge clk);
    
    //writes first, reads at whats being written
    ena = 1'b1;
    we = 4'b1010;
    addr = 10'd1;
    din = 32'b11000000010000000100000011010101;

    //writes new value 
    repeat (1) @(posedge clk);
    we = 4'b0101;
    addr = 10'd1;
    din = 32'b11000000010000000100000011010101;

    //not writing, and reads at given addr
    repeat (1) @(posedge clk);
    we = 4'b0000;
    addr = 10'd1;

 //writes, and reads at same time at whats being written
    ena = 1'b1;
    we = 4'b1010;
    addr = 10'd2;
    din = 32'b11000000010000000100000011010101;

    //writes new value 
    repeat (1) @(posedge clk);
    we = 4'b0101;
    addr = 10'd3;
    din = 32'b11000000010000000100000011010101;

    //not writing, and reads same time at given addr
    repeat (1) @(posedge clk);
    we = 4'b0000;
    addr = 10'd1;

    repeat (1) @(posedge clk);
    we = 4'b0000;
    addr = 10'd3;
    
    repeat (5) @(posedge clk);
    $finish;
    end


    initial begin
        //$dumpfile("tb.vcd");
        //$dumpvars;
    end
endmodule