create_design eh2_dec_02_24
target_device GEMINI_COMPACT_104x68


# Create or open vpr_constraints.xml file for writing
set filename "vpr_constraints.xml"
set fileId [open $filename "w"]

# XML content to write
set xml_content {<vpr_constraints tool_name="vpr">
</vpr_constraints>}

# Write the XML content to the file
puts $fileId $xml_content

# Close the file
close $fileId


add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/eh2_def.sv
add_design_file ./rtl/eh2_lib.sv
add_design_file ./rtl/eh2_pkg.sv
add_design_file ./rtl/beh_lib.sv
add_design_file ./rtl/eh2_dec_csr.sv
add_design_file ./rtl/eh2_dec_decode_ctl.sv
add_design_file ./rtl/eh2_dec_gpr_ctl.sv
add_design_file ./rtl/eh2_dec_ib_ctl.sv
add_design_file ./rtl/eh2_dec_tlu_ctl.sv
add_design_file ./rtl/eh2_dec_tlu_top.sv
add_design_file ./rtl/eh2_dec_trigger.sv
add_design_file ./rtl/eh2_dec.sv
add_constraint_file constraints.sdc
set_top_module eh2_dec
pin_loc_assign_method free
analyze
synthesize
pnr_options --use_partitioning_in_pack on --number_of_molecules_in_partition 16 --read_vpr_constraints vpr_constraints.xml

packing
global_placement
place
route
sta
power
bitstream
