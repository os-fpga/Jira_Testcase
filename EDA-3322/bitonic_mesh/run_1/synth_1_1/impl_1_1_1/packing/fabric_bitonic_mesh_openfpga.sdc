create_clock -period 2.5 $clk_buf_$ibuf_clk 
set_input_delay 0.1 -clock $clk_buf_$ibuf_clk [get_ports {*}] 
set_output_delay 0.1 -clock $clk_buf_$ibuf_clk [get_ports {*}] 
