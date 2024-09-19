#############
#
# Fabric clock assignment
#
#############
# This clock need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock CLK_IN (Physical port name, clock module: CLK_BUF $clkbuf$I_DELAY_primitive_inst.$ibuf_CLK_IN)
# set_clock_pin -device_clock clk[0] -design_clock $clk_buf_$ibuf_CLK_IN (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $clk_buf_$ibuf_CLK_IN

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin CLK_IN           :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin DLY_ADJ          :: I_BUF

# Pin location is not assigned
# Pin DLY_INCDEC       :: I_BUF

# Pin location is not assigned
# Pin DLY_LOAD         :: I_BUF

# Pin location is not assigned
# Pin in               :: I_BUF

# Pin location is not assigned
# Pin reset            :: I_BUF

# Pin location is not assigned
# Pin DLY_TAP_VALUE[0] :: O_BUFT

# Pin location is not assigned
# Pin DLY_TAP_VALUE[1] :: O_BUFT

# Pin location is not assigned
# Pin DLY_TAP_VALUE[2] :: O_BUFT

# Pin location is not assigned
# Pin DLY_TAP_VALUE[3] :: O_BUFT

# Pin location is not assigned
# Pin DLY_TAP_VALUE[4] :: O_BUFT

# Pin location is not assigned
# Pin DLY_TAP_VALUE[5] :: O_BUFT

# Pin location is not assigned
# Pin O                :: O_BUFT

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: CLK_IN
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: DLY_ADJ
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: DLY_INCDEC
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: DLY_LOAD
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: reset
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: DLY_TAP_VALUE[0]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: DLY_TAP_VALUE[1]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: DLY_TAP_VALUE[2]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: DLY_TAP_VALUE[3]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: DLY_TAP_VALUE[4]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: DLY_TAP_VALUE[5]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: O
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

#############
#
# Each gearbox core clock
#
#############
