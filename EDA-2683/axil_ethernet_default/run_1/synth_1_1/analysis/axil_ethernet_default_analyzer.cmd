read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_05_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././axil_ethernet_default/run_1/IPs/rapidsilicon/ip/axil_ethernet/v1_0/axil_ethernet_default/src/ -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/4apr/Validation/RTL_testcases/IP_Catalog_Designs/axi_dma_default/EDA-2683/./axil_ethernet_default/run_1/IPs/rapidsilicon/ip/axil_ethernet/v1_0/axil_ethernet_default/src  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/4apr/Validation/RTL_testcases/IP_Catalog_Designs/axi_dma_default/EDA-2683/./axil_ethernet_default/run_1/IPs/rapidsilicon/ip/axil_ethernet/v1_0/axil_ethernet_default/src/axil_ethernet_default_v1_0.v 

analyze -top axil_ethernet_default
