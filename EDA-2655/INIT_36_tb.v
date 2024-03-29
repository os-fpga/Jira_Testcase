
`timescale 1ns/1ps

module INIT_36_tb;

  //Ports
  reg  clk = 1'b0;
  reg  REN_A;
  reg  REN_B;
  reg  [9:0] address_A;
  reg  [9:0] address_B;
  wire [35:0] dout_A, dout_net_A;
  wire [35:0] dout_B, dout_net_B;

  INIT_36 INIT_36_inst (
    .clk(clk),
    .REN_A(REN_A),
    .REN_B(REN_B),
    .address_A(address_A),
    .address_B(address_B),
    .dout_A(dout_A),
    .dout_B(dout_B)
  );

  INIT_36_Post_Synth INIT_36_Post_Synth_inst (
    .clk(clk),
    .REN_A(REN_A),
    .REN_B(REN_B),
    .address_A(address_A),
    .address_B(address_B),
    .dout_A(dout_net_A),
    .dout_B(dout_net_B)
  );

always #10  clk = ~clk ;

integer i;
integer mismatch=0;
reg [6:0]cycle;

initial begin
  {REN_A, REN_B, address_A, address_B, clk} = 0;
  #100

  for (i = 0; i < 1024; i = i+1) begin
    repeat (1) @ (posedge clk)
    REN_A = 1'b1;
    address_A = i;
    cycle = cycle +1;
    compare(cycle);
  end

  for (i = 0; i < 1024; i = i+1) begin
    repeat (1) @ (posedge clk)
    REN_B = 1'b1;
    address_B = i;
    cycle = cycle +1;
    compare(cycle);
  end

  if(mismatch == 0)
      $display("\n**** All Comparison Matched ***\nSimulation Passed");
  else
      $display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);

  repeat (10) @(posedge clk); 
    $finish;
end

task compare(input integer cycle);
    if(dout_A !== dout_net_A) begin
        $display("Port A Mismatch !!! RTL: %0h, Netlist: %0h, Time: %0t", dout_A, dout_net_A, $time);
        mismatch = mismatch+1;
    end

    if(dout_B !== dout_net_B) begin
      $display("Port B Mismatch !!! RTL: %0h, Netlist: %0h, Time: %0t", dout_B, dout_net_B, $time);
      mismatch = mismatch+1;
  end
    endtask


initial begin
  $dumpfile("wave.vcd");
  $dumpvars;
end

endmodule