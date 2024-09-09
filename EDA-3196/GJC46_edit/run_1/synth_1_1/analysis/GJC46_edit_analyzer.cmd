read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./rtl/GJC46_edit.v 

analyze -top GJC46_edit
