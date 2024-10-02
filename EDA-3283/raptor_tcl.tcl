create_design hmac
target_device 1VG28
add_include_path ./rtl/
add_library_path ./rtl/
add_library_ext .v .sv
add_design_file -SV_2012 ./rtl/prim_secded_pkg.sv
add_design_file -SV_2012 ./rtl/prim_subreg_pkg.sv
add_design_file -SV_2012 ./rtl/prim_util_pkg.sv
add_design_file -SV_2012 ./rtl/pwrmgr_reg_pkg.sv
add_design_file -SV_2012 ./rtl/pwrmgr_pkg.sv
add_design_file -SV_2012 ./rtl/prim_ram_1p_pkg.sv
add_design_file -SV_2012 ./rtl/prim_mubi_pkg.sv
add_design_file -SV_2012 ./rtl/prim_pkg.sv
add_design_file -SV_2012 ./rtl/prim_cipher_pkg.sv
add_design_file -SV_2012 ./rtl/prim_alert_pkg.sv
add_design_file -SV_2012 ./rtl/prim_count_pkg.sv
add_design_file -SV_2012 ./rtl/jtag_pkg.sv
add_design_file -SV_2012 ./rtl/entropy_src_pkg.sv
add_design_file -SV_2012 ./rtl/edn_pkg.sv
add_design_file -SV_2012 ./rtl/top_pkg.sv
add_design_file -SV_2012 ./rtl/flash_ctrl_reg_pkg.sv
add_design_file -SV_2012 ./rtl/flash_ctrl_pkg.sv
add_design_file -SV_2012 ./rtl/flash_phy_pkg.sv
add_design_file -SV_2012 ./rtl/hmac_reg_pkg.sv
add_design_file -SV_2012 ./rtl/hmac_pkg.sv
add_design_file -SV_2012 ./rtl/lc_ctrl_pkg.sv
add_design_file -SV_2012 ./rtl/otp_ctrl_reg_pkg.sv
add_design_file -SV_2012 ./rtl/otp_ctrl_pkg.sv
add_design_file -SV_2012 ./rtl/tlul_pkg.sv
add_design_file -SV_2012 ./rtl/ast_pkg.sv
add_design_file -SV_2012 ./rtl/hmac.sv
add_design_file -SV_2012 ./rtl/hmac_core.sv
add_design_file -SV_2012 ./rtl/hmac_reg_top.sv
add_design_file -SV_2012 ./rtl/prim_alert_sender.sv
add_design_file -SV_2012 ./rtl/prim_buf.sv
add_design_file -SV_2012 ./rtl/prim_diff_decode.sv
add_design_file -SV_2012 ./rtl/prim_fifo_sync.sv
add_design_file -SV_2012 ./rtl/prim_flop_2sync.sv
add_design_file -SV_2012 ./rtl/prim_generic_buf.sv
add_design_file -SV_2012 ./rtl/prim_generic_flop.sv
add_design_file -SV_2012 ./rtl/prim_generic_flop_2sync.sv
add_design_file -SV_2012 ./rtl/prim_intr_hw.sv
add_design_file -SV_2012 ./rtl/prim_packer.sv
add_design_file -SV_2012 ./rtl/prim_secded_inv_39_32_dec.sv
add_design_file -SV_2012 ./rtl/prim_secded_inv_39_32_enc.sv
add_design_file -SV_2012 ./rtl/prim_secded_inv_64_57_dec.sv
add_design_file -SV_2012 ./rtl/prim_secded_inv_64_57_enc.sv
add_design_file -SV_2012 ./rtl/prim_subreg.sv
add_design_file -SV_2012 ./rtl/prim_subreg_ext.sv
add_design_file -SV_2012 ./rtl/sha2.sv
add_design_file -SV_2012 ./rtl/sha2_pad.sv
add_design_file -SV_2012 ./rtl/tlul_adapter_reg.sv
add_design_file -SV_2012 ./rtl/tlul_adapter_sram.sv
add_design_file -SV_2012 ./rtl/tlul_cmd_intg_chk.sv
add_design_file -SV_2012 ./rtl/tlul_data_integ_dec.sv
add_design_file -SV_2012 ./rtl/tlul_data_integ_enc.sv
add_design_file -SV_2012 ./rtl/tlul_err.sv
add_design_file -SV_2012 ./rtl/tlul_err_resp.sv
add_design_file -SV_2012 ./rtl/tlul_fifo_sync.sv
add_design_file -SV_2012 ./rtl/tlul_rsp_intg_gen.sv
add_design_file -SV_2012 ./rtl/tlul_socket_1n.sv
set_top_module hmac
add_constraint_file ./raptor_sdc.sdc
analyze
synth_options -effort high
synthesize delay
