create_clock -period 5 clk_buf_out 
set_input_delay 1 -clock clk_buf_out [get_ports {*}] 
set_output_delay 1 -clock clk_buf_out [get_ports {*}] 
