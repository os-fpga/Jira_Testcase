read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/07_14_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/ram_style_attributes_logic/ram_true_dp_dc_512x32_logic/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/ram_style_attributes_logic/ram_true_dp_dc_512x32_logic/results_dir/.././rtl/ram_true_dp_dc_512x32_logic.v 

analyze -top ram_true_dp_dc_512x32_logic
