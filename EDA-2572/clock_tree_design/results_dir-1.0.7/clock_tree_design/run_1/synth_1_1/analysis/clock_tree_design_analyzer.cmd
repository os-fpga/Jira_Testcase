read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/03_07_2024_11_49_49/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/7march/clock_tree_design/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/7march/clock_tree_design/results_dir/.././rtl/clock_tree_design.v 

analyze -top clock_tree_design
