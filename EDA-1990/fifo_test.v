`timescale 1ns / 1ps

module fifo_test;
localparam DEPTH = 1024;
localparam WIDTH = 36;
reg [35:0] din, a;
wire [35:0] dout;
wire empty, full, overflow, underflow, almost_empty, almost_full, prog_empty, prog_full;
reg clk, rst, rden, wren;
integer mismatch = 0; integer i = 0;
reg [WIDTH - 1:0] mem [0:DEPTH];
FIFO36K FIFO36K(
    .WR_DATA(din),
    .RD_DATA(dout),
    .EMPTY(empty),                  
    .FULL(full),                   
    .OVERFLOW(overflow),               
    .UNDERFLOW(underflow),              
    .RDEN(rden),                   
    .WREN(wren),                   
    .ALMOST_EMPTY(almost_empty),           
    .ALMOST_FULL(almost_full),            
    .PROG_EMPTY(prog_empty),             
    .PROG_FULL(prog_full),              
    .WRCLK(clk),                  
    .RDCLK(clk),                  
    .RESET(rst)                   
);

initial begin
    rst = 1'b1;
    rden = 1'b0;
    # 20;
    rst = 1'b0;
end

initial begin
    clk = 1'b1;
    forever #5 clk = ~clk;
end

initial begin
    # 20;
    repeat (1) @ (posedge clk);
    wren = 1'b1;
    for (i=1; i<=DEPTH+1; i=i+1) begin
        din <= i;
        mem [i] <= i;
        repeat (1) @ (posedge clk);
    end

    repeat (1) @ (posedge clk);
    wren = 1'b0;
    rden = 1'b1;
    for (integer i=1; i<=DEPTH+1; i=i+1) begin
        repeat (1) @ (posedge clk);
        if (dout !== mem [i]) begin
            $display("DOUT mismatch. din: %0d, dout: %0d, Entry No.: %0d", mem[i], dout, i);
            mismatch = mismatch+1;
        end
    end
    rden = 1'b0;
    wren = 1'b1;
    for (i=1; i<=DEPTH+1; i=i+1) begin
        din <= i;
        mem [i] <= i;
        repeat (1) @ (posedge clk);
    end
    repeat (1) @ (posedge clk);
    wren = 1'b0;
    rden = 1'b1;
    for (integer i=1; i<=DEPTH+1; i=i+1) begin
        repeat (1) @ (posedge clk);
        if (dout !== mem [i]) begin
            $display("DOUT mismatch. din: %0d, dout: %0d, Entry No.: %0d", mem[i], dout, i);
            mismatch = mismatch+1;
        end
    end
    rden = 1'b0;

    if(mismatch == 0)
        $display("\n**** All Comparison Matched ****\n**** Simulation Passed ****");
    else
        $display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
end

initial begin
    $dumpfile("fifo.vcd");
    $dumpvars;
    #600000;
    $finish;
end
endmodule