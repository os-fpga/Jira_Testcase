read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_17_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/16apr/Validation/RTL_testcases/RS_FPGA_PRIMITIVES_new/DSP19x2_primitive_inst/EDA-2727/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/16apr/Validation/RTL_testcases/RS_FPGA_PRIMITIVES_new/DSP19x2_primitive_inst/EDA-2727/./rtl/DSP19X2_primitive_inst.v 

analyze -top DSP19X2_primitive_inst
