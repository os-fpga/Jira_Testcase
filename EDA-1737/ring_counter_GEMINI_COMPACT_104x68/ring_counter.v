//-------------------------------------------------------
//  Functionality: An n-bit synchronous left-right shift ring counter 
//  Author:        Azfar
//-------------------------------------------------------
`define REGISTER_WIDTH 280

module ring_counter ( 
  input wire clock0,                  
  input wire reset,
  input wire lr,
  output reg [`REGISTER_WIDTH - 1:0] out
);


  always @(posedge clock0) begin
    if(reset)begin
      out <= {1'b1,{(`REGISTER_WIDTH - 1){1'b0}}};
    end else begin
      if(lr == 1)begin // left shift
        out[0]                    <= out[`REGISTER_WIDTH - 1];
        out[`REGISTER_WIDTH - 1:1] <= out[`REGISTER_WIDTH - 2:0];
      end else if (lr == 0) begin // right shift
        out[`REGISTER_WIDTH - 1]   <= out[0];
        out[`REGISTER_WIDTH - 2:0] <= out[`REGISTER_WIDTH - 1:1];
      end else begin
        out <= out;
      end
    end
  end
      
       
  
endmodule  