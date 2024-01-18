
module co_sim_ram_true_reg_addr_dp_dc_1024x32;

    reg clkA, clkB, weA, weB;
    reg [9:0] addrA, addrB;
    reg [31:0] dinA, dinB;
    wire [31:0] doutA, doutB, doutA_net, doutB_net;

    integer mismatch=0;
    reg [6:0]cycle, i;

    ram_true_reg_addr_dp_dc_1024x32 golden(.*);
    ram_true_reg_addr_dp_dc_1024x32_post_synth netlist(.*, .doutA(doutA_net), .doutB(doutB_net));


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
        
    { weA,weB, addrA,addrB, dinA, dinB, cycle, i} = 0;

  
 
    repeat (1) @ (negedge clkA);
    
    for (integer i=0; i<1024; i=i+1)begin
        repeat (1) @ (negedge clkA)

        addrA <= i; addrB <= {$random} % 1024; weA <=1'b1; weB <=1'b1; dinA<= {$random}; dinB<= {$random};
        cycle = cycle +1;
        #1;
        compare(cycle);
         $display("doutA mismatch. Golden: %0h, Netlist: %0h, Time: %0t", doutA, doutA_net,$time);
        $display("doutB mismatch. Golden: %0h, Netlist: %0h, Time: %0t", doutB, doutB_net,$time);

    end

     for (integer i=0; i<1024; i=i+1)begin
        repeat (1) @ (negedge clkB)
        addrA <= i; addrB <= i; weA <=1'b1; weB <=1'b0; dinA<= {$random}; dinB<= {$random};
        cycle = cycle +1;
        #1;
        compare(cycle);
        
    end

    for (integer i=0; i<1024; i=i+1)begin
        repeat (1) @ (negedge clkB)
        addrA <= i; addrB <= i; weA <=1'b1; weB <=1'b1; dinA<= {$random}; dinB<= {$random};
        cycle = cycle +1;
        #1;
        compare(cycle);
    end

   for (integer i=0; i<1024; i=i+1)begin
        repeat (1) @ (negedge clkA)
        addrA <= i; addrB <= i; weA <=1'b0; weB <=1'b0; dinA<= {$random}; dinB<= {$random};
        cycle = cycle +1;
        #1;
        compare(cycle);
    end
    if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nSimulation Failed", mismatch);
    

    repeat (10) @(negedge clkB); $finish;
    end

    task compare(input integer cycle);
    //$display("\n Comparison at cycle %0d", cycle);
    if(doutA !== doutA_net) begin
        $display("doutA mismatch. Golden: %0h, Netlist: %0h, Time: %0t", doutA, doutA_net,$time);
        mismatch = mismatch+1;
    end

     if(doutB !== doutB_net) begin
        $display("doutB mismatch. Golden: %0h, Netlist: %0h, Time: %0t", doutB, doutB_net,$time);
        mismatch = mismatch+1;
    end
    
    
    endtask


    // initial begin
    //     $dumpfile("tb.vcd");
    //     $dumpvars;
    // end
endmodule