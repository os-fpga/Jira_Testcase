
module co_sim_ram_simple_dp_dc_512x32;

     reg  [31:0] din;
    reg  [8:0] read_addr, write_addr;       // two addresses
    reg  we, read_clock, write_clock; // two clocks
    wire [31:0] dout, dout_net;

    integer mismatch=0;
    reg [6:0]cycle, i;

    ram_simple_dp_dc_512x32 golden(.*);
    ram_simple_dp_dc_512x32_post_route netlist( din[0] ,
    din[1] ,
    din[2] ,
    din[3] ,
    din[4] ,
    din[5] ,
    din[6] ,
    din[7] ,
    din[8] ,
    din[9] ,
    din[10] ,
    din[11] ,
    din[12] ,
    din[13] ,
    din[14] ,
    din[15] ,
    din[16] ,
    din[17] ,
    din[18] ,
    din[19] ,
    din[20] ,
    din[21] ,
    din[22] ,
    din[23] ,
    din[24] ,
    din[25] ,
    din[26] ,
    din[27] ,
    din[28] ,
    din[29] ,
    din[30] ,
    din[31] ,
    read_addr[0] ,
    read_addr[1] ,
    read_addr[2] ,
    read_addr[3] ,
    read_addr[4] ,
    read_addr[5] ,
    read_addr[6] ,
    read_addr[7] ,
    read_addr[8] ,
    write_addr[0] ,
    write_addr[1] ,
    write_addr[2] ,
    write_addr[3] ,
    write_addr[4] ,
    write_addr[5] ,
    write_addr[6] ,
    write_addr[7] ,
    write_addr[8] ,
    we ,
    read_clock ,
    write_clock ,
    dout_net[0] ,
    dout_net[1] ,
    dout_net[2] ,
    dout_net[3] ,
    dout_net[4] ,
    dout_net[5] ,
    dout_net[6] ,
    dout_net[7] ,
    dout_net[8] ,
    dout_net[9] ,
    dout_net[10] ,
    dout_net[11] ,
    dout_net[12] ,
    dout_net[13] ,
    dout_net[14] ,
    dout_net[15] ,
    dout_net[16] ,
    dout_net[17] ,
    dout_net[18] ,
    dout_net[19] ,
    dout_net[20] ,
    dout_net[21] ,
    dout_net[22] ,
    dout_net[23] ,
    dout_net[24] ,
    dout_net[25] ,
    dout_net[26] ,
    dout_net[27] ,
    dout_net[28] ,
    dout_net[30] ,
    dout_net[31] );


    //clock//
    initial begin
        read_clock = 1'b0;
        forever #10 read_clock = ~read_clock;
    end
    initial begin
        write_clock = 1'b0;
        forever #5 write_clock = ~write_clock;
    end
    initial begin
        for(integer i = 0; i<513; i=i+1) begin 
            golden.ram[i] ='b0;
        end 
    end
    initial begin
    {we, read_addr, write_addr, din, cycle, i} = 0;

    repeat (1) @ (negedge write_clock);
    //write 
    for (integer i=0; i<512; i=i+1)begin
        repeat (1) @ (negedge write_clock)
        read_addr <= $urandom_range(0,255); write_addr <= $urandom_range(256,511); we <=1'b1; din<= i;
        cycle = cycle +1;
        
        compare(cycle);

    end

    //reading 
    for (integer i=0; i<512; i=i+1)begin
        repeat (1) @ (negedge read_clock)
        read_addr <= $urandom_range(0,255); write_addr <= $urandom_range(256,511); we <=0;
        cycle = cycle +1;
        
        compare(cycle);

    end

    //writes
    for (integer i=0; i<512; i=i+1)begin
        repeat (1) @ (negedge read_clock)
        read_addr <= $urandom_range(0,255); write_addr <= $urandom_range(256,511); we <=1'b1; din<= 'h25;
        cycle = cycle +1;
        
        compare(cycle);

    end
//reading 
    for (integer i=0; i<512; i=i+1)begin
        repeat (1) @ (negedge read_clock)
        read_addr <= $urandom_range(0,255); write_addr <= $urandom_range(256,511); we <=$random; din<=$random;
        cycle = cycle +1;
        
        compare(cycle);

    end

     for (integer i=0; i<512; i=i+1)begin
        repeat (1) @ (negedge read_clock)
        read_addr <= $urandom_range(256,511); write_addr <= $urandom_range(0,255); we <=$random; din<=$random;
        cycle = cycle +1;
        
        compare(cycle);

    end

    if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
    

    repeat (10) @(negedge read_clock); $finish;
    end

    task compare(input integer cycle);
    //$display("\n Comparison at cycle %0d", cycle);
    if(dout !== dout_net) begin
        $display("dout mismatch. Golden: %0h, Netlist: %0h, Time: %0t", dout, dout_net,$time);
        mismatch = mismatch+1;
    end
    
    endtask


initial begin
    $dumpfile("tb.vcd");
    $dumpvars;
end
endmodule