create_design axi_dma_default
target_device GEMINI
add_include_path ../src
add_library_path ../src
add_library_ext .v .sv
add_design_file ../src/axi_dma_default_v1_0.v
set_top_module axi_dma_default
synthesize