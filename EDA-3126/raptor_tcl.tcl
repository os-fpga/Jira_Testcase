create_design dragonball_wbmaster_top
target_device 1VG28
add_include_path ./rtl/
add_design_file ./rtl/dragonball_wbmaster_top.v
set_top_module dragonball_wbmaster_top
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
exec python3 /nfs_scratch/scratch/CompilerValidation/abdul_hameed/wbif_68k/../../../scripts/tb_generator.py dragonball_wbmaster_top /nfs_scratch/scratch/CompilerValidation/abdul_hameed/wbif_68k
packing
place
route
sta
power
bitstream 
