create_design prim_xilinx_pad_wrapper
target_device 1VG28
add_include_path ./rtl/
add_library_path ./rtl/
add_library_ext .v .sv
add_design_file -SV_2012 ./rtl/prim_alert_pkg.sv
add_design_file -SV_2012 ./rtl/prim_mubi_pkg.sv
add_design_file -SV_2012 ./rtl/prim_pad_wrapper_pkg.sv
add_design_file -SV_2012 ./rtl/prim_pkg.sv
add_design_file -SV_2012 ./rtl/prim_secded_pkg.sv
add_design_file -SV_2012 ./rtl/prim_subreg_pkg.sv
add_design_file -SV_2012 ./rtl/prim_util_pkg.sv
add_design_file -SV_2012 ./rtl/top_pkg.sv
add_design_file -SV_2012 ./rtl/tlul_pkg.sv
add_design_file -SV_2012 ./rtl/IOBUF.v
add_design_file -SV_2012 ./rtl/prim_xilinx_pad_wrapper.sv
set_top_module prim_xilinx_pad_wrapper
add_constraint_file ./raptor_sdc.sdc
analyze
synth_options -effort high
synthesize delay
