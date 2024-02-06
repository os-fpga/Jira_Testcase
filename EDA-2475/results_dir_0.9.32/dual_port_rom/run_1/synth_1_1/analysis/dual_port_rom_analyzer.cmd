read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/02_06_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/6thFEB/Validation/RTL_testcases/Memory_Designs/dual_port_rom/EDA-2475/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/6thFEB/Validation/RTL_testcases/Memory_Designs/dual_port_rom/EDA-2475/results_dir/.././rtl/dual_port_rom.v 

analyze -top dual_port_rom
