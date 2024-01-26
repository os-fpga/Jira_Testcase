`timescale 1ns/1ns

module tb_TDP_RAM36K;

  // Parameters
  parameter WRITE_WIDTH = 36;
  parameter READ_WIDTH = WRITE_WIDTH;

  // Signals
  reg WEN_A, WEN_B, REN_A, REN_B;
  reg CLK_A, CLK_B;
  reg [3:0] BE_A, BE_B;
  reg [14:0] ADDR_A, ADDR_B;
  reg [31:0] WDATA_A, WDATA_B;
  reg [3:0] WPARITY_A, WPARITY_B;
  wire [31:0] RDATA_A, RDATA_B;
  wire [3:0] RPARITY_A, RPARITY_B;

  // Instantiate the dual-port RAM module
  TDP_RAM36K #(
    .WRITE_WIDTH_A(WRITE_WIDTH),
    .READ_WIDTH_A(READ_WIDTH),
    .WRITE_WIDTH_B(WRITE_WIDTH),
    .READ_WIDTH_B(READ_WIDTH)
  ) uut (
    .WEN_A(WEN_A),
    .WEN_B(WEN_B),
    .REN_A(REN_A),
    .REN_B(REN_B),
    .CLK_A(CLK_A),
    .CLK_B(CLK_B),
    .BE_A(BE_A),
    .BE_B(BE_B),
    .ADDR_A(ADDR_A),
    .ADDR_B(ADDR_B),
    .WDATA_A(WDATA_A),
    .WPARITY_A(WPARITY_A),
    .WDATA_B(WDATA_B),
    .WPARITY_B(WPARITY_B),
    .RDATA_A(RDATA_A),
    .RPARITY_A(RPARITY_A),
    .RDATA_B(RDATA_B),
    .RPARITY_B(RPARITY_B)
  );

  // Clock generation
  initial begin
    CLK_A = 0;
    CLK_B = 0;
    
  end
  always #5 CLK_A = ~CLK_A;
  always #10 CLK_B = ~CLK_B;
  // Test scenario
  initial begin
    // Initialize signals
    WEN_A = 1;
    REN_A = 0;
    WEN_B = 0;
    REN_B = 0;
    BE_A = 4'b1111;
    BE_B = 4'b1111;
    ADDR_A = 0;
    ADDR_B = 1;
    WDATA_A = 36'h12345678;
    WDATA_B = 36'h00000000;
    WPARITY_A = 4'b1010;
    WPARITY_B = 4'b0000;
    // Display results
    $display("Read data from Port A: %h, Parity: %h", RDATA_A, RPARITY_A);
    $display("Read data from Port B: %h, Parity: %h", RDATA_B, RPARITY_B);

    // Apply stimulus
    @(negedge CLK_A);
    WEN_A = 0;
    REN_A = 1;
    @(negedge CLK_B);
    WEN_B = 0;
    REN_B = 0;

    // Display results
    $display("Read data from Port A: %h, Parity: %h", RDATA_A, RPARITY_A);
    $display("Read data from Port B: %h, Parity: %h", RDATA_B, RPARITY_B);


    // End simulation
     @(negedge CLK_B);
     $finish;
  end

endmodule
 
