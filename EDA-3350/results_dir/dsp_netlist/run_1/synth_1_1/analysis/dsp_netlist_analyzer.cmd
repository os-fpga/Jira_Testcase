read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/12_05_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/Netlist-RTL_mix_testcases/dsp_netlist/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/Netlist-RTL_mix_testcases/dsp_netlist/results_dir/.././rtl/dsp_netlist.v 

analyze -top dsp_netlist
