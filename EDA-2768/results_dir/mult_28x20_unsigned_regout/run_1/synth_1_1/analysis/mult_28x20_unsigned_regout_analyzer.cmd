read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_27_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/24apr/Validation/RTL_testcases/DSP_Designs/mult_28x20_unsigned_regout/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/24apr/Validation/RTL_testcases/DSP_Designs/mult_28x20_unsigned_regout/results_dir/.././rtl/mult_28x20_unsigned_regout.v 

analyze -top mult_28x20_unsigned_regout
