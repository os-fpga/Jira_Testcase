read_verilog -sv /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-3258_VPR_FMAX_DROP/Raptor/build/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/bigkey/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/bigkey/results_dir/.././rtl/bigkey.v 

analyze -top bigkey
