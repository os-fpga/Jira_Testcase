module iverilog_dump();
initial begin
    $dumpfile("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/4apr/Validation/RTL_testcases/IP_Catalog_Designs/axi_dma_default/EDA-2682/axi_dma_default/run_1/IPs/simulation/rapidsilicon/ip/axi_dma/v1_0/axi_dma_default/axi_dma_default.fst");
    $dumpvars(0, axi_dma_default);
end
endmodule
