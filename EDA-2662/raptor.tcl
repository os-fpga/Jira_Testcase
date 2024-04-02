create_design on_chip_memory
target_device GEMINI_COMPACT_104x68
configure_ip on_chip_memory_v1_0 -mod_name=ocm -Pdata_width=32 -out_file ./ocm
ipgenerate
add_include_path ./rapidsilicon/ip/on_chip_memory/v1_0/ocm/src/
add_library_ext .v .sv
add_library_path rapidsilicon/ip/on_chip_memory/v1_0/ocm/src/
add_design_file ./rapidsilicon/ip/on_chip_memory/v1_0/ocm/src/ocm_v1_0.v
set_top_module ocm
analyze
synthesize