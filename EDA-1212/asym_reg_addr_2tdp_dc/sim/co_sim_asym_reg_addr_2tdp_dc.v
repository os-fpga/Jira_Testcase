module co_sim_asym_reg_addr_2tdp_dc;
    
  // Parameters

  // Ports
 //RAM1
  reg clkA = 0;
  reg  clkB = 0;
  reg  weA = 0;
  reg  weB = 0;
  reg [7:0] addrA;
  reg [7:0]  addrB;
  reg [7:0] dinA;
  reg [7:0]  dinB;
  wire [7:0] doutA;
  wire [7:0]  doutB;
  wire [7:0] doutA_net;
  wire [7:0]  doutB_net;
  //RAM2  
  reg weA1 = 0;
  reg  weB1 = 0;
  reg [9:0] addrA1;
  reg [9:0]  addrB1;
  reg [15:0] dinA1;
  reg [15:0]  dinB1;
  wire [15:0] doutA1;
  wire [15:0]  doutB1;
  wire [15:0] doutA1_net;
  wire [15:0]  doutB1_net;


    integer mismatch=0;
    reg [6:0]cycle, i;

    asym_reg_addr_2tdp_dc golden(
        .clkA (clkA ),
        .clkB ( clkB ),
        .weA ( weA ),
        .weB ( weB ),
        .addrA (addrA ),
        .addrB ( addrB ),
        .dinA (dinA ),
        .dinB ( dinB ),
        .doutA (doutA ),
        .doutB ( doutB ),
        .weA1 (weA1 ),
        .weB1 ( weB1 ),
        .addrA1 (addrA1 ),
        .addrB1 ( addrB1 ),
        .dinA1 (dinA1 ),
        .dinB1 ( dinB1 ),
        .doutA1 (doutA1 ),
        .doutB1  (  doutB1)
    );
  
    asym_reg_addr_2tdp_dc_post_synth netlist( 
        .clkA (clkA ),
        .clkB ( clkB ),
        .weA ( weA ),
        .weB ( weB ),
        .addrA (addrA ),
        .addrB ( addrB ),
        .dinA (dinA ),
        .dinB ( dinB ),
        .doutA (doutA_net ),
        .doutB ( doutB_net ),
        .weA1 (weA1 ),
        .weB1 ( weB1 ),
        .addrA1 (addrA1 ),
        .addrB1 ( addrB1 ),
        .dinA1 (dinA1 ),
        .dinB1 ( dinB1 ),
        .doutA1 (doutA1_net ),
        .doutB1  (  doutB1_net)
    );


     //clock//
    initial begin
        clkA = 1'b0;
        forever #10 clkA = ~clkA;
    end
    initial begin
         clkB = 1'b0;
         forever #10 clkB = ~clkB;
    end

    initial begin

    {weA, weB, addrA, addrB, dinA, dinB,weA1,weB1,addrA1,addrB1,dinA1,dinB1, cycle, i} = 0;
  

    repeat (1) @ (negedge clkA);

//random
    for (integer i=0; i<1023; i=i+1)begin
        repeat (1) @ (negedge clkA)
        addrA <= $urandom_range(0,127); addrB <= $urandom_range(128,255); weA <={$random};  weB <={$random};  dinA<= {$random}; dinB<= {$random};
        addrA1 <= $urandom_range(0,511); addrB1 <= $urandom_range(512,1023); weA1 <={$random};  weB1 <={$random};  dinA1<= {$random}; dinB1<= {$random};
        cycle = cycle +1;
       
        compare(cycle);
    end

    if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
    

    repeat (10) @(negedge clkA); $finish;
    end

    task compare(input integer cycle);begin
    //$display("\n Comparison at cycle %0d", cycle);
     if(doutA !== doutA_net) begin
        $display("doutA mismatch. Golden: %0h, Netlist: %0h, Time: %0t", doutA, doutA_net,$time);
        mismatch = mismatch+1;
    end
    if(doutB !== doutB_net) begin
        $display("doutB mismatch. Golden: %0h, Netlist: %0h, Time: %0t", doutB, doutB_net,$time);
        mismatch = mismatch+1;
    end
    if(doutA1 !== doutA1_net) begin
        $display("doutA1 mismatch. Golden: %0h, Netlist: %0h, Time: %0t", doutA1, doutA1_net,$time);
        mismatch = mismatch+1;
    end
    if(doutB1 !== doutB1_net) begin
        $display("doutB1 mismatch. Golden: %0h, Netlist: %0h, Time: %0t", doutB1, doutB1_net,$time);
        mismatch = mismatch+1;
    end
    end
    endtask


initial begin
    $dumpfile("tb.vcd");
    $dumpvars;
end
endmodule