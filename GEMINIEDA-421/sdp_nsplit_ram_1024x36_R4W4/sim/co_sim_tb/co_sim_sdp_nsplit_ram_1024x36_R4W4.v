
module co_sim_sdp_nsplit_ram_1024x36_R4W4;
  reg clk, we;
  reg [9:0] wr_addr, rd_addr;
  reg [35:0] din;
  wire [35:0] dout, dout_net;

    integer mismatch=0;
    reg [6:0]cycle, i;

    sdp_nsplit_ram_1024x36_R4W4 golden(.*);
    sdp_nsplit_ram_1024x36_R4W4_post_synth netlist(.*, .dout(dout_net));


    
    always #10 clk = ~clk;

    initial begin
    {clk, we, rd_addr, wr_addr, din, cycle, i} = 0;



    repeat (1) @ (posedge clk);
    wr_addr <= 10'h1; we <=1'b1; din<= 36'b1111;
    compare(cycle);

repeat (5) @ (posedge clk);
    rd_addr <= 10'h1;  we <=0;
     compare(cycle);

    for (integer i=0; i<512; i=i+1)begin
        repeat (1) @ (posedge clk)
        rd_addr <= i; wr_addr <= i; we <=1'b1; din<= $random;
        cycle = cycle +1;
        #1;
        compare(cycle);

    end

    for (integer i=0; i<512; i=i+1)begin
        repeat (1) @ (posedge clk)
        rd_addr <= i; wr_addr <= i; we <=0;
        cycle = cycle +1;
        #1;
        compare(cycle);

    end


    if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nError: Simulation Failed", mismatch);
    

    repeat (10) @(posedge clk); $finish;
    end

    task compare(input integer cycle);
    //$display("\n Comparison at cycle %0d", cycle);
    if(dout !== dout_net)  begin
        $display("dout mismatch. Golden: %0b, Netlist: %0b, rd_addr: %0b , wr_addr: %0b , Time: %0t", dout, dout_net,rd_addr,wr_addr,$time);
        mismatch = mismatch+1; end
    else if (dout === dout_net)
       $display("Golden: %0b, Netlist: %0b,  rd_addr: %0b , wr_addr: %0b ,Time: %0t", dout, dout_net,rd_addr,wr_addr,$time);
  
   
    
    endtask


    initial begin
        $dumpfile("tb.vcd");
        $dumpvars;
    end
endmodule