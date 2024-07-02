read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/07_02_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/21june/Validation/RTL_testcases/RS_FPGA_PRIMITIVES_new/TDP_RAM18KX2_primitive_inst/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/21june/Validation/RTL_testcases/RS_FPGA_PRIMITIVES_new/TDP_RAM18KX2_primitive_inst/results_dir/.././rtl/TDP_RAM18KX2_primitive_inst.v 

analyze -top TDP_RAM18KX2_primitive_inst
