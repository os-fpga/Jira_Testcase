create_design vex_soc
target_device GEMINI
add_include_path ../rtl
add_design_file -V_2001 ../rtl/vex_soc.v
set_top_module vex_soc
 
synthesize

