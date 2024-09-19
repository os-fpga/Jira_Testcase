read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/09_19_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_FPGA_PRIMITIVES_new/I_DELAY_primitive_inst/./rtl  /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_FPGA_PRIMITIVES_new/I_DELAY_primitive_inst/./rtl/I_DELAY_primitive_inst.v 

analyze -top I_DELAY_primitive_inst
