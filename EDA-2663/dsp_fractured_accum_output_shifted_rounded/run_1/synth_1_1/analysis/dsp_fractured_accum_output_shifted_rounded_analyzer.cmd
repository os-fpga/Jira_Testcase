read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_01_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/dsp_fractured_accum_output_shifted_rounded/EDA-2663/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/dsp_fractured_accum_output_shifted_rounded/EDA-2663/./rtl/dsp_fractured_accum_output_shifted_rounded.v 

analyze -top dsp_fractured_accum_output_shifted_rounded
