read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/05_04_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top memory_test -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl +libext+.v+.sv  /nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/memory_test.v \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_single_port_ram.v \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_simple_dual_port_ram_single_clock.v \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_simple_dual_port_ram_dual_clock.v \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_true_dual_port_ram_single_clock.v \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_true_dual_port_ram_dual_clock.v \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_single_port_rom.v \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_dual_port_rom.v \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_mixed_width_ram.sv \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_mixed_width_true_dual_port_ram.sv \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_mixed_width_true_dual_port_ram_new_rw.sv \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_byte_enabled_simple_dual_port_ram.sv \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_byte_enabled_true_dual_port_ram.sv \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_single_port_ram_MLAB.v \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_async_ram_MLAB.v \
/nfs_scratch/scratch/CGA/repo/2024-05-05-22-22-48_T10878R122/Validation/RTL_testcases/titan_benchmarks/memory_test/results_dir/.././rtl/infer_single_port_ram_M144K.v \

analyze -top memory_test
