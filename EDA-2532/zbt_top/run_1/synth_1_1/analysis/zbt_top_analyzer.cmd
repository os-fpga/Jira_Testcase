read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/02_21_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
plugin -i ghdl
ghdl -frelaxed-rules --no-formal -fsynopsys -fexplicit --PREFIX=/nfs_eda_sw/softwares/Raptor/instl_dir/02_21_2024_09_15_01/bin/HDL_simulator/GHDL/lib/ghdl -P/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/EDA-2532/./rtl --std=08 /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/EDA-2532/./rtl/zbt_top.vhd  -e 

analyze -top zbt_top
