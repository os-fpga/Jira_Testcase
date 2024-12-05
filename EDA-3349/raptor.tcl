create_design pwrmgr
target_device 1VG28
add_include_path ./rtl
add_design_file ./rtl/prim_alert_pkg.sv
add_design_file ./rtl/prim_mubi_pkg.sv
add_design_file ./rtl/prim_pkg.sv
add_design_file ./rtl/prim_secded_pkg.sv
add_design_file ./rtl/prim_subreg_pkg.sv
add_design_file ./rtl/prim_util_pkg.sv
add_design_file ./rtl/pwrmgr_reg_pkg.sv
add_design_file ./rtl/pwm_reg_pkg.sv
add_design_file ./rtl/prim_count_pkg.sv
add_design_file ./rtl/pwrmgr_pkg.sv
add_design_file ./rtl/lc_ctrl_pkg.sv
add_design_file ./rtl/rom_ctrl_pkg.sv
add_design_file ./rtl/prim_esc_pkg.sv
add_design_file ./rtl/alert_handler_reg_pkg.sv
add_design_file ./rtl/top_pkg.sv
add_design_file ./rtl/tlul_pkg.sv
add_design_file ./rtl/prim_alert_sender.sv
add_design_file ./rtl/prim_buf.sv
add_design_file ./rtl/prim_clock_buf.sv
add_design_file ./rtl/prim_clock_mux2.sv
add_design_file ./rtl/prim_clock_timeout.sv
add_design_file ./rtl/prim_count.sv
add_design_file ./rtl/prim_diff_decode.sv
add_design_file ./rtl/prim_esc_receiver.sv
add_design_file ./rtl/prim_flop.sv
add_design_file ./rtl/prim_flop_2sync.sv
add_design_file ./rtl/prim_generic_buf.sv
add_design_file ./rtl/prim_generic_clock_buf.sv
add_design_file ./rtl/prim_generic_clock_mux2.sv
add_design_file ./rtl/prim_generic_flop.sv
add_design_file ./rtl/prim_generic_flop_2sync.sv
add_design_file ./rtl/prim_generic_xor2.sv
add_design_file ./rtl/prim_intr_hw.sv
add_design_file ./rtl/prim_lc_sender.sv
add_design_file ./rtl/prim_mubi4_sync.sv
add_design_file ./rtl/prim_pulse_sync.sv
add_design_file ./rtl/prim_sec_anchor_buf.sv
add_design_file ./rtl/prim_sec_anchor_flop.sv
add_design_file ./rtl/prim_secded_inv_39_32_dec.sv
add_design_file ./rtl/prim_secded_inv_39_32_enc.sv
add_design_file ./rtl/prim_secded_inv_64_57_dec.sv
add_design_file ./rtl/prim_secded_inv_64_57_enc.sv
add_design_file ./rtl/prim_sparse_fsm_flop.sv
add_design_file ./rtl/prim_subreg.sv
add_design_file ./rtl/prim_subreg_ext.sv
add_design_file ./rtl/prim_sync_reqack.sv
add_design_file ./rtl/prim_xor2.sv
add_design_file ./rtl/pwrmgr.sv
add_design_file ./rtl/pwrmgr_cdc.sv
add_design_file ./rtl/pwrmgr_fsm.sv
add_design_file ./rtl/pwrmgr_reg_top.sv
add_design_file ./rtl/pwrmgr_slow_fsm.sv
add_design_file ./rtl/pwrmgr_wake_info.sv
add_design_file ./rtl/tlul_adapter_reg.sv
add_design_file ./rtl/tlul_cmd_intg_chk.sv
add_design_file ./rtl/tlul_data_integ_dec.sv
add_design_file ./rtl/tlul_data_integ_enc.sv
add_design_file ./rtl/tlul_err.sv
add_design_file ./rtl/tlul_rsp_intg_gen.sv
set_top_module pwrmgr
parser_type surelog
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
