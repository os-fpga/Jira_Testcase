read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/07_07_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/8thJuly/Validation/RTL_testcases/RS_Primitive_example_designs/primitive_example_design_13/EDA-3031/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/8thJuly/Validation/RTL_testcases/RS_Primitive_example_designs/primitive_example_design_13/EDA-3031/./rtl/primitive_example_design_13.v 

analyze -top primitive_example_design_13
