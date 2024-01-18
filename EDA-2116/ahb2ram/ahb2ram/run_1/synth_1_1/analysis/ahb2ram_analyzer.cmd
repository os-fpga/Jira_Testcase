read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/09_29_2023_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top ahb2ram -I../../../../ -I/nfs_project/gemini/DV/usmanqadir/jira_repo/Jira_Testcase/EDA-2116/ahb2ram  -sv /nfs_project/gemini/DV/usmanqadir/jira_repo/Jira_Testcase/EDA-2116/ahb2ram/ahb2ram.sv \

analyze -top ahb2ram
