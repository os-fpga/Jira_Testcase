read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/02_11_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/test_dsp/EDA-2531/.  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/test_dsp/EDA-2531/./dsp_mul_unsigned_reg_inf_dsp19x2.v 

analyze -top dsp_mul_unsigned_reg_inf_dsp19x2
