

module simple_design                     
(
  input  wire i_clk,     
  input  wire [1:0] i_data,   
  output reg [1:0] o_data,    
  output wire o_clk     
);
// -------------------------------------------------------------------
  // REGISTER DECLARATION
  reg r;    
  reg [1:0] r_data;
// -------------------------------------------------------------------  

always @(posedge i_clk )
  r <= ~r;


 always @(posedge r )
  o_data <= i_data;  
  
assign o_clk  = r;
    
endmodule

