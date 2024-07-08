#############
#
# Fabric clock assignment
#
#############
# set_clock_pin -device_clock clk[0] -design_clock clk_in (Physical port name)
# set_clock_pin -device_clock clk[0] -design_clock $auto$clkbufmap.cc:339:execute$717 (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $auto$clkbufmap.cc:339:execute$717

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin channel_bond_sync_in  :: I_BUF

# Pin location is not assigned
# Pin clk_in                :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin i1[0]                 :: I_BUF

# Pin location is not assigned
# Pin i1[1]                 :: I_BUF

# Pin location is not assigned
# Pin i1[2]                 :: I_BUF

# Pin location is not assigned
# Pin i1[3]                 :: I_BUF

# Pin location is not assigned
# Pin i2[0]                 :: I_BUF

# Pin location is not assigned
# Pin i2[1]                 :: I_BUF

# Pin location is not assigned
# Pin i2[2]                 :: I_BUF

# Pin location is not assigned
# Pin i2[3]                 :: I_BUF

# Pin location is not assigned
# Pin load_word             :: I_BUF

# Pin location is not assigned
# Pin pll_clk               :: I_BUF

# Pin location is not assigned
# Pin reset                 :: I_BUF

# Pin location is not assigned
# Pin CHANNEL_BOND_SYNC_OUT :: O_BUF

# Pin location is not assigned
# Pin data_out              :: O_SERDES |-> O_BUFT

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: channel_bond_sync_in
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: clk_in
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i1[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i1[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i1[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i1[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i2[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i2[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i2[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i2[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: load_word
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: pll_clk
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: reset
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: data_out
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Location  does not have any mode to begin with

# Module: O_SERDES
# LinkedObject: data_out
# Location: 
# Port: CHANNEL_BOND_SYNC_IN
# Signal: in:TO_BE_DETERMINED
# Location  does not have any mode to begin with

# Module: O_SERDES
# LinkedObject: data_out
# Location: 
# Port: CHANNEL_BOND_SYNC_OUT
# Signal: out:TO_BE_DETERMINED
# Location  does not have any mode to begin with

# Module: O_SERDES
# LinkedObject: data_out
# Location: 
# Port: LOAD_WORD
# Signal: in:f2g_tx_dvalid_{A|B}
# Location  does not have any mode to begin with

# Module: O_SERDES
# LinkedObject: data_out
# Location: 
# Port: OE_IN
# Signal: in:TO_BE_DETERMINED
# Location  does not have any mode to begin with

# Module: O_SERDES
# LinkedObject: data_out
# Location: 
# Port: OE_OUT
# Signal: out:TO_BE_DETERMINED
# Location  does not have any mode to begin with

# Module: O_SERDES
# LinkedObject: data_out
# Location: 
# Port: PLL_LOCK
# Signal: in:TO_BE_DETERMINED
# Location  does not have any mode to begin with

# Module: O_SERDES
# LinkedObject: data_out
# Location: 
# Port: RST
# Signal: in:f2g_trx_reset_n_{A|B}
# Location  does not have any mode to begin with

