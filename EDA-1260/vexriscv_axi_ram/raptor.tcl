create_design vex_soc_carryon_02_24

add_include_path ./rtl
add_library_path ./rtl
target_device 1GE100
add_design_file -V_2001 ./rtl/vex_soc.v
set_top_module vex_soc
#add_constraint_file /nfs_scratch/scratch/CGA/repo/2023-02-21-17-05-36_T1496R24/Gap-Analysis/misc/raptor/run4/ata_ocidec-2//raptor_sdc.sdc

#synth_options 	-effort high
synth_options   -effort high -carry auto -fsm_encoding onehot
analyze
synthesize delay
packing 
place 
route 
sta
bitstream
