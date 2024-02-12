read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/02_09_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/RTE_FAILURE_9-feb/vexriscv_uart/results_dir/.././rtl ../../../../.././rtl/VexRiscv.v
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/RTE_FAILURE_9-feb/vexriscv_uart/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/RTE_FAILURE_9-feb/vexriscv_uart/results_dir/.././rtl/vexriscv_uart.v 

analyze -top vexriscv_uart
