create_design vex_soc
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/uart_defines.vh ./rtl/vex_soc.v
set_top_module vex_soc
analyze
synthesize delay

setup_lec_sim

simulate icarus gate

packing
place
route

simulate icarus pnr

sta
power
bitstream 
