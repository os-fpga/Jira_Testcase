read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
plugin -i ghdl
ghdl -frelaxed-rules --no-formal -fsynopsys -fexplicit --PREFIX=/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/HDL_simulator/GHDL/lib/ghdl -P/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/btc_dsha256/results_dir/.././rtl/sha256core/sync_fifo_fwft_infer --std=08 /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/btc_dsha256/results_dir/.././rtl/sha256core/sync_fifo_fwft_infer/sdpram_infer_read_first.vhd /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/btc_dsha256/results_dir/.././rtl/sha256core/sync_fifo_fwft_infer/sync_fifo_fwft_infer.vhd  -e 

analyze -top sync_fifo_fwft_infer
