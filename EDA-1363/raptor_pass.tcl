create_design raptor_project_default_rerun
target_device 1VG28
add_design_file ./Src/timescale.v
add_design_file ./Src/ps2_io_ctrl.v
add_design_file ./Src/ps2_keyboard.v
add_design_file ./Src/ps2_defines.v
add_design_file ./Src/ps2_translation_table.v
add_design_file ./Src/ps2_wb_if.v
add_design_file ./Src/ps2_top.v
add_constraint_file constraints_fixed.sdc
analyze
synthesize 
packing
place
route
sta
power
bitstream
