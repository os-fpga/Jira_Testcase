// `timescale 1ns / 1ps

module design67_15_45_tb #(parameter WIDTH=32, CHANNEL=15); 
    reg clock,reset;
	reg [WIDTH-1:0] inpt;
	wire [WIDTH-1:0] outpt;
    
    design67_15_45_top #(.WIDTH(WIDTH),.CHANNEL(CHANNEL)) dut (.clk(clock),.rst(reset),.in(inpt),.out(outpt));

    initial begin
        clock=0;
        forever #1 clock=~clock;
    end

    initial begin
        reset = 1'b1;
        #10
        reset = 1'b0;
    end
    
    initial begin
        inpt = 32'habcdefab;
        #100
        inpt = 32'h12345678;
        #50
        reset = 1'b1;
        inpt = 32'habcdefab;
        #10
        reset = 1'b0;
        inpt = 32'haaaaaaaa;
        #230
        reset = 1'b1;
        #10
        reset = 1'b0;
        #400
        reset = 1'b1;
        #10
        reset = 1'b0;
        #210
        $finish;
    end
    
    //$finish
    initial
    begin
        $dumpfile("waveform.vcd");
        //$dumpvars;
    end

endmodule
