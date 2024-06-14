module top
(
  input clk,
  input [1:0] din,
  output reg [1:0] dout
);
  
  // This design is simplified version that similar to 
  // https://github.com/os-fpga/Jira_Testcase/tree/main/EDA-2969
  
  localparam FABRIC_CLK_GEN_METHOD = 1;
  reg [1:0] fabric_clk;
  generate
    if (FABRIC_CLK_GEN_METHOD == 0) begin
      // Method 0 generate clock via counter
      // This does not trigger assertion
      always @(posedge clk) begin
        fabric_clk <= fabric_clk + 2'd1;
      end
    end
    else begin
      // Method none-0 generate clock via one-hot circular shifting
      // This trigger assertion
      always @(posedge clk) begin
        if (fabric_clk == 2'd0 || fabric_clk == 2'd3)
          fabric_clk <= 2'd1;
        else begin
          fabric_clk[1] <= fabric_clk[0];
          fabric_clk[0] <= fabric_clk[1];
        end
      end
    end
  endgenerate
  genvar i;
  generate
    for (i = 0; i < 2; i++) begin
      // Use generated fabric data as clock
      always @(posedge fabric_clk[i]) begin
        dout[i] <= din[i];
      end
    end
  endgenerate 
endmodule
