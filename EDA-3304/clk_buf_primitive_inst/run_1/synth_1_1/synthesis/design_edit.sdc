#############
#
# Fabric clock assignment
#
#############
# This clock need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock clock_input (Physical port name, clock module: CLK_BUF clk_buf_inst)
# set_clock_pin -device_clock clk[0] -design_clock wire1 (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock wire1

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin clock_input  :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin ibuf_enable  :: I_BUF

# Pin location is not assigned
# Pin clock_output :: O_BUFT

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: clock_input
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: ibuf_enable
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: clock_output
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

#############
#
# Each gearbox core clock
#
#############
