read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/07_05_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/21june/Validation/RTL_testcases/iverilog_tests/dsp_mul_signed_comb_iverilog/EDA-3028/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/21june/Validation/RTL_testcases/iverilog_tests/dsp_mul_signed_comb_iverilog/EDA-3028/./rtl/dsp_mul_signed_comb_iverilog.v 

analyze -top dsp_mul_signed_comb_iverilog
