read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/10_28_2023_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/Memory_Designs/ram_true_dp_wf_1024x32/EDA-2177/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/Memory_Designs/ram_true_dp_wf_1024x32/EDA-2177/./rtl/ram_true_dp_wf_1024x32.v 

analyze -top ram_true_dp_wf_1024x32
