
module tb_rams_sp_reg_addr_1024x32;

reg clk;
reg we;
reg [9:0] addr;
reg [31:0] di;
wire [31:0] dout;


    integer mismatch=0;
    reg [6:0]cycle;

    rams_sp_reg_addr_1024x32 golden(.*);

    //clock//
    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin
    {we, addr, di, cycle} = 0;

    for (integer i = 0; i<1024; i= i+1) golden.RAM[i] = 'b0;

    repeat (1)@(posedge clk);
    
    //writes
    we = 1'b1;
    addr = 10'd1;
    di = 32'd26;

    //writes to new address and reads 
    repeat (1) @(posedge clk);
    we = 1'b1;
    addr = 10'd2;
    di = 32'd11;

    //not writing, and reads registered address
    repeat (1) @(posedge clk);
    we = 1'b0;
    addr = 10'd1;

    repeat (5) @(posedge clk);
    $finish;
    end


    initial begin
        $dumpfile("tb.vcd");
        $dumpvars;
    end
endmodule
