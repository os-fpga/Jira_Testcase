module ram_true_dp_1024x32 (clk, weA, weB, addrA, addrB, dinA, dinB, doutA, doutB);
    input clk, weA, weB;
    input [9:0] addrA, addrB;
    input [31:0] dinA, dinB;
    output reg [31:0] doutA, doutB;
    
    reg [31:0] ram [1023:0];
    always @(posedge clk)
    begin
        if (weA)
            ram[addrA] <= dinA;
        if (weB)
            ram[addrB] <= dinB;

        doutA <= ram[addrA];
        doutB <= ram[addrB];
    end
endmodule