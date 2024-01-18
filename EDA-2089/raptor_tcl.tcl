create_design adc_ctrl
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/prim_mubi_pkg.sv
add_design_file ./rtl/ast_pkg.sv
add_design_file ./rtl/adc_ctrl_reg_pkg.sv
add_design_file ./rtl/prim_alert_pkg.sv
add_design_file ./rtl/prim_pkg.sv
add_design_file ./rtl/prim_secded_pkg.sv
add_design_file ./rtl/top_pkg.sv
add_design_file ./rtl/prim_subreg_pkg.sv
add_design_file ./rtl/tlul_pkg.sv
add_design_file ./rtl/adc_ctrl_core.sv
add_design_file ./rtl/adc_ctrl_fsm.sv
add_design_file ./rtl/adc_ctrl_intr.sv
add_design_file ./rtl/adc_ctrl_reg_top.sv
add_design_file ./rtl/prim_alert_sender.sv
add_design_file ./rtl/prim_buf.sv
add_design_file ./rtl/prim_generic_buf.sv
add_design_file ./rtl/prim_subreg.sv
add_design_file ./rtl/prim_diff_decode.sv
add_design_file ./rtl/prim_flop_2sync.sv
add_design_file ./rtl/prim_generic_flop_2sync.sv
add_design_file ./rtl/prim_generic_flop.sv
add_design_file ./rtl/tlul_cmd_intg_chk.sv
add_design_file ./rtl/prim_secded_inv_64_57_dec.sv
add_design_file ./rtl/tlul_data_integ_dec.sv
add_design_file ./rtl/prim_secded_inv_39_32_dec.sv
add_design_file ./rtl/tlul_rsp_intg_gen.sv
add_design_file ./rtl/prim_secded_inv_64_57_enc.sv
add_design_file ./rtl/tlul_data_integ_enc.sv
add_design_file ./rtl/prim_secded_inv_39_32_enc.sv
add_design_file ./rtl/tlul_adapter_reg.sv
add_design_file ./rtl/tlul_err.sv
add_design_file ./rtl/prim_sync_reqack.sv
add_design_file ./rtl/prim_reg_cdc.sv
add_design_file ./rtl/prim_subreg_ext.sv
add_design_file ./rtl/prim_pulse_sync.sv
add_design_file ./rtl/prim_intr_hw.sv
add_design_file ./rtl/adc_ctrl.sv
set_top_module adc_ctrl
add_constraint_file ./raptor_sdc.sdc
analyze
synth_options -effort high
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
