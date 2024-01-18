
module tb_ram_simple_dp_sync_reg_read_1024x64;
    reg clk, we;
    reg [9:0] read_addr, write_addr;
    reg [63:0] din;
    wire [63:0] dout;

    integer mismatch=0;
    reg [6:0]cycle;

    ram_simple_dp_sync_reg_read_1024x64 golden(.*);

    //clock//
    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin
    {we, read_addr,write_addr, din, cycle} = 0;

    for (integer i = 0; i<1024; i= i+1) golden.ram[i] = 'b0;

    repeat (1)@(posedge clk);
    
    we = 1'b1;
    write_addr = 10'd1;
    read_addr = 10'd1;
    din = 64'd25;

    repeat (1) @(posedge clk);
    we = 1'b1;
    write_addr = 10'd1;
    read_addr = 10'd2;
    din = 64'd26;

    repeat (1) @(posedge clk);
    we = 1'b0;
    write_addr = 10'd1;
    read_addr = 10'd4;
    din = 64'd27;
    
    repeat (1) @(posedge clk);
    we = 1'b1;
    write_addr = 10'd2;
    read_addr = 10'd1;
    din = 64'd28;

    repeat (5) @(posedge clk);
    $finish;
    end


    initial begin
        //$dumpfile("tb.vcd");
        //$dumpvars;
    end
endmodule