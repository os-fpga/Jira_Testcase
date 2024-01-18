module ram_tdp_sync_reg_read_indp_read_1024x18 (clkA, clkB, weA, weB, addrA, addrB, dinA, dinB, doutA, doutB);
    input clkA, clkB, weA, weB;
    input [9:0] addrA, addrB;
    input [17:0] dinA, dinB;
    output reg [17:0] doutA, doutB;

    reg [9:0] reg_addrA, reg_addrB;
    reg [17:0] ram [1023:0];
    
    always @(posedge clkA)
    begin
        reg_addrA <= addrA;
        if (weA)
            ram[addrA] <= dinA;
  
        doutA <= ram[reg_addrA];
    end


    always @(posedge clkB)
    begin
        reg_addrB <= addrB;
        if (weB)
            ram[addrB] <= dinB;
        
        doutB <= ram[reg_addrB];
          
    end
    

endmodule