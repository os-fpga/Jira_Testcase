#############
#
# Fabric clock assignment
#
#############
# This clock need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock clock (Physical port name, clock module: CLK_BUF $clkbuf$wrapper_multi_enc_decx2x4.$ibuf_clock)
# set_clock_pin -device_clock clk[0] -design_clock $clk_buf_$ibuf_clock (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $clk_buf_$ibuf_clock

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin clock                 :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin datain_temp[0]        :: I_BUF

# Pin location is not assigned
# Pin datain_temp[1]        :: I_BUF

# Pin location is not assigned
# Pin datain_temp[10]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[100]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[101]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[102]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[103]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[104]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[105]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[106]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[107]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[108]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[109]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[11]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[110]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[111]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[112]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[113]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[114]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[115]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[116]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[117]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[118]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[119]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[12]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[120]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[121]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[122]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[123]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[124]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[125]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[126]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[127]      :: I_BUF

# Pin location is not assigned
# Pin datain_temp[13]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[14]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[15]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[16]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[17]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[18]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[19]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[2]        :: I_BUF

# Pin location is not assigned
# Pin datain_temp[20]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[21]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[22]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[23]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[24]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[25]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[26]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[27]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[28]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[29]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[3]        :: I_BUF

# Pin location is not assigned
# Pin datain_temp[30]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[31]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[32]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[33]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[34]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[35]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[36]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[37]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[38]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[39]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[4]        :: I_BUF

# Pin location is not assigned
# Pin datain_temp[40]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[41]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[42]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[43]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[44]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[45]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[46]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[47]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[48]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[49]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[5]        :: I_BUF

# Pin location is not assigned
# Pin datain_temp[50]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[51]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[52]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[53]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[54]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[55]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[56]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[57]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[58]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[59]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[6]        :: I_BUF

# Pin location is not assigned
# Pin datain_temp[60]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[61]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[62]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[63]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[64]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[65]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[66]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[67]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[68]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[69]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[7]        :: I_BUF

# Pin location is not assigned
# Pin datain_temp[70]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[71]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[72]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[73]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[74]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[75]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[76]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[77]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[78]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[79]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[8]        :: I_BUF

# Pin location is not assigned
# Pin datain_temp[80]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[81]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[82]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[83]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[84]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[85]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[86]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[87]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[88]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[89]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[9]        :: I_BUF

# Pin location is not assigned
# Pin datain_temp[90]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[91]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[92]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[93]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[94]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[95]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[96]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[97]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[98]       :: I_BUF

# Pin location is not assigned
# Pin datain_temp[99]       :: I_BUF

# Pin location is not assigned
# Pin reset                 :: I_BUF

# Pin location is not assigned
# Pin select_datain_temp[0] :: I_BUF

# Pin location is not assigned
# Pin select_datain_temp[1] :: I_BUF

# Pin location is not assigned
# Pin dataout_temp[0]       :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[1]       :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[10]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[100]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[101]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[102]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[103]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[104]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[105]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[106]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[107]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[108]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[109]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[11]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[110]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[111]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[112]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[113]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[114]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[115]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[116]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[117]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[118]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[119]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[12]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[120]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[121]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[122]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[123]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[124]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[125]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[126]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[127]     :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[13]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[14]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[15]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[16]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[17]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[18]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[19]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[2]       :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[20]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[21]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[22]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[23]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[24]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[25]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[26]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[27]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[28]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[29]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[3]       :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[30]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[31]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[32]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[33]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[34]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[35]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[36]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[37]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[38]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[39]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[4]       :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[40]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[41]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[42]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[43]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[44]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[45]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[46]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[47]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[48]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[49]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[5]       :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[50]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[51]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[52]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[53]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[54]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[55]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[56]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[57]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[58]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[59]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[6]       :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[60]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[61]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[62]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[63]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[64]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[65]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[66]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[67]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[68]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[69]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[7]       :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[70]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[71]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[72]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[73]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[74]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[75]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[76]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[77]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[78]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[79]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[8]       :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[80]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[81]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[82]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[83]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[84]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[85]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[86]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[87]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[88]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[89]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[9]       :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[90]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[91]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[92]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[93]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[94]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[95]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[96]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[97]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[98]      :: O_BUFT

# Pin location is not assigned
# Pin dataout_temp[99]      :: O_BUFT

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: clock
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[10]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[100]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[101]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[102]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[103]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[104]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[105]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[106]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[107]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[108]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[109]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[11]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[110]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[111]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[112]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[113]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[114]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[115]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[116]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[117]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[118]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[119]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[12]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[120]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[121]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[122]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[123]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[124]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[125]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[126]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[127]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[13]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[14]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[15]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[16]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[17]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[18]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[19]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[20]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[21]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[22]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[23]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[24]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[25]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[26]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[27]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[28]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[29]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[30]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[31]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[32]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[33]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[34]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[35]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[36]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[37]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[38]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[39]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[40]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[41]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[42]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[43]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[44]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[45]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[46]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[47]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[48]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[49]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[50]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[51]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[52]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[53]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[54]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[55]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[56]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[57]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[58]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[59]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[60]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[61]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[62]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[63]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[64]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[65]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[66]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[67]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[68]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[69]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[70]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[71]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[72]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[73]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[74]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[75]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[76]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[77]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[78]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[79]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[80]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[81]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[82]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[83]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[84]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[85]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[86]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[87]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[88]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[89]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[90]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[91]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[92]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[93]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[94]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[95]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[96]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[97]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[98]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: datain_temp[99]
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

# Module: I_BUF
# LinkedObject: select_datain_temp[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: select_datain_temp[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[0]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[1]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[10]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[100]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[101]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[102]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[103]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[104]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[105]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[106]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[107]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[108]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[109]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[11]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[110]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[111]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[112]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[113]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[114]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[115]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[116]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[117]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[118]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[119]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[12]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[120]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[121]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[122]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[123]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[124]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[125]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[126]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[127]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[13]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[14]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[15]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[16]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[17]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[18]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[19]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[2]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[20]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[21]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[22]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[23]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[24]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[25]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[26]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[27]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[28]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[29]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[3]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[30]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[31]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[32]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[33]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[34]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[35]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[36]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[37]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[38]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[39]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[4]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[40]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[41]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[42]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[43]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[44]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[45]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[46]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[47]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[48]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[49]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[5]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[50]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[51]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[52]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[53]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[54]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[55]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[56]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[57]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[58]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[59]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[6]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[60]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[61]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[62]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[63]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[64]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[65]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[66]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[67]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[68]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[69]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[7]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[70]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[71]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[72]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[73]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[74]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[75]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[76]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[77]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[78]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[79]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[8]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[80]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[81]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[82]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[83]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[84]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[85]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[86]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[87]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[88]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[89]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[9]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[90]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[91]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[92]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[93]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[94]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[95]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[96]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[97]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[98]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dataout_temp[99]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

#############
#
# Each gearbox core clock
#
#############
