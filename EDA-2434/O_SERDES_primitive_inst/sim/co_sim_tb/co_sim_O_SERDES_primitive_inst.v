`timescale 1ns/1ps

module co_sim_O_SERDES_primitive_inst;

  // Parameters
  localparam DATA_RATE = "SDR";
  localparam WIDTH = 4;

  // Ports
  reg [WIDTH-1:0] D;
  reg RST;
  reg LOAD_WORD;
  reg CLK_IN;
  reg OE_IN;
  wire OE_OUT;
  wire Q;
  reg CHANNEL_BOND_SYNC_IN;
  wire CHANNEL_BOND_SYNC_OUT;
  reg PLL_LOCK;
  reg PLL_CLK;
  reg Expected_out;

  O_SERDES #(
    .DATA_RATE(DATA_RATE),
    .WIDTH(WIDTH)
  )
  O_SERDES_inst (
    .D(D),
    .RST(RST),
    .LOAD_WORD(LOAD_WORD),
    .CLK_IN(CLK_IN),
    .OE_IN(OE_IN),
    .OE_OUT(OE_OUT),
    .Q(Q),
    .CHANNEL_BOND_SYNC_IN(CHANNEL_BOND_SYNC_IN),
    .CHANNEL_BOND_SYNC_OUT(CHANNEL_BOND_SYNC_OUT),
    .PLL_LOCK(PLL_LOCK),
    .PLL_CLK(PLL_CLK)
  );

  integer mismatch = 0;

  always #0.2 PLL_CLK = !PLL_CLK; // 2.5 GHz
  always #0.8 CLK_IN = !CLK_IN;

  initial begin
    CLK_IN = 0;
    PLL_CLK = 0;
    RST = 0;
    CHANNEL_BOND_SYNC_IN = 0;
    LOAD_WORD = 0;
    OE_IN = 0;

    #1; // Add a delay to ensure initial values settle
	@(negedge CLK_IN);
    @(negedge CLK_IN);
    compare();

    RST = 1;
	LOAD_WORD = 1;
    CHANNEL_BOND_SYNC_IN = 1;
    PLL_LOCK = 1;
    D = 4'b0101;
    OE_IN = 1;
	@(negedge CLK_IN);
	@(negedge CLK_IN);
    compare();

	@(negedge CLK_IN);
	LOAD_WORD = 1;
	OE_IN = 1;
	D = $urandom();
	@(negedge CLK_IN);
	@(negedge CLK_IN);
    compare();

    @(negedge CLK_IN);
	LOAD_WORD = 1;
	OE_IN = 1;
	D = $urandom();
	@(negedge CLK_IN);
	@(negedge CLK_IN);
    compare();

    repeat (500) begin
     	@(negedge CLK_IN);
		LOAD_WORD = 1;
		OE_IN = 1;
		D = $urandom();
		@(negedge CLK_IN);
		@(negedge CLK_IN);
    	compare();
    end

    if (mismatch == 0)
      $display("\n**** All Comparisons Matched ***\nSimulation Passed");
    else
      $display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);

    $finish;
  end

  always @(negedge CLK_IN)
    if (!RST)
      Expected_out <= 0;
    else begin
	  if(OE_OUT == 1)
       Expected_out <= {D[3]};
	  else
	    Expected_out <= 0;
		end

  task compare;
    if (Q !== Expected_out) begin
      $display("Data Mismatch. Expected: %0d, Actual: %0d, Time: %0t", Expected_out, Q, $time);
      mismatch = mismatch + 1;
    end
    else
      $display("Data Matched. Expected: %0d, Actual: %0d, Time: %0t", Expected_out, Q, $time);
  endtask

  initial begin
    $dumpfile("waves.vcd");
    $dumpvars;
  end

endmodule