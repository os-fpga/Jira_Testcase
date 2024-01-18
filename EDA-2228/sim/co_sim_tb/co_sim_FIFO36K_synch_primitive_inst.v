
module co_sim_FIFO36K_synch_primitive_inst;
  reg rst; // Active high synchronous FIFO reset
  reg clk; // clock
  reg wr_en; // Write enable
  reg rd_en; // Read enable
  reg [35:0] push; // Write data
  wire [35:0] pop; // Read data
  wire empty; // FIFO empty flag
  wire full; // FIFO full flag
  wire almost_empty; // FIFO almost empty flag
  wire almost_full; // FIFO almost full flag
  wire prog_empty; // FIFO programmable empty flag
  wire prog_full; // FIFO programmable full flag
  wire overflow; // FIFO overflow error flag
  wire underflow; // FIFO underflow error flag

reg [35:0] pop_expected;
reg empty_expected;
reg full_expected;
reg almost_empty_expected;
reg almost_full_expected;
reg prog_empty_expected;
reg prog_full_expected;
reg overflow_expected;
reg underflow_expected;

FIFO36K_synch_primitive_inst DUT (.*);
integer mismatch=0,i;


always #10 clk = ~clk;

initial begin
  rst <= 1;
  clk <= 0;
  wr_en <= 0;
  rd_en <= 0;
  push <= 0;
  repeat(5) @ (posedge clk);
  rst <= 0;
  repeat(5) @ (posedge clk);
  for (i = 0 ; i<1000 ; i=i+1) begin
    wr_en <= 1;
    rd_en <= 0;
    push <= $urandom;
    @ (posedge clk);
    compare;
    // $display ("pop = %0d,empty = %0d, full = %0d, almost_full = %0d, prog_empty = %0d, prog_full = %0d,  overflow = %0d, underflow = %0d", pop,empty, full, almost_full, prog_empty, prog_full,  overflow, underflow);
  end
  for (i = 0 ; i<1000 ; i=i+1) begin
    wr_en <= 0;
    rd_en <= 1;
    push <= $urandom;
    @ (posedge clk);
    compare;
    // $display ("pop = %0d,empty = %0d, full = %0d, almost_full = %0d, prog_empty = %0d, prog_full = %0d,  overflow = %0d, underflow = %0d", pop,empty, full, almost_full, prog_empty, prog_full,  overflow, underflow);
  end
  if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
	$finish;
end

RS_TDP36K #(.MODE_BITS(81'b111011011011010001000000000001111111110000000000000000000010000000000111111111000)) rtl_inst (
    .WEN_A1(wr_en),
    .WEN_B1(0),
    .REN_A1(0),
    .REN_B1(rd_en),
    .CLK_A1(clk),
    .CLK_B1(clk),
    .BE_A1(2'b11),
    .BE_B1(2'b11),
    .ADDR_A1(0),
    .ADDR_B1(0),
    .WDATA_A1(push[17:0]),
    .WDATA_B1(0),
    .RDATA_A1({empty_expected,almost_empty_expected,prog_empty_expected,underflow_expected,full_expected,almost_full_expected,prog_full_expected,overflow_expected}),
    .RDATA_B1(pop_expected[17:0]),
    .FLUSH1(rst),
    .WEN_A2(0),
    .WEN_B2(0),
    .REN_A2(0),
    .REN_B2(0),
    .CLK_A2(clk),
    .CLK_B2(clk),
    .BE_A2(0),
    .BE_B2(0),
    .ADDR_A2(0),
    .ADDR_B2(0),
    .WDATA_A2(push[35:18]),
    .WDATA_B2(0),
    .RDATA_A2(),
    .RDATA_B2(pop_expected[35:18]),
    .FLUSH2(0));

task compare;
 	
  	if(pop !== pop_expected) begin
    	$display("Data Mismatch. Expected Out : %0b, Netlist: %0b, Time: %0t", pop_expected, pop, $time);
    	mismatch = mismatch+1;
 	end
  	else
  		$display("Data Matched. Expected Out : %0b, Netlist: %0b, Time: %0t", pop_expected ,pop, $time);

endtask

initial begin
    $dumpfile("tb.vcd");
    $dumpvars;
end
endmodule
