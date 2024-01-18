create_design aes
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/prim_util_pkg.sv
add_design_file ./rtl/aes_reg_pkg.sv
add_design_file ./rtl/prim_mubi_pkg.sv
add_design_file ./rtl/top_pkg.sv
add_design_file ./rtl/prim_secded_pkg.sv
add_design_file ./rtl/tlul_pkg.sv
add_design_file ./rtl/prim_alert_pkg.sv
add_design_file ./rtl/prim_subreg_pkg.sv
add_design_file ./rtl/aes_pkg.sv
add_design_file ./rtl/aes_sbox_canright_pkg.sv
add_design_file ./rtl/lc_ctrl_pkg.sv
add_design_file ./rtl/entropy_src_pkg.sv
add_design_file ./rtl/edn_pkg.sv
add_design_file ./rtl/keymgr_reg_pkg.sv
add_design_file ./rtl/keymgr_pkg.sv
add_design_file ./rtl/prim_pkg.sv
add_design_file ./rtl/aes.sv
add_design_file ./rtl/aes_cipher_control.sv
add_design_file ./rtl/aes_cipher_control_fsm.sv
add_design_file ./rtl/aes_cipher_control_fsm_n.sv
add_design_file ./rtl/aes_cipher_control_fsm_p.sv
add_design_file ./rtl/aes_cipher_core.sv
add_design_file ./rtl/aes_control.sv
add_design_file ./rtl/aes_control_fsm.sv
add_design_file ./rtl/aes_control_fsm_n.sv
add_design_file ./rtl/aes_control_fsm_p.sv
add_design_file ./rtl/aes_core.sv
add_design_file ./rtl/aes_ctr.sv
add_design_file ./rtl/aes_ctr_fsm.sv
add_design_file ./rtl/aes_ctr_fsm_n.sv
add_design_file ./rtl/aes_ctr_fsm_p.sv
add_design_file ./rtl/aes_ctrl_reg_shadowed.sv
add_design_file ./rtl/aes_key_expand.sv
add_design_file ./rtl/aes_mix_columns.sv
add_design_file ./rtl/aes_mix_single_column.sv
add_design_file ./rtl/aes_prng_clearing.sv
add_design_file ./rtl/aes_prng_masking.sv
add_design_file ./rtl/aes_reg_status.sv
add_design_file ./rtl/aes_reg_top.sv
add_design_file ./rtl/aes_sbox.sv
add_design_file ./rtl/aes_sbox_canright.sv
add_design_file ./rtl/aes_sbox_canright_masked.sv
add_design_file ./rtl/aes_sbox_canright_masked_noreuse.sv
add_design_file ./rtl/aes_sbox_lut.sv
add_design_file ./rtl/aes_sel_buf_chk.sv
add_design_file ./rtl/aes_shift_rows.sv
add_design_file ./rtl/aes_sub_bytes.sv
add_design_file ./rtl/aes_sbox_dom.sv
add_design_file ./rtl/prim_alert_sender.sv
add_design_file ./rtl/prim_buf.sv
add_design_file ./rtl/prim_diff_decode.sv
add_design_file ./rtl/prim_flop.sv
add_design_file ./rtl/prim_flop_2sync.sv
add_design_file ./rtl/prim_generic_buf.sv
add_design_file ./rtl/prim_generic_flop.sv
add_design_file ./rtl/prim_generic_flop_2sync.sv
add_design_file ./rtl/prim_generic_xor2.sv
add_design_file ./rtl/prim_lc_sync.sv
add_design_file ./rtl/prim_lfsr.sv
add_design_file ./rtl/prim_flop_en.sv
add_design_file ./rtl/prim_secded_inv_39_32_dec.sv
add_design_file ./rtl/prim_secded_inv_39_32_enc.sv
add_design_file ./rtl/prim_secded_inv_64_57_dec.sv
add_design_file ./rtl/prim_secded_inv_64_57_enc.sv
add_design_file ./rtl/prim_sparse_fsm_flop.sv
add_design_file ./rtl/prim_subreg.sv
add_design_file ./rtl/prim_subreg_arb.sv
add_design_file ./rtl/prim_subreg_ext.sv
add_design_file ./rtl/prim_subreg_shadow.sv
add_design_file ./rtl/prim_sync_reqack.sv
add_design_file ./rtl/prim_sync_reqack_data.sv
add_design_file ./rtl/prim_generic_flop_en.sv
add_design_file ./rtl/prim_xor2.sv
add_design_file ./rtl/tlul_adapter_reg.sv
add_design_file ./rtl/tlul_cmd_intg_chk.sv
add_design_file ./rtl/tlul_data_integ_dec.sv
add_design_file ./rtl/tlul_data_integ_enc.sv
add_design_file ./rtl/tlul_err.sv
add_design_file ./rtl/tlul_rsp_intg_gen.sv
set_top_module aes
add_constraint_file ./raptor_sdc.sdc
analyze
synth_options -effort high
synthesize delay
pin_loc_assign_method free
packing
global_placement
place
route
sta
power
bitstream 
