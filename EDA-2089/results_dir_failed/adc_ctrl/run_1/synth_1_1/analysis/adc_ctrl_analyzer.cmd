read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/09_22_2023_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top adc_ctrl -y ../../../../.././rtl -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl +libext+.v+.sv -sv /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_mubi_pkg.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/ast_pkg.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/adc_ctrl_reg_pkg.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_alert_pkg.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_pkg.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_secded_pkg.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/top_pkg.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_subreg_pkg.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/tlul_pkg.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/adc_ctrl_core.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/adc_ctrl_fsm.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/adc_ctrl_intr.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/adc_ctrl_reg_top.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_alert_sender.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_buf.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_generic_buf.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_subreg.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_diff_decode.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_flop_2sync.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_generic_flop_2sync.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_generic_flop.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/tlul_cmd_intg_chk.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_secded_inv_64_57_dec.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/tlul_data_integ_dec.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_secded_inv_39_32_dec.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/tlul_rsp_intg_gen.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_secded_inv_64_57_enc.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/tlul_data_integ_enc.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_secded_inv_39_32_enc.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/tlul_adapter_reg.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/tlul_err.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_sync_reqack.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_reg_cdc.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_subreg_ext.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_pulse_sync.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/prim_intr_hw.sv \
/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/adc_ctrl/results_dir/.././rtl/adc_ctrl.sv \

analyze -top adc_ctrl
