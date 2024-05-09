create_design orim_generic
target_device 1GVTC
add_include_path ./rtl
add_design_file ./rtl/prim_alert_pkg.sv
add_design_file ./rtl/prim_mubi_pkg.sv
add_design_file ./rtl/prim_ram_1p_pkg.sv
add_design_file ./rtl/prim_pad_wrapper_pkg.sv
add_design_file ./rtl/prim_pkg.sv
add_design_file ./rtl/prim_secded_pkg.sv
add_design_file ./rtl/prim_subreg_pkg.sv
add_design_file ./rtl/prim_util_pkg.sv
add_design_file ./rtl/tlul_pkg.sv
add_design_file ./rtl/top_pkg.sv
add_design_file ./rtl/entropy_src_reg_pkg.sv
add_design_file ./rtl/entropy_src_pkg.sv
add_design_file ./rtl/edn_pkg.sv
add_design_file ./rtl/ast_pkg.sv
add_design_file ./rtl/jtag_pkg.sv
add_design_file ./rtl/flash_ctrl_reg_pkg.sv
add_design_file ./rtl/flash_ctrl_pkg.sv
add_design_file ./rtl/flash_phy_pkg.sv
add_design_file ./rtl/prim_fifo_sync.sv
add_design_file ./rtl/prim_generic_flash.sv
add_design_file ./rtl/prim_generic_flash_bank.sv
add_design_file ./rtl/prim_generic_ram_1p.sv
add_design_file ./rtl/prim_ram_1p.sv
add_design_file ./rtl/prim_secded_inv_39_32_dec.sv
add_design_file ./rtl/prim_secded_inv_39_32_enc.sv
add_design_file ./rtl/prim_secded_inv_64_57_dec.sv
add_design_file ./rtl/prim_secded_inv_64_57_enc.sv
add_design_file ./rtl/tlul_adapter_sram.sv
add_design_file ./rtl/tlul_cmd_intg_chk.sv
add_design_file ./rtl/tlul_cmd_intg_gen.sv
add_design_file ./rtl/tlul_data_integ_dec.sv
add_design_file ./rtl/tlul_data_integ_enc.sv
add_design_file ./rtl/tlul_err.sv
add_design_file ./rtl/tlul_rsp_intg_gen.sv
add_design_file ./rtl/tlul_sram_byte.sv
set_top_module prim_generic_flash
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
