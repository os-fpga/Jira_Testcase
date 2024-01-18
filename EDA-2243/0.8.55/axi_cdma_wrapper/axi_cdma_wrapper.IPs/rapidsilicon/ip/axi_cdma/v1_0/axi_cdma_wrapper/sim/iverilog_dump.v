module iverilog_dump();
initial begin
    $dumpfile("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/IP_Catalog_Designs/axi_cdma_default/axi_cdma_wrapper/axi_cdma_wrapper.IPs/simulation/rapidsilicon/ip/axi_cdma/v1_0/axi_cdma_wrapper/axi_cdma_wrapper.fst");
    $dumpvars(0, axi_cdma_wrapper);
end
endmodule
