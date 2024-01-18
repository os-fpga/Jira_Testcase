module ram_true_dp_wf_1024x32 (
    input CLK_A, CLK_B, weA, weB, REN_A, REN_B,
    input [9:0] addrA, addrB,
    input [31:0] dinA, dinB,
    output reg [31:0] doutA, doutB);
    
    reg [31:0] memory [1023:0];
  always @(posedge CLK_A)
    begin
        
        if (weA) begin
            memory[addrA] <= dinA;
        end
        if(REN_A)
            if (weA)
                doutA = dinA;
            else
                doutA = memory[addrA];
    end
  always @(posedge CLK_B)
    begin
        if (weB) begin
            memory[addrB] <= dinB;
        end
        if(REN_B)
            if (weB)
                doutB = dinB;
            else
                doutB = memory[addrB];
            
    end

endmodule