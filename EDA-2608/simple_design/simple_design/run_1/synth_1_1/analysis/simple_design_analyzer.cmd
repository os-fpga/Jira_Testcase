read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/03_20_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/19-march/Validation/RTL_testcases/DSP_new_designs/filt_ppd/Jira_Testcase/EDA-2608/filt_ppd/simple_design/.  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/19-march/Validation/RTL_testcases/DSP_new_designs/filt_ppd/Jira_Testcase/EDA-2608/filt_ppd/simple_design/./simple_design.v 

analyze -top simple_design
