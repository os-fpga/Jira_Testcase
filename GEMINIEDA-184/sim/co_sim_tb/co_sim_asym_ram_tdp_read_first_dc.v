
module co_sim_asym_ram_tdp_read_first_dc;
    
    parameter WIDTHB = 4;
    parameter SIZEB = 1024;
    parameter ADDRWIDTHB = 10;
    parameter WIDTHA = 16;
    parameter SIZEA = 256;
    parameter ADDRWIDTHA = 8;

    input clkA;
    input clkB;
    input weA, weB;
    input enaA, enaB;
    input [ADDRWIDTHA-1:0] addrA;
    input [ADDRWIDTHB-1:0] addrB;
    input [WIDTHA-1:0] diA;
    input [WIDTHB-1:0] diB;
    output [WIDTHA-1:0] doA, doA_net;
    output [WIDTHB-1:0] doB, doB_net;

    integer mismatch=0;
    reg [6:0]cycle, i;

    asym_ram_tdp_read_first_dc golden(.*);
    asym_ram_tdp_read_first_dc_post_synth netlist(.*, .doA(doA_net), .doB(doB_net));


     //clock//
    initial begin
        clkA = 1'b0;
        forever #10 clkA = ~clkA;
    end
    initial begin
        clkB = 1'b0;
        forever #5 clkB = ~clkB;
    end

    initial begin
    {enaA, enaB, weA, weB, addrA, addrB, diA,, diB, cycle, i} = 0;

    for(integer i = 0; i<1024; i=i+1) begin 
        golden.ram[i] ='b0;
    end    

    repeat (1) @ (posedge clkA);
    enaA = 1'b1;
    enaB = 1'b0;
    //write 
    for (integer i=0; i<1024; i=i+1)begin
        repeat (1) @ (posedge clkA)
        addrA <= i; weA <=1'b1; diA<= $random;
        cycle = cycle +1;
        #1;
        compare(cycle);

    end

    repeat (1) @ (posedge clkA);
    enaB = 1'b1;
    enaA = 1'b0;
    weA =0;
    //reading 
    for (integer i=0; i<1024; i=i+1)begin
        repeat (1) @ (posedge clkB)
        addrB <= i; weB <= 1; diB<= $random;
        cycle = cycle +1;
        #1;
        compare(cycle);

    end

    
    if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nSimulation Failed", mismatch);
    

    repeat (10) @(posedge clk); $finish;
    end

    task compare(input integer cycle);
    //$display("\n Comparison at cycle %0d", cycle);
     if(doA !== doA_net) begin
        $display("doA mismatch. Golden: %0h, Netlist: %0h, Time: %0t", doA, doA_net,$time);
        mismatch = mismatch+1;
    end
    if(doB !== doB_net) begin
        $display("doB mismatch. Golden: %0h, Netlist: %0h, Time: %0t", doB, doB_net,$time);
        mismatch = mismatch+1;
    end
    
    endtask


    initial begin
        $dumpfile("tb.vcd");
        $dumpvars;
    end
endmodule