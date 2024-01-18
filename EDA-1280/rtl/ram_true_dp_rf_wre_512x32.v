module ram_true_dp_rf_wre_512x32 (clk, weA, weB,reA, reB, addrA, addrB, dinA, dinB, doutA, doutB);
    input clk, weA, weB, reA, reB;
    input [8:0] addrA, addrB;
    input [31:0] dinA, dinB;
    output reg [31:0] doutA, doutB;
    
    reg [31:0] ram [511:0];
    always @(posedge clk)
    begin
        if (weA)
            ram[addrA] <= dinA;
        if (reA)
            doutA <= ram[addrA];
    end

    always @(posedge clk)
    begin
        if (weB)
            ram[addrB] <= dinB;
        if (reB)
            doutB <= ram[addrB];
    end

endmodule