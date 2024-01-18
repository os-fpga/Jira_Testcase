read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/09_23_2023_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
plugin -i ghdl
ghdl -frelaxed-rules --no-formal -fsynopsys -fexplicit --PREFIX=/nfs_eda_sw/softwares/Raptor/instl_dir/09_23_2023_09_15_01/bin/HDL_simulator/GHDL/lib/ghdl -P/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/test/Compiler_Validation/RTL_testcases/VHDL_designs/zbt_sram_controller/jira/./rtl --std=08 /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/test/Compiler_Validation/RTL_testcases/VHDL_designs/zbt_sram_controller/jira/./rtl/zbt_top.vhd  -e 

analyze -top zbt_top
