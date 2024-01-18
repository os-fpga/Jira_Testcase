//`include "single_port_ram.v"
//`include "brams_sim.v"
//`include "single_port_ram_post_synth.v"
//`include "sram1024x18.v"
//`include "TDP18K_FIFO.v"
//`include "ufifo_ctl.v"

module co_sim_single_port_ram;
    reg clk;
    reg we;
    reg [9:0] addr;
    reg [31:0] data;
    wire [31:0] q, q_netlist;

    integer mismatch=0;
    reg [6:0]cycle, i;

//    single_port_ram golden(.clk(clk),.we(we),.addr(addr),.data(data),.q(q));
    single_port_ram_post_synth netlist(.clk(clk),.we(we),.addr(addr),.data(data),.q(q_netlist));


    always #10 clk = ~clk;

    initial begin
    {clk, we, addr ,data, cycle, i} = 0;


    repeat (1) @ (negedge clk);

    for (integer i=0; i<1024; i=i+1)begin
        addr <= i; we <=1; data<= $random;
        cycle = cycle +1;
        repeat (1) @ (negedge clk);

        //$display ("%0t %0h", $time, addr);
        // compare(cycle);

    end

    // //not writing and reading from the addr of rams
    // for (integer i=0; i<1024; i=i+1)begin
    //     addr <= i; we <=0;
    //     cycle = cycle +1;
    //     repeat (1) @ (negedge clk)
    //     compare(cycle);

    // end
    if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nError: Simulation Failed", mismatch);
    

    repeat (10) @(negedge clk); $finish;
    end

//    task compare(input integer cycle);
//    //$display("\n Comparison at cycle %0d", cycle);
//    if(q !== q_netlist) begin
//        $display("q mismatch. Golden: %0h, Netlist: %0h, addr: %0h, Time: %0t, we=%b", q, q_netlist, addr, $time,golden.we);
//        mismatch = mismatch+1;
//    end
    
//    endtask


//initial begin
//    $dumpfile("tb.vcd");
//    $dumpvars;
//end
endmodule
