read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/1NEW/asdafgawerg/Validation/RTL_testcases/DSP_negative_edge_trigger_design/GJC4/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/1NEW/asdafgawerg/Validation/RTL_testcases/DSP_negative_edge_trigger_design/GJC4/results_dir/.././rtl/DSP_MULTACC_TEST.v 

analyze -top DSP_MULTACC_TEST
