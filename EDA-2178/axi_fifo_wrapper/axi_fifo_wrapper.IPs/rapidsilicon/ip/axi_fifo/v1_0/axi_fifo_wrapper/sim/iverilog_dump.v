module iverilog_dump();
initial begin
    $dumpfile("/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/test3/Compiler_Validation/RTL_testcases/IP_Catalog_Designs/axi_fifo_default/jira/axi_fifo_wrapper/axi_fifo_wrapper.IPs/simulation/rapidsilicon/ip/axi_fifo/v1_0/axi_fifo_wrapper/axi_fifo_wrapper.fst");
    $dumpvars(0, axi_fifo_wrapper);
end
endmodule
