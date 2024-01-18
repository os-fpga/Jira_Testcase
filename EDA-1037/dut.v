
module dut  (input [2:0]a,b,
              input rstn,
              input clock0,
              output reg [5:0] q);
 
  always @ (posedge clock0 or negedge rstn) 
      begin
       if (!rstn)
          q <= 0;
       else
          q <= a*b;
      end    
endmodule
 
