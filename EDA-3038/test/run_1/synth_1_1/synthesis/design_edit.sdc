#############
#
# Fabric clock assignment
#
#############
# set_clock_pin -device_clock clk[0] -design_clock clk (Physical port name)
# set_clock_pin -device_clock clk[0] -design_clock $auto$clkbufmap.cc:339:execute$439 (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $auto$clkbufmap.cc:339:execute$439

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin clk    :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin data_o :: O_BUF

# Pin location is not assigned
# Pin en     :: I_BUF

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
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: en
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

