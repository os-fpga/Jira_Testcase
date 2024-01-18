
module tb_bytewrite_sdp_ram_nc;

//--------------------------------------------------------------------------
parameter NUM_COL = 4; // 4 columns of 1 byte each make : 32 bits
parameter COL_WIDTH = 8; //1 byte
parameter ADDR_WIDTH = 10; // Addr Width in bits : 2 *ADDR_WIDTH = RAM Depth ---> 2^10 = 1024
parameter DATA_WIDTH = NUM_COL*COL_WIDTH; // Data Width in bits
//--------------------------------------------------------------------------

reg clk;
reg ena;
reg [NUM_COL-1:0] we;
reg [ADDR_WIDTH-1:0] read_addr,write_addr;
reg [DATA_WIDTH-1:0] din;
wire [DATA_WIDTH-1:0] dout;


    integer mismatch=0;
    reg [6:0]cycle;

    bytewrite_sdp_ram_nc golden(.*);

    //clock//
    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin
    {ena, we, read_addr,write_addr, din, cycle} = 0;

    for (integer i = 0; i<1024; i= i+1) golden.ram[i] = 'b0;

    repeat (1)@(posedge clk);
    
    //writes
    ena = 1'b1;
    we = 4'b1010;
    write_addr = 10'd1;
    din = 32'b11000000010000000100000011010101;

    //writes new value 
    repeat (1) @(posedge clk);
    we = 4'b0101;
    write_addr = 10'd1;
    din = 32'b11000000010000000100000011010101;

    //reads
    repeat (1) @(posedge clk);
    we = 4'b0000;
    read_addr = 10'd1;
repeat (1) @(posedge clk);
    //writes, and reads at same time at given addr
    ena = 1'b1;
    we = 4'b1010;
    read_addr = 10'd1;
    write_addr = 10'd2;
    din = 32'b11000000010000000100000011010101;

    repeat (1) @(posedge clk);
    //writes, and reads at same time at given addr
    ena = 1'b1;
    we = 4'b1010;
    read_addr = 10'd1;
    write_addr = 10'd5;
    din = 32'b11011000010011110100000011010101;

    repeat (1) @(posedge clk);
    we = 4'b0000;
    read_addr = 10'd5;

    

    repeat (5) @(posedge clk);
    $finish;
    end


    initial begin
        //$dumpfile("tb.vcd");
        //$dumpvars;
    end
endmodule