module co_sim_aysm_addr_reg_tdp_dc;
    
  // Parameters
localparam  WIDTHB = 4;
localparam  SIZEB = 1024;
localparam  ADDRWIDTHB = 10;
localparam  WIDTHA = 16;
localparam  SIZEA = 256;
localparam  ADDRWIDTHA = 8;

// Ports
reg clkA = 0;
reg clkB = 0;
reg weA = 0;
reg  weB = 0;
//reg enaA = 0;
//reg  enaB = 0;
reg [ADDRWIDTHA-1:0] addrA;
reg [ADDRWIDTHB-1:0] addrB;
reg [WIDTHA-1:0] diA;
reg [WIDTHB-1:0] diB;
wire [WIDTHA-1:0] doA,doA_net;
wire [WIDTHB-1:0] doB,doB_net;

    integer mismatch=0;
    reg [6:0]cycle, i;

    aysm_addr_reg_tdp_dc golden(
      .clkA (clkA ),
      .clkB (clkB ),
      .weA (weA ),
      .weB ( weB ),
      //.enaA (enaA ),
      //.enaB ( enaB ),
      .addrA (addrA ),
      .addrB (addrB ),
      .diA (diA ),
      .diB (diB ),
      .doA (doA ),
      .doB  ( doB)
    );
  
    aysm_addr_reg_tdp_dc_post_synth netlist( 
    .clkA (clkA ),
    .clkB (clkB ),
    .weA (weA ),
    .weB ( weB ),
    //.enaA (enaA ),
    //.enaB ( enaB ),
    .addrA (addrA ),
    .addrB (addrB ),
    .diA (diA ),
    .diB (diB ),
    .doA(doA_net), .doB(doB_net)
    );


     //clock//
    initial begin
        clkA = 1'b0;
        forever #5 clkA = ~clkA;
    end
    initial begin
        clkB = 1'b0;
        forever #10 clkB = ~clkB;
    end

    initial begin

    {weA, weB, addrA, addrB, diA, diB, cycle, i} = 0;
  

    //repeat (1) @ (negedge clkA);
    

    repeat (1) @ (negedge clkA);

    //reading and writing
    for (integer i=0; i<1024; i=i+1)begin
        repeat (1) @ (negedge clkA)
        addrA <= $urandom_range(0,255); addrB <= $urandom_range(0,1023); weA <=1'b1; weB <=1'b0; diA<= {$random}; diB<= {$random};
        cycle = cycle +1;
     
        compare(cycle);

    end


//random
    for (integer i=0; i<1024; i=i+1)begin
        repeat (1) @ (negedge clkA)
        addrA <= $urandom_range(0,255); addrB <= $urandom_range(0,1023); weA <={$random};  weB <={$random};  diA<= {$random}; diB<= {$random};
        cycle = cycle +1;
       
        compare(cycle);
    end

    if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
    

    repeat (1) @(negedge clkA); $finish;
    end

    task compare(input integer cycle);begin
    //$display("\n Comparison at cycle %0d", cycle);
     if(doA !== doA_net) begin
        $display("doA mismatch. Golden: %0h, Netlist: %0h, Time: %0t", doA, doA_net,$time);
        mismatch = mismatch+1;
    end
    if(doB !== doB_net) begin
        $display("doB mismatch. Golden: %0h, Netlist: %0h, Time: %0t", doB, doB_net,$time);
        mismatch = mismatch+1;
    end
end
    endtask


initial begin
    $dumpfile("tb.vcd");
    $dumpvars;
end
endmodule