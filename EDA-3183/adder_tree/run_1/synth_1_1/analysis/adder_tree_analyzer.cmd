read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/08_31_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top adder_tree -y ../../../.././rtl -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os-fpga/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adder_tree/jira/./rtl +libext+.v+.sv -sv /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os-fpga/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adder_tree/jira/./rtl/adder_tree.sv \

analyze -top adder_tree
