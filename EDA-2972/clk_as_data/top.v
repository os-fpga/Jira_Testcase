module top
(
  input clk0,
  input clk1,
  output reg [3:0] nibble,
  output reg bit
);

  // This design is simplified version that similar to 
  // https://github.com/os-fpga/Jira_Testcase/tree/main/EDA-2954

  always @(posedge clk0) begin
    nibble <= { nibble[2:0], clk1 }; // Use clock clk1 as data
  end
  
  always @(posedge clk1) begin
    bit <= nibble[3];
  end
  
endmodule
