read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/09_16_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top cordic -y ../../../.././rtl -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/titan_benchmarks/cordic/./rtl +libext+.v+.sv  /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/titan_benchmarks/cordic/./rtl/cordic.v \

analyze -top cordic
