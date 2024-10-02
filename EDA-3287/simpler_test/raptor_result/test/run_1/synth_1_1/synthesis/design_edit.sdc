#############
#
# Fabric clock assignment
#
#############
# This clock need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock tm3_clk_v0 (Physical port name, clock module: CLK_BUF $clkbuf$test.$ibuf_tm3_clk_v0)
# set_clock_pin -device_clock clk[0] -design_clock $clk_buf_$ibuf_tm3_clk_v0 (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $clk_buf_$ibuf_tm3_clk_v0

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin tm3_clk_v0       :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin vidin_in[0]      :: I_BUF

# Pin location is not assigned
# Pin vidin_in[1]      :: I_BUF

# Pin location is not assigned
# Pin vidin_in[2]      :: I_BUF

# Pin location is not assigned
# Pin vidin_in[3]      :: I_BUF

# Pin location is not assigned
# Pin vidin_in[4]      :: I_BUF

# Pin location is not assigned
# Pin vidin_in[5]      :: I_BUF

# Pin location is not assigned
# Pin vidin_in[6]      :: I_BUF

# Pin location is not assigned
# Pin vidin_in[7]      :: I_BUF

# Pin location is not assigned
# Pin vidin_new_data   :: I_BUF

# Pin location is not assigned
# Pin vidin_out_f1[0]  :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[1]  :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[10] :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[11] :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[12] :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[13] :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[14] :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[15] :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[2]  :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[3]  :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[4]  :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[5]  :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[6]  :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[7]  :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[8]  :: O_BUFT

# Pin location is not assigned
# Pin vidin_out_f1[9]  :: O_BUFT

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: tm3_clk_v0
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: vidin_in[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: vidin_in[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: vidin_in[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: vidin_in[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: vidin_in[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: vidin_in[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: vidin_in[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: vidin_in[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: vidin_new_data
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[0]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[1]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[10]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[11]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[12]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[13]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[14]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[15]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[2]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[3]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[4]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[5]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[6]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[7]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[8]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: vidin_out_f1[9]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

#############
#
# Each gearbox core clock
#
#############
