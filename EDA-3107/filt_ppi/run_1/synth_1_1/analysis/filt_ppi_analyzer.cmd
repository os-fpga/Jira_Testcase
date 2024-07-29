read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/07_27_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/DSP_new_designs/filt_ppi/results_dir/.././rtl ../../../../.././rtl/shift_register.v
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/DSP_new_designs/filt_ppi/results_dir/.././rtl ../../../../.././rtl/commutator.v
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/DSP_new_designs/filt_ppi/results_dir/.././rtl ../../../../.././rtl/ff.v
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/DSP_new_designs/filt_ppi/results_dir/.././rtl ../../../../.././rtl/mul_add.v
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/DSP_new_designs/filt_ppi/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/DSP_new_designs/filt_ppi/results_dir/.././rtl/filt_ppi.v 

analyze -top filt_ppi
