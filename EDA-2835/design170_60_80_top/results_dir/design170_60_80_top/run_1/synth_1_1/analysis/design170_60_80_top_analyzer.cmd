read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/05_04_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top design170_60_80_top -y ../../../../.././rtl -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CGA/repo/2024-05-07-06-55-48_T10886R123/Validation/RTL_testcases/verilog_random_designs/design170_60_80_top/results_dir/.././rtl +libext+.v+.sv  /nfs_scratch/scratch/CGA/repo/2024-05-07-06-55-48_T10886R123/Validation/RTL_testcases/verilog_random_designs/design170_60_80_top/results_dir/.././rtl/design170_60_80_top.v \

analyze -top design170_60_80_top
