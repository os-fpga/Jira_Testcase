
module tb_rams_sp_wf_rst_en_1024x16;

    reg clk;
    reg we;
    reg en;
    reg rst;
    reg [9:0] addr;
    reg [15:0] di;
    wire [15:0] dout;


    integer mismatch=0;
    reg [6:0]cycle;

    rams_sp_wf_rst_en_1024x16 golden(.*);

    //clock//
    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin
    {we,en, addr, di, cycle, rst} = 0;

    for (integer i = 0; i<1024; i= i+1) golden.RAM[i] = 'b0;

    repeat (1)@(posedge clk);
    rst = 1'b1;
    repeat (1)@(posedge clk);
    rst = 1'b0;
    en = 1'b1;
    //write and reads the previous value (0)
    we = 1'b1;
    addr = 10'd2;
    di = 16'd26;

    //en is 0 so will not write
    repeat (1) @(posedge clk);
    en = 1'b0;
    we = 1'b1;
    addr = 10'd2;
    di = 16'd11;

    //reads the updated value
    repeat (1) @(posedge clk);
    en = 1'b1;
    we = 1'b0;
    addr = 10'd2;

    repeat (5) @(posedge clk);
    $finish;
    end


    initial begin
        //$dumpfile("tb.vcd");
        //$dumpvars;
    end
endmodule
