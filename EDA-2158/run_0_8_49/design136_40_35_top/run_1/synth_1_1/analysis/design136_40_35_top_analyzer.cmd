read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/11_02_2023_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top design136_40_35_top -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/test/ArchBench/Testcases/design136_40_35_top/test/./rtl   /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/test/ArchBench/Testcases/design136_40_35_top/test/./rtl/decoder.v \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/test/ArchBench/Testcases/design136_40_35_top/test/./rtl/mod_n_counter.v \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/test/ArchBench/Testcases/design136_40_35_top/test/./rtl/parity_generator.v \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/test/ArchBench/Testcases/design136_40_35_top/test/./rtl/design136_40_35_top.v \

analyze -top design136_40_35_top
