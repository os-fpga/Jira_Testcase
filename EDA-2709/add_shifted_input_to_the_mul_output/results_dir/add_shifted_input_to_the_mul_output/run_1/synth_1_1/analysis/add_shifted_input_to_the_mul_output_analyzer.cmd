read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_12_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/15Apr/EDA-2709/add_shifted_input_to_the_mul_output/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/15Apr/EDA-2709/add_shifted_input_to_the_mul_output/results_dir/.././rtl/add_shifted_input_to_the_mul_output.v 

analyze -top add_shifted_input_to_the_mul_output
