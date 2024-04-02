read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_02_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/input_to_adder_and_mul_A_input_wrt_feedback_i/EDA-2640/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/input_to_adder_and_mul_A_input_wrt_feedback_i/EDA-2640/./rtl/input_to_adder_and_mul_A_input_wrt_feedback_i.v 

analyze -top input_to_adder_and_mul_A_input_wrt_feedback_i
