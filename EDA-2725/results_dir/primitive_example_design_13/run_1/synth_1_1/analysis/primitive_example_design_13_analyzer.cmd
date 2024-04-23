read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_17_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os-fpga/Validation/RTL_testcases/RS_Primitive_example_designs/primitive_example_design_13/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os-fpga/Validation/RTL_testcases/RS_Primitive_example_designs/primitive_example_design_13/results_dir/.././rtl/primitive_example_design_13.v 

analyze -top primitive_example_design_13
