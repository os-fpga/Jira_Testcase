read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/10_01_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top prim_xilinx_pad_wrapper -y ../../../../.././rtl/ -I../../../../.././rtl/ -I../../../../.. -I/nfs_scratch/scratch/CGA/repo/2024-10-01-23-30-48_T12181R18/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/prim_xilinx/results_dir/.././rtl +libext+.v+.sv -sv /nfs_scratch/scratch/CGA/repo/2024-10-01-23-30-48_T12181R18/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/prim_xilinx/results_dir/.././rtl/prim_alert_pkg.sv \
/nfs_scratch/scratch/CGA/repo/2024-10-01-23-30-48_T12181R18/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/prim_xilinx/results_dir/.././rtl/prim_mubi_pkg.sv \
/nfs_scratch/scratch/CGA/repo/2024-10-01-23-30-48_T12181R18/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/prim_xilinx/results_dir/.././rtl/prim_pad_wrapper_pkg.sv \
/nfs_scratch/scratch/CGA/repo/2024-10-01-23-30-48_T12181R18/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/prim_xilinx/results_dir/.././rtl/prim_pkg.sv \
/nfs_scratch/scratch/CGA/repo/2024-10-01-23-30-48_T12181R18/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/prim_xilinx/results_dir/.././rtl/prim_secded_pkg.sv \
/nfs_scratch/scratch/CGA/repo/2024-10-01-23-30-48_T12181R18/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/prim_xilinx/results_dir/.././rtl/prim_subreg_pkg.sv \
/nfs_scratch/scratch/CGA/repo/2024-10-01-23-30-48_T12181R18/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/prim_xilinx/results_dir/.././rtl/prim_util_pkg.sv \
/nfs_scratch/scratch/CGA/repo/2024-10-01-23-30-48_T12181R18/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/prim_xilinx/results_dir/.././rtl/top_pkg.sv \
/nfs_scratch/scratch/CGA/repo/2024-10-01-23-30-48_T12181R18/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/prim_xilinx/results_dir/.././rtl/tlul_pkg.sv \
/nfs_scratch/scratch/CGA/repo/2024-10-01-23-30-48_T12181R18/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/prim_xilinx/results_dir/.././rtl/IOBUF.v \
/nfs_scratch/scratch/CGA/repo/2024-10-01-23-30-48_T12181R18/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/prim_xilinx/results_dir/.././rtl/prim_xilinx_pad_wrapper.sv \

analyze -top prim_xilinx_pad_wrapper
