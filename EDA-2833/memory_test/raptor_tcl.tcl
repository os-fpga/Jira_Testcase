create_design memory_test
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
# add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/memory_test.v
add_design_file ./rtl/infer_single_port_ram.v
add_design_file ./rtl/infer_simple_dual_port_ram_single_clock.v
add_design_file ./rtl/infer_simple_dual_port_ram_dual_clock.v
add_design_file ./rtl/infer_true_dual_port_ram_single_clock.v
add_design_file ./rtl/infer_true_dual_port_ram_dual_clock.v
add_design_file ./rtl/infer_single_port_rom.v
add_design_file ./rtl/infer_dual_port_rom.v
add_design_file ./rtl/infer_mixed_width_ram.sv
add_design_file ./rtl/infer_mixed_width_true_dual_port_ram.sv
add_design_file ./rtl/infer_mixed_width_true_dual_port_ram_new_rw.sv
add_design_file ./rtl/infer_byte_enabled_simple_dual_port_ram.sv
add_design_file ./rtl/infer_byte_enabled_true_dual_port_ram.sv
add_design_file ./rtl/infer_single_port_ram_MLAB.v
add_design_file ./rtl/infer_async_ram_MLAB.v
add_design_file ./rtl/infer_single_port_ram_M144K.v
set_top_module memory_test
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
