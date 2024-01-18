read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/11_30_2023_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/RS_PRIMITIVES/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_project/gemini/DV/usmanqadir/jira_repo/Jira_Testcase/EDA-2299/rtl  /nfs_project/gemini/DV/usmanqadir/jira_repo/Jira_Testcase/EDA-2299/rtl/ring_counter.v 

analyze -top ring_counter
