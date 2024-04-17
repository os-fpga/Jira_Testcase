read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_12_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/16apr/EDA-2713/b_registered_input_to_output_new_primitive/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/16apr/EDA-2713/b_registered_input_to_output_new_primitive/results_dir/.././rtl/b_registered_input_to_output_new_primitive.v 

analyze -top b_registered_input_to_output_new_primitive
