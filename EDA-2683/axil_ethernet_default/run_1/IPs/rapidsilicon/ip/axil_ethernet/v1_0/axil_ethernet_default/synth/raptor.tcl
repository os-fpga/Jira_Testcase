create_design axil_ethernet_default
target_device GEMINI
add_include_path ../src
add_library_path ../src
add_library_ext .v .sv
add_design_file ../src/axil_ethernet_default_v1_0.v
set_top_module axil_ethernet_default
synthesize