create_clock -period 5 $auto$clkbufmap.cc:298:execute$445 
set_input_delay 1 -clock $auto$clkbufmap.cc:298:execute$445 [get_ports $iopadmap$din] 
set_input_delay 1 -clock $auto$clkbufmap.cc:298:execute$445 [get_ports $iopadmap$oe] 
set_output_delay 1 -clock $auto$clkbufmap.cc:298:execute$445 [get_ports $iopadmap$tristate_out] 
