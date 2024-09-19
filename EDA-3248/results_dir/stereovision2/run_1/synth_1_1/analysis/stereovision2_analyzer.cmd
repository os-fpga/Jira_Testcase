read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/09_18_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/stereovision2/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/stereovision2/results_dir/.././rtl/stereovision2.v 

analyze -top stereovision2
