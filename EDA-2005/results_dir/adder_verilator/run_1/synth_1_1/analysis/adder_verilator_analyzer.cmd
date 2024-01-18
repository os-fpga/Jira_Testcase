read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/10_26_2023_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_home/iparapid/fahmad/Downloads/Compiler_validation_26_oct/Compiler_Validation/RTL_testcases/verilator_tests/adder_verilator/results_dir/.././rtl  /nfs_home/iparapid/fahmad/Downloads/Compiler_validation_26_oct/Compiler_Validation/RTL_testcases/verilator_tests/adder_verilator/results_dir/.././rtl/adder_verilator.v 

analyze -top adder_verilator
