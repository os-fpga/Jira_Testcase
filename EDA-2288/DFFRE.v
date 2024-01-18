module DFFRE (
  input D, // Data Input
  input R, // Active-low, asynchronous reset
  input E, // Active-high enable
  input C, // Clock
  output reg Q=0 // Data Output
);

  always @(posedge C, negedge R)
    if (!R)
      Q <= 1'b0;
    else if (E)
      Q <= D;
      

endmodule 
 
