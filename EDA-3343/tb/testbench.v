`timescale 1ns/1ps 

module Tb;
    reg   clock;
    reg   reset;
    initial begin
        reset = 1'b1;
        clock = 1'b0;
        #5;
        reset = 1'b0;
    end
    always  #(2.5)     clock = !clock;

        initial begin
            $dumpfile("/nfs_scratch/scratch/CGA/repo/2024-11-30-22-25-48_T12694R122/Validation/RTL_testcases/litex_designs/vexriscv_axi_cdma/results_dir/tb_post.vcd");
            $dumpvars;
            #28000;
            $display("SoC Simulation Completed");
            $finish;
        end
    vex_soc soc(.clk(clock),
                .reset(reset));
endmodule