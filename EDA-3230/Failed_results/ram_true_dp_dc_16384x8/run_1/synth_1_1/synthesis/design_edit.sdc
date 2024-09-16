#############
#
# Fabric clock assignment
#
#############
# This clock need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock clkA (Physical port name, clock module: CLK_BUF $clkbuf$ram_true_dp_dc_16384x8.$ibuf_clkA)
# set_clock_pin -device_clock clk[0] -design_clock $clk_buf_$ibuf_clkA (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $clk_buf_$ibuf_clkA

# This clock need to route to fabric slot #1
# set_clock_pin -device_clock clk[1] -design_clock clkB (Physical port name, clock module: CLK_BUF $clkbuf$ram_true_dp_dc_16384x8.$ibuf_clkB)
# set_clock_pin -device_clock clk[1] -design_clock $clk_buf_$ibuf_clkB (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[1] -design_clock $clk_buf_$ibuf_clkB

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin addrA[0]  :: I_BUF

# Pin location is not assigned
# Pin addrA[1]  :: I_BUF

# Pin location is not assigned
# Pin addrA[10] :: I_BUF

# Pin location is not assigned
# Pin addrA[11] :: I_BUF

# Pin location is not assigned
# Pin addrA[12] :: I_BUF

# Pin location is not assigned
# Pin addrA[13] :: I_BUF

# Pin location is not assigned
# Pin addrA[2]  :: I_BUF

# Pin location is not assigned
# Pin addrA[3]  :: I_BUF

# Pin location is not assigned
# Pin addrA[4]  :: I_BUF

# Pin location is not assigned
# Pin addrA[5]  :: I_BUF

# Pin location is not assigned
# Pin addrA[6]  :: I_BUF

# Pin location is not assigned
# Pin addrA[7]  :: I_BUF

# Pin location is not assigned
# Pin addrA[8]  :: I_BUF

# Pin location is not assigned
# Pin addrA[9]  :: I_BUF

# Pin location is not assigned
# Pin addrB[0]  :: I_BUF

# Pin location is not assigned
# Pin addrB[1]  :: I_BUF

# Pin location is not assigned
# Pin addrB[10] :: I_BUF

# Pin location is not assigned
# Pin addrB[11] :: I_BUF

# Pin location is not assigned
# Pin addrB[12] :: I_BUF

# Pin location is not assigned
# Pin addrB[13] :: I_BUF

# Pin location is not assigned
# Pin addrB[2]  :: I_BUF

# Pin location is not assigned
# Pin addrB[3]  :: I_BUF

# Pin location is not assigned
# Pin addrB[4]  :: I_BUF

# Pin location is not assigned
# Pin addrB[5]  :: I_BUF

# Pin location is not assigned
# Pin addrB[6]  :: I_BUF

# Pin location is not assigned
# Pin addrB[7]  :: I_BUF

# Pin location is not assigned
# Pin addrB[8]  :: I_BUF

# Pin location is not assigned
# Pin addrB[9]  :: I_BUF

# Pin location is not assigned
# Pin clkA      :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin clkB      :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin dinA[0]   :: I_BUF

# Pin location is not assigned
# Pin dinA[1]   :: I_BUF

# Pin location is not assigned
# Pin dinA[2]   :: I_BUF

# Pin location is not assigned
# Pin dinA[3]   :: I_BUF

# Pin location is not assigned
# Pin dinA[4]   :: I_BUF

# Pin location is not assigned
# Pin dinA[5]   :: I_BUF

# Pin location is not assigned
# Pin dinA[6]   :: I_BUF

# Pin location is not assigned
# Pin dinA[7]   :: I_BUF

# Pin location is not assigned
# Pin dinB[0]   :: I_BUF

# Pin location is not assigned
# Pin dinB[1]   :: I_BUF

# Pin location is not assigned
# Pin dinB[2]   :: I_BUF

# Pin location is not assigned
# Pin dinB[3]   :: I_BUF

# Pin location is not assigned
# Pin dinB[4]   :: I_BUF

# Pin location is not assigned
# Pin dinB[5]   :: I_BUF

# Pin location is not assigned
# Pin dinB[6]   :: I_BUF

# Pin location is not assigned
# Pin dinB[7]   :: I_BUF

# Pin location is not assigned
# Pin weA       :: I_BUF

# Pin location is not assigned
# Pin weB       :: I_BUF

# Pin location is not assigned
# Pin doutA[0]  :: O_BUFT

# Pin location is not assigned
# Pin doutA[1]  :: O_BUFT

# Pin location is not assigned
# Pin doutA[2]  :: O_BUFT

# Pin location is not assigned
# Pin doutA[3]  :: O_BUFT

# Pin location is not assigned
# Pin doutA[4]  :: O_BUFT

# Pin location is not assigned
# Pin doutA[5]  :: O_BUFT

# Pin location is not assigned
# Pin doutA[6]  :: O_BUFT

# Pin location is not assigned
# Pin doutA[7]  :: O_BUFT

# Pin location is not assigned
# Pin doutB[0]  :: O_BUFT

# Pin location is not assigned
# Pin doutB[1]  :: O_BUFT

# Pin location is not assigned
# Pin doutB[2]  :: O_BUFT

# Pin location is not assigned
# Pin doutB[3]  :: O_BUFT

# Pin location is not assigned
# Pin doutB[4]  :: O_BUFT

# Pin location is not assigned
# Pin doutB[5]  :: O_BUFT

# Pin location is not assigned
# Pin doutB[6]  :: O_BUFT

# Pin location is not assigned
# Pin doutB[7]  :: O_BUFT

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: addrA[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrA[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrA[10]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrA[11]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrA[12]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrA[13]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrA[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrA[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrA[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrA[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrA[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrA[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrA[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrA[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrB[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrB[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrB[10]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrB[11]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrB[12]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrB[13]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrB[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrB[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrB[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrB[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrB[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrB[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrB[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: addrB[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: clkA
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: clkB
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinA[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinA[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinA[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinA[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinA[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinA[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinA[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinA[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinB[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinB[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinB[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinB[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinB[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinB[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinB[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dinB[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: weA
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: weB
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutA[0]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutA[1]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutA[2]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutA[3]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutA[4]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutA[5]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutA[6]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutA[7]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutB[0]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutB[1]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutB[2]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutB[3]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutB[4]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutB[5]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutB[6]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: doutB[7]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

#############
#
# Each gearbox core clock
#
#############
