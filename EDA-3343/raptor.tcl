create_design vex_soc
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/vex_soc.v
set_top_module vex_soc

analyze
cd ../tb
exec make MODULE_NAME=vex_soc_sim >> ../results_dir/raptor.log 2>&1
cd ..
synth_options -new_tdp36k 
synthesize delay
exec echo "SGT: Gate simulation for design: vex_soc" >> results_dir/raptor.log 2>&1
cd tb/
set sed_script "s|RTL_DIR += ../rtl|RTL_DIR += ../rtl\\nRTL_DIR += /nfs_eda_sw/softwares/Raptor/instl_dir/11_30_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/\\!(SOC_FPGA_TEMPERATURE).v|"
exec sed -i [list -e $sed_script] Makefile
set sed_script "s|RTL_DIR += ../rtl|RTL_DIR += /nfs_scratch/scratch/CGA/repo/2024-11-30-22-25-48_T12694R122/Validation/RTL_testcases/litex_designs/vexriscv_axi_cdma/results_dir/vex_soc/run_1/synth_1_1/synthesis/vex_soc_post_synth.v|"
exec sed -i [list -e $sed_script] Makefile
set sed_script "s|R)/tb.vcd|R)/tb_post.vcd|"
exec sed -i [list -e $sed_script] Makefile
exec make MODULE_NAME=vex_soc_post_sim >> ../results_dir/raptor.log 2>&1
cd ..
exec echo "SGT: Gate simulation for design: vex_soc had ended" >> results_dir/raptor.log 2>&1
packing
place
route
sta
power
bitstream 
