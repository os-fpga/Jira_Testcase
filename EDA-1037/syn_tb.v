module syn_tb(input logic rstn,
              input logic clk, 
              output logic [5:0] rtl_q); 

  logic [2:0]a,b;
  integer state = 0;
   logic clock0;
   assign clock0 = clk;
   logic [5:0] q;
   assign rtl_q=q;
  // Stimulus + Model Checking
   always @ (negedge clk) begin
      if (state==0) begin       
         a <= 2;
         b <= 2;
	 state <= state+1; 
     end
      else if (state==1) begin
          a <= 4;
         b <= 2;
         state <= state+1; 	 
      end
      else if (state==2) begin
          a <= 4;
         b <= 4;
         state <= state+1;
      end
      else if (state==3) begin
	  a <= 6;
         b <= 2;
	 state <= state+1; 
      end 
      else if (state==4) begin
	  a <= 4;
         b <= 10;
	 state <= state+1; 
      end
      else if (state==5) begin
	  a <= 40;
         b <= 20;
	 state <= state+1; 
      end
      else if (state==6) begin
	  a <= 4;
         b <= 2;
	 state <= state+1; 
      end
      else if (state==7) begin
	  a <= 4;
         b <= 2;
	 state <= state+1; 
      end
      else if (state==8) begin
	  a <= 0;
         b <= 2;
	 state <= state+1; 
      end  
      $display("a = %0d,b = %0d, q = %0d", a,b, rtl_q);

   end

   dut rtl_model(.*);

 
endmodule
