#############
#
# Fabric clock assignment
#
#############
# This clock is only used by gearbox, does not need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock clkGHz (Physical port name, clock module: CLK_BUF clock_buffer)

# This clock need to route to fabric slot #1
# set_clock_pin -device_clock clk[1] -design_clock data_i (Physical port name, clock module: I_SERDES input_data_serdes)
# set_clock_pin -device_clock clk[1] -design_clock fabric_clk_div (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[1] -design_clock fabric_clk_div

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin bitslip_ctrl_n :: I_BUF

# Pin location is not assigned
# Pin clkGHz         :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin data_o         :: O_SERDES |-> O_DELAY |-> O_BUFT

# Pin location is not assigned
# Pin data_i         :: I_BUF |-> I_DELAY |-> I_SERDES

# Pin location is not assigned
# Pin enable_n       :: I_BUF

# Pin location is not assigned
# Pin ready          :: O_BUFT

# Pin location is not assigned
# Pin reset          :: I_BUF

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: bitslip_ctrl_n
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: clkGHz
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: data_o
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_DELAY
# LinkedObject: data_o
# Location: 
# Port: DLY_ADJ
# Signal: in:rule=half-first:f2g_trx_dly_adj
# Skip reason: Location  does not have any mode to begin with

# Module: O_DELAY
# LinkedObject: data_o
# Location: 
# Port: DLY_INCDEC
# Signal: in:rule=half-first:f2g_trx_dly_inc
# Skip reason: Location  does not have any mode to begin with

# Module: O_DELAY
# LinkedObject: data_o
# Location: 
# Port: DLY_LOAD
# Signal: in:rule=half-first:f2g_trx_dly_ld
# Skip reason: Location  does not have any mode to begin with

# Module: O_DELAY
# LinkedObject: data_o
# Location: 
# Port: DLY_TAP_VALUE
# Signal: out:rule=half-first:g2f_trx_dly_tap
# Skip reason: Location  does not have any mode to begin with

# Module: O_SERDES
# LinkedObject: data_o
# Location: 
# Port: CHANNEL_BOND_SYNC_IN
# Signal: in:TO_BE_DETERMINED
# Skip reason: Location  does not have any mode to begin with

# Module: O_SERDES
# LinkedObject: data_o
# Location: 
# Port: CHANNEL_BOND_SYNC_OUT
# Signal: out:TO_BE_DETERMINED
# Skip reason: Location  does not have any mode to begin with

# Module: O_SERDES
# LinkedObject: data_o
# Location: 
# Port: DATA_VALID
# Signal: in:f2g_tx_dvalid_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_SERDES
# LinkedObject: data_o
# Location: 
# Port: OE_IN
# Signal: in:TO_BE_DETERMINED
# Skip reason: Location  does not have any mode to begin with

# Module: O_SERDES
# LinkedObject: data_o
# Location: 
# Port: OE_OUT
# Signal: out:TO_BE_DETERMINED
# Skip reason: Location  does not have any mode to begin with

# Module: O_SERDES
# LinkedObject: data_o
# Location: 
# Port: PLL_LOCK
# Signal: in:TO_BE_DETERMINED
# Skip reason: Location  does not have any mode to begin with

# Module: O_SERDES
# LinkedObject: data_o
# Location: 
# Port: RST
# Signal: in:f2g_trx_reset_n_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: data_i
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_DELAY
# LinkedObject: data_i
# Location: 
# Port: DLY_ADJ
# Signal: in:rule=half-first:f2g_trx_dly_adj
# Skip reason: Location  does not have any mode to begin with

# Module: I_DELAY
# LinkedObject: data_i
# Location: 
# Port: DLY_INCDEC
# Signal: in:rule=half-first:f2g_trx_dly_inc
# Skip reason: Location  does not have any mode to begin with

# Module: I_DELAY
# LinkedObject: data_i
# Location: 
# Port: DLY_LOAD
# Signal: in:rule=half-first:f2g_trx_dly_ld
# Skip reason: Location  does not have any mode to begin with

# Module: I_DELAY
# LinkedObject: data_i
# Location: 
# Port: DLY_TAP_VALUE
# Signal: out:rule=half-first:g2f_trx_dly_tap
# Skip reason: Location  does not have any mode to begin with

# Module: I_SERDES
# LinkedObject: data_i
# Location: 
# Port: BITSLIP_ADJ
# Signal: in:rule=half-first:f2g_rx_bitslip_adj
# Skip reason: Location  does not have any mode to begin with

# Module: I_SERDES
# LinkedObject: data_i
# Location: 
# Port: DATA_VALID
# Signal: out:g2f_rx_dvalid_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_SERDES
# LinkedObject: data_i
# Location: 
# Port: DPA_ERROR
# Signal: out:rule=half-first:g2f_rx_dpa_error
# Skip reason: Location  does not have any mode to begin with

# Module: I_SERDES
# LinkedObject: data_i
# Location: 
# Port: DPA_LOCK
# Signal: out:rule=half-first:g2f_rx_dpa_lock
# Skip reason: Location  does not have any mode to begin with

# Module: I_SERDES
# LinkedObject: data_i
# Location: 
# Port: EN
# Signal: in:TO_BE_DETERMINED
# Skip reason: Location  does not have any mode to begin with

# Module: I_SERDES
# LinkedObject: data_i
# Location: 
# Port: RST
# Signal: in:f2g_trx_reset_n_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: enable_n
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: ready
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: reset
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

#############
#
# Each gearbox core clock
#
#############
# Module: O_DELAY
# Name: counter_o_delay
# Location: 
# Port: CLK_IN
# Net: clkGHz_clkbuf
# Fail reason: Location is invalid

# Module: O_SERDES
# Name: counter_o_serdes
# Location: 
# Port: CLK_IN
# Net: clkGHz_clkbuf
# Fail reason: Location is invalid

# Module: I_DELAY
# Name: input_data_delay
# Location: 
# Port: CLK_IN
# Net: clkGHz_clkbuf
# Fail reason: Location is invalid

# Module: I_SERDES
# Name: input_data_serdes
# Location: 
# Port: CLK_IN
# Net: clkGHz_clkbuf
# Fail reason: Location is invalid

