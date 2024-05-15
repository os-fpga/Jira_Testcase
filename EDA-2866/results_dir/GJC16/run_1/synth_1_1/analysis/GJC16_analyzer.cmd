read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/05_15_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/15may/Validation/RTL_testcases/GJC-IO-Testcases/GJC16/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/15may/Validation/RTL_testcases/GJC-IO-Testcases/GJC16/results_dir/.././rtl/GJC16.v 

analyze -top GJC16
