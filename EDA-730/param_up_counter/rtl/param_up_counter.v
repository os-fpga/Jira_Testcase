
module param_up_counter #(parameter SIZE=32)(clk_counter, q_counter, rst_counter);

    input clk_counter;
    input rst_counter;
    output reg [SIZE-1:0] q_counter;

    always @ (posedge clk_counter)
    begin
      if(rst_counter)
		    q_counter <= 'b0;
	    else
		    q_counter <= q_counter + 1;
    end

endmodule 
