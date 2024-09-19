read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/09_19_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top wrapper_multi_enc_decx2x4 -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/multi_enc_decx2x4/results_dir/.././wrapper_rtl  -sv /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/multi_enc_decx2x4/results_dir/.././wrapper_rtl/decoder.sv \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/multi_enc_decx2x4/results_dir/.././wrapper_rtl/encoder.sv \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/multi_enc_decx2x4/results_dir/.././wrapper_rtl/multi_enc_decx2x4.sv \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/multi_enc_decx2x4/results_dir/.././wrapper_rtl/topenc_decx2.sv \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/multi_enc_decx2x4/results_dir/.././wrapper_rtl/wrapper_multi_enc_decx2x4.sv \

analyze -top wrapper_multi_enc_decx2x4
