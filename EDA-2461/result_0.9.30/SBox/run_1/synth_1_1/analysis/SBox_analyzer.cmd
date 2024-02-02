read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/02_01_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/2nd-feb/Validation/RTL_testcases/Memory_Designs/sbox/EDA-2461/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/2nd-feb/Validation/RTL_testcases/Memory_Designs/sbox/EDA-2461/./rtl/SBox.v 

analyze -top SBox
