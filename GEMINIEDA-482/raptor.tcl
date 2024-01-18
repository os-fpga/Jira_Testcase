create_design tdp
target_device GEMINI
add_design_file ./rtl/tdp.v
set_top_module tdp

synthesize area
