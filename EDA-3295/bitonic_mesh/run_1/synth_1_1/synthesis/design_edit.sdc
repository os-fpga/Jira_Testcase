#############
#
# Fabric clock assignment
#
#############
# This clock need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock clk (Physical port name, clock module: CLK_BUF $clkbuf$system100.$ibuf_clk)
# set_clock_pin -device_clock clk[0] -design_clock $clk_buf_$ibuf_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $clk_buf_$ibuf_clk

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin boot_daddr[0]              :: I_BUF

# Pin location is not assigned
# Pin boot_daddr[1]              :: I_BUF

# Pin location is not assigned
# Pin boot_daddr[10]             :: I_BUF

# Pin location is not assigned
# Pin boot_daddr[11]             :: I_BUF

# Pin location is not assigned
# Pin boot_daddr[12]             :: I_BUF

# Pin location is not assigned
# Pin boot_daddr[13]             :: I_BUF

# Pin location is not assigned
# Pin boot_daddr[2]              :: I_BUF

# Pin location is not assigned
# Pin boot_daddr[3]              :: I_BUF

# Pin location is not assigned
# Pin boot_daddr[4]              :: I_BUF

# Pin location is not assigned
# Pin boot_daddr[5]              :: I_BUF

# Pin location is not assigned
# Pin boot_daddr[6]              :: I_BUF

# Pin location is not assigned
# Pin boot_daddr[7]              :: I_BUF

# Pin location is not assigned
# Pin boot_daddr[8]              :: I_BUF

# Pin location is not assigned
# Pin boot_daddr[9]              :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[0]              :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[1]              :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[10]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[11]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[12]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[13]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[14]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[15]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[16]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[17]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[18]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[19]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[2]              :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[20]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[21]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[22]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[23]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[24]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[25]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[26]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[27]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[28]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[29]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[3]              :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[30]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[31]             :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[4]              :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[5]              :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[6]              :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[7]              :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[8]              :: I_BUF

# Pin location is not assigned
# Pin boot_ddata[9]              :: I_BUF

# Pin location is not assigned
# Pin boot_iaddr[0]              :: I_BUF

# Pin location is not assigned
# Pin boot_iaddr[1]              :: I_BUF

# Pin location is not assigned
# Pin boot_iaddr[10]             :: I_BUF

# Pin location is not assigned
# Pin boot_iaddr[11]             :: I_BUF

# Pin location is not assigned
# Pin boot_iaddr[12]             :: I_BUF

# Pin location is not assigned
# Pin boot_iaddr[13]             :: I_BUF

# Pin location is not assigned
# Pin boot_iaddr[2]              :: I_BUF

# Pin location is not assigned
# Pin boot_iaddr[3]              :: I_BUF

# Pin location is not assigned
# Pin boot_iaddr[4]              :: I_BUF

# Pin location is not assigned
# Pin boot_iaddr[5]              :: I_BUF

# Pin location is not assigned
# Pin boot_iaddr[6]              :: I_BUF

# Pin location is not assigned
# Pin boot_iaddr[7]              :: I_BUF

# Pin location is not assigned
# Pin boot_iaddr[8]              :: I_BUF

# Pin location is not assigned
# Pin boot_iaddr[9]              :: I_BUF

# Pin location is not assigned
# Pin boot_idata[0]              :: I_BUF

# Pin location is not assigned
# Pin boot_idata[1]              :: I_BUF

# Pin location is not assigned
# Pin boot_idata[10]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[11]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[12]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[13]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[14]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[15]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[16]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[17]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[18]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[19]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[2]              :: I_BUF

# Pin location is not assigned
# Pin boot_idata[20]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[21]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[22]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[23]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[24]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[25]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[26]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[27]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[28]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[29]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[3]              :: I_BUF

# Pin location is not assigned
# Pin boot_idata[30]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[31]             :: I_BUF

# Pin location is not assigned
# Pin boot_idata[4]              :: I_BUF

# Pin location is not assigned
# Pin boot_idata[5]              :: I_BUF

# Pin location is not assigned
# Pin boot_idata[6]              :: I_BUF

# Pin location is not assigned
# Pin boot_idata[7]              :: I_BUF

# Pin location is not assigned
# Pin boot_idata[8]              :: I_BUF

# Pin location is not assigned
# Pin boot_idata[9]              :: I_BUF

# Pin location is not assigned
# Pin clk                        :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin processor_select[0]        :: I_BUF

# Pin location is not assigned
# Pin processor_select[1]        :: I_BUF

# Pin location is not assigned
# Pin processor_select[2]        :: I_BUF

# Pin location is not assigned
# Pin processor_select[3]        :: I_BUF

# Pin location is not assigned
# Pin processor_select[4]        :: I_BUF

# Pin location is not assigned
# Pin processor_select[5]        :: I_BUF

# Pin location is not assigned
# Pin processor_select[6]        :: I_BUF

# Pin location is not assigned
# Pin processor_select[7]        :: I_BUF

# Pin location is not assigned
# Pin resetn                     :: I_BUF

# Pin location is not assigned
# Pin reg_file_b_readdataout[0]  :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[1]  :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[10] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[11] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[12] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[13] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[14] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[15] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[16] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[17] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[18] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[19] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[2]  :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[20] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[21] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[22] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[23] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[24] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[25] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[26] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[27] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[28] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[29] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[3]  :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[30] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[31] :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[4]  :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[5]  :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[6]  :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[7]  :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[8]  :: O_BUFT

# Pin location is not assigned
# Pin reg_file_b_readdataout[9]  :: O_BUFT

# Pin location is not assigned
# Pin wrGeneric                  :: O_BUFT

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: boot_daddr[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_daddr[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_daddr[10]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_daddr[11]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_daddr[12]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_daddr[13]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_daddr[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_daddr[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_daddr[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_daddr[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_daddr[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_daddr[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_daddr[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_daddr[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[10]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[11]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[12]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[13]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[14]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[15]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[16]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[17]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[18]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[19]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[20]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[21]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[22]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[23]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[24]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[25]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[26]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[27]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[28]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[29]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[30]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[31]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_ddata[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_iaddr[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_iaddr[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_iaddr[10]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_iaddr[11]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_iaddr[12]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_iaddr[13]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_iaddr[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_iaddr[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_iaddr[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_iaddr[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_iaddr[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_iaddr[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_iaddr[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_iaddr[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[10]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[11]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[12]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[13]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[14]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[15]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[16]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[17]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[18]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[19]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[20]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[21]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[22]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[23]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[24]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[25]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[26]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[27]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[28]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[29]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[30]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[31]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: boot_idata[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: clk
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: processor_select[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: processor_select[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: processor_select[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: processor_select[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: processor_select[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: processor_select[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: processor_select[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: processor_select[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: resetn
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[0]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[1]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[10]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[11]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[12]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[13]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[14]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[15]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[16]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[17]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[18]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[19]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[2]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[20]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[21]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[22]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[23]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[24]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[25]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[26]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[27]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[28]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[29]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[3]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[30]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[31]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[4]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[5]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[6]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[7]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[8]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: reg_file_b_readdataout[9]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: wrGeneric
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

#############
#
# Each gearbox core clock
#
#############
