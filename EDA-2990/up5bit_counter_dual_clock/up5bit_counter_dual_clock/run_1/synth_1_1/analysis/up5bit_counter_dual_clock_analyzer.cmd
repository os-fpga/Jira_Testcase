read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/06_21_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../../rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/21june/up5bit_counter_dual_clock/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/21june/up5bit_counter_dual_clock/./rtl/up5bit_counter_dual_clock.v 

analyze -top up5bit_counter_dual_clock
