create_design axis_async_fifo_wrapper
target_device GEMINI
add_include_path ../src
add_library_path ../src
add_library_ext .v .sv
add_design_file ../src/axis_async_fifo_wrapper.v
set_top_module axis_async_fifo_wrapper
synthesize