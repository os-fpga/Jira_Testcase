read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2023_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -y ../../../.././rtl +libext+.v+.sv  /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/ArchBench/Testcases/design136_40_35_top/test/./rtl/design136_40_35_top.v

analyze -top design136_40_35_top
