read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/11_10_2023_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
verilog_defines 
read_verilog -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/IP_Catalog_Designs/axi_cdma_default/./axi_cdma_wrapper/axi_cdma_wrapper.IPs/rapidsilicon/ip/axi_cdma/v1_0/axi_cdma_wrapper/src ../../../.././axi_cdma_wrapper/axi_cdma_wrapper.IPs/rapidsilicon/ip/axi_cdma/v1_0/axi_cdma_wrapper/src/axi_cdma.v
read_verilog  -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/IP_Catalog_Designs/axi_cdma_default/./axi_cdma_wrapper/axi_cdma_wrapper.IPs/rapidsilicon/ip/axi_cdma/v1_0/axi_cdma_wrapper/src  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/IP_Catalog_Designs/axi_cdma_default/./axi_cdma_wrapper/axi_cdma_wrapper.IPs/rapidsilicon/ip/axi_cdma/v1_0/axi_cdma_wrapper/src/axi_cdma_wrapper.v 

analyze -top axi_cdma_wrapper
