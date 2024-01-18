read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/09_19_2023_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/Benchmarking_QoR_testcases/mkDelayWorker32B/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/Benchmarking_QoR_testcases/mkDelayWorker32B/results_dir/.././rtl/mkDelayWorker32B.v 

analyze -top mkDelayWorker32B
