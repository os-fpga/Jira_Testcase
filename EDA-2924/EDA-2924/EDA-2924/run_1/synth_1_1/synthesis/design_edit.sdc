#############
#
# Fabric clock assignment
#
#############
# This clock need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock clk (Physical port name, clock module: CLK_BUF $clkbuf$mealy_fsm.$ibuf_clk)
# set_clock_pin -device_clock clk[0] -design_clock $clk_buf_$ibuf_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $clk_buf_$ibuf_clk

# This clock need to route to fabric slot #1
# This is fabric clock buffer
# set_clock_pin -device_clock clk[1] -design_clock FABRIC_CLKBUF#0 (Physical port name, clock module: FCLK_BUF $clkbuf$mealy_fsm.div_clk)
# set_clock_pin -device_clock clk[1] -design_clock $fclk_buf_div_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[1] -design_clock $fclk_buf_div_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[0] -design_clock div_clk
set_clock_out   -device_clock clk[0] -design_clock div_clk

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin clk      :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin go_btn   :: I_BUF

# Pin location is not assigned
# Pin rst_btn  :: I_BUF

# Pin location is not assigned
# Pin done_sig :: O_BUFT

# Pin location is not assigned
# Pin led[0]   :: O_BUFT

# Pin location is not assigned
# Pin led[1]   :: O_BUFT

# Pin location is not assigned
# Pin led[2]   :: O_BUFT

# Pin location is not assigned
# Pin led[3]   :: O_BUFT

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: clk
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: go_btn
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: rst_btn
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: done_sig
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: led[0]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: led[1]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: led[2]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: led[3]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

#############
#
# Each gearbox core clock
#
#############
