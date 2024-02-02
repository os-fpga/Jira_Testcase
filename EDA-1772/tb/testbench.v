`timescale 1ns/1ps 

module Tb;
    reg   clock;
    wire uart_out;
    reg   reset;
    wire data_valid;
    wire [31:0] RAM2_data;
    reg [31:0] memory[63:0];
    integer mismatch = 0;
    initial begin
        $readmemh("rtl/data_file.hex", memory);
        reset = 1'b1;
        clock = 1'b0;
        #5;
        reset = 1'b0;
    end
    initial begin
         @ (posedge data_valid);
         repeat (1) @ (posedge clock);
        for (integer i=0; i<64; i=i+1) begin
            repeat (1) @ (posedge clock);
            if (RAM2_data !== memory [i]) begin
                $display("Data mismatch. memory: %0d, RAM2_data: %0d, Entry No.: %0d", memory[i], RAM2_data, i);
                mismatch = mismatch+1;
            end else begin
                $display("Data matched");
            end
        end

        if(mismatch == 0)
            $display("\n**** All Comparison Matched ****\n**** Simulation Passed ****");
        else
            $display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
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
                .srx_pad_i(RAM2_data[0]),
                .axi4_m02_axi_wdata(RAM2_data),
                .axi4_m02_axi_wvalid(data_valid)
                );
endmodule
