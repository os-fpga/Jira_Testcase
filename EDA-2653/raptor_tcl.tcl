create_design pll_inferring_clk_buf
target_device GEMINI_COMPACT_104x68
add_include_path ./
add_library_path ./
add_library_ext .v .sv
add_design_file ./pll_inferring_clk_buf.v
set_top_module pll_inferring_clk_buf
analyze
synthesize delay