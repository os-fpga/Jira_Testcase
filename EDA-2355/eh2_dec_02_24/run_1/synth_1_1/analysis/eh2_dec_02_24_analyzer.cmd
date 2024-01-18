read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/12_11_2023_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/RS_PRIMITIVES/blackbox_models/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top eh2_dec -y ../../../../../rtl -I../../../../../rtl -I../../../../ -I/nfs_scratch/scratch/CGA/repo/2023-12-12-05-00-48_T7474R108/ArchBench/Testcases/dec/dec_golden/../rtl +libext+.v+.sv -sv /nfs_scratch/scratch/CGA/repo/2023-12-12-05-00-48_T7474R108/ArchBench/Testcases/dec/dec_golden/../rtl/eh2_def.sv \
/nfs_scratch/scratch/CGA/repo/2023-12-12-05-00-48_T7474R108/ArchBench/Testcases/dec/dec_golden/../rtl/eh2_lib.sv \
/nfs_scratch/scratch/CGA/repo/2023-12-12-05-00-48_T7474R108/ArchBench/Testcases/dec/dec_golden/../rtl/eh2_pkg.sv \
/nfs_scratch/scratch/CGA/repo/2023-12-12-05-00-48_T7474R108/ArchBench/Testcases/dec/dec_golden/../rtl/beh_lib.sv \
/nfs_scratch/scratch/CGA/repo/2023-12-12-05-00-48_T7474R108/ArchBench/Testcases/dec/dec_golden/../rtl/eh2_dec_csr.sv \
/nfs_scratch/scratch/CGA/repo/2023-12-12-05-00-48_T7474R108/ArchBench/Testcases/dec/dec_golden/../rtl/eh2_dec_decode_ctl.sv \
/nfs_scratch/scratch/CGA/repo/2023-12-12-05-00-48_T7474R108/ArchBench/Testcases/dec/dec_golden/../rtl/eh2_dec_gpr_ctl.sv \
/nfs_scratch/scratch/CGA/repo/2023-12-12-05-00-48_T7474R108/ArchBench/Testcases/dec/dec_golden/../rtl/eh2_dec_ib_ctl.sv \
/nfs_scratch/scratch/CGA/repo/2023-12-12-05-00-48_T7474R108/ArchBench/Testcases/dec/dec_golden/../rtl/eh2_dec_tlu_ctl.sv \
/nfs_scratch/scratch/CGA/repo/2023-12-12-05-00-48_T7474R108/ArchBench/Testcases/dec/dec_golden/../rtl/eh2_dec_tlu_top.sv \
/nfs_scratch/scratch/CGA/repo/2023-12-12-05-00-48_T7474R108/ArchBench/Testcases/dec/dec_golden/../rtl/eh2_dec_trigger.sv \
/nfs_scratch/scratch/CGA/repo/2023-12-12-05-00-48_T7474R108/ArchBench/Testcases/dec/dec_golden/../rtl/eh2_dec.sv \

analyze -top eh2_dec
