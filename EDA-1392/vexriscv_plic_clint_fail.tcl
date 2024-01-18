create_design vex_soc
target_device GEMINI_COMPACT_82x68
add_include_path ./vexriscv_plic_clint/rtl
add_library_path ./vexriscv_plic_clint/rtl
add_library_ext .v .sv
add_design_file ./vexriscv_plic_clint/rtl/vex_soc.v
set_top_module vex_soc
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
