`timescale 1ns/1ps 

module Tb;
    reg   clock;
    reg   reset;
    wire uart_out;
    wire int_o;
    initial begin
        reset = 1'b1;
        clock = 1'b0;
        #5;
        reset = 1'b0;
    end
    always  #(2.5)     clock = !clock;

        initial begin
            $dumpfile("tb.vcd");
            $dumpvars;
            #28000;
            $display("SoC Simulation Completed");
            $finish;
        end
    vex_soc soc(.clk(clock),
                .reset(reset),
                .stx_pad_o(uart_out),
                .o_int(int_o));
endmodule