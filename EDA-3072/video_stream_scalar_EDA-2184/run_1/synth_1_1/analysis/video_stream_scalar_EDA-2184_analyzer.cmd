read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/07_19_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/jira_testcases/video_stream_scaler_EDA-2184/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/jira_testcases/video_stream_scaler_EDA-2184/results_dir/.././rtl/scaler.v 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/jira_testcases/video_stream_scaler_EDA-2184/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/jira_testcases/video_stream_scaler_EDA-2184/results_dir/.././rtl/scaler_sr_top.v 

analyze -top streamScaler_sr_top
