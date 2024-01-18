read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/10_17_2023_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
plugin -i ghdl
ghdl -frelaxed-rules --no-formal -fsynopsys -fexplicit --PREFIX=/nfs_eda_sw/softwares/Raptor/instl_dir/10_17_2023_09_15_01/bin/HDL_simulator/GHDL/lib/ghdl -P/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/test3/Compiler_Validation/RTL_testcases/VHDL_designs/audio/jira/./rtl --std=93 /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/test3/Compiler_Validation/RTL_testcases/VHDL_designs/audio/jira/./rtl/HD_ADPCM_Codec.vhd  -e 

analyze -top HD_ADPCM_Codec
