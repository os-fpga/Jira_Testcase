read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/11_15_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/io_constraint_testcases/and2/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/io_constraint_testcases/and2/results_dir/.././rtl/and2.v 

analyze -top and2
