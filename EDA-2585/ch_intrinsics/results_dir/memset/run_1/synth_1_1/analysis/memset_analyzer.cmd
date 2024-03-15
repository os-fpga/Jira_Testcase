read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/03_11_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_project/cxl/DV/bilal_malik/Validation/RTL_testcases/Benchmarking_QoR_testcases/ch_intrinsics/results_dir/.././rtl  /nfs_project/cxl/DV/bilal_malik/Validation/RTL_testcases/Benchmarking_QoR_testcases/ch_intrinsics/results_dir/.././rtl/ch_intrinsics.v 

analyze -top memset
