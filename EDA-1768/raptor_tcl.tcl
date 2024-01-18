create_design fifo_bram_async_128x32768
target_device GEMINI_COMPACT_104x68
configure_ip fifo_generator_v1_0 -mod_name=fifo_bram_async_128x32768 -Pdata_width=128 -Pdepth=32768 -Psynchronous=0 -Pfirst_word_fall_through=1 -out_file ./fifo_bram_async_128x32768.v
ipgenerate
add_include_path ./rapidsilicon/ip/fifo_generator/v1_0/fifo_bram_async_128x32768/src/
add_library_ext .v .sv
add_library_path rapidsilicon/ip/fifo_generator/v1_0/fifo_bram_async_128x32768/src/
add_design_file ./rapidsilicon/ip/fifo_generator/v1_0/fifo_bram_async_128x32768/src/fifo_bram_async_128x32768.v
set_top_module fifo_bram_async_128x32768
analyze
synthesize delay
pin_loc_assign_method free
packing
global_placement
place
route
sta
power
bitstream 
cd rapidsilicon/ip/fifo_generator/v1_0/fifo_bram_async_128x32768/sim/
exec make OUT_DIR=/nfs_scratch/scratch/CGA/repo/2023-07-16-00-02-29_T4817R23/Compiler_Validation/RTL_testcases/IP_Catalog_Designs/fifo_generator_bram_async_128x32768/results_dir