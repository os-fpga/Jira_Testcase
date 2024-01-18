module ram_dsp_mix_random (clk, weA, weB, addrA, addrB, dinA, dinB, doutA, doutB);
    input clk, weA, weB;
    input [9:0] addrA, addrB;
    input [31:0] dinA, dinB;
    output [31:0] doutA, doutB;
    
	wire  [31:0]  doutA_temp,doutB_temp, tempA, tempB;
    reg [9:0] reg_addrA, reg_addrB;
    reg [31:0] ram [1023:0];
    always @(posedge clk)
    begin
        if (weA)
            ram[addrA] <= dinA;
            reg_addrA <= addrA;
        if (weB)
            ram[addrB] <= dinB;
            reg_addrB <= addrB;
    end

    assign doutA_temp = ram[reg_addrA];
    assign doutB_temp = ram[reg_addrB];
	
	assign tempA = doutA_temp * doutB_temp;
	assign tempB = ((doutA_temp/doutB_temp) + dinA) - dinB;

	assign doutA = tempA;
	assign doutB = tempB;
endmodule