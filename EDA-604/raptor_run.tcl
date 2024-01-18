
##create_project -force proj_gemini_proto $BUILD_ARTIFACTS/proj_gemini_proto -part xcvu19p-fsva3824-2-e

#create_design c1$BUILD_ARTIFACTS/proj_gemini_proto
create_design USB_Design 

add_include_path ./rtl
add_library_path ./rtl
add_include_path ./rtl/includes
add_library_path ./rtl/includes
add_include_path ./rtl/f1
add_library_path ./rtl/f1
add_include_path ./rtl/f2
add_library_path ./rtl/f2
add_design_file ./rtl/cdnsusbhs_cusb2_defines.v
add_design_file ./rtl/includes/cdnsusbhs_adma_defines.v ./rtl/includes/cdnsusbhs_cusb2_defines.v
add_design_file ./rtl/cdnsusbhs_adma_defines.v ./rtl/cdnsusbhs_bistctrl.v ./rtl/cdnsusbhs_bufg.v ./rtl/cdnsusbhs_chip_usbhs.v ./rtl/cdnsusbhs_clock_ctrl.v ./rtl/cdnsusbhs_clocks_mux.v ./rtl/cdnsusbhs_cusb2_defines.v ./rtl/cdnsusbhs_dpram_in.v ./rtl/cdnsusbhs_dpram_in_buf.v ./rtl/cdnsusbhs_dpram_out.stub.v ./rtl/cdnsusbhs_dpram_out.v ./rtl/cdnsusbhs_dpram_out_buf.v ./rtl/cdnsusbhs_reset_ctrl.v ./rtl/cdnsusbhs_spram.stub.v ./rtl/cdnsusbhs_spram.v ./rtl/cdnsusbhs_spram_buf.v ./rtl/cdnsusbhs_usb2_phy_wrapper.v ./rtl/cdnsusbhs_usbhs_phy.v ./rtl/cdnsusbhs_usbhs_ram.v ./rtl/cdnsusbhs_utmi_glu.v

add_design_file ./rtl/f1/cdnsusbhs_adma_params.v ./rtl/f1/cdn_sd1000_t16ffc_01_vc176_2xa1xd3xe2y2r.stub.v ./rtl/f1/cdnsdru_datasync_synth_example.sv ./rtl/f1/cdnsdru_datasync_v1.v ./rtl/f1/cdnsusbhs_adma.v ./rtl/f1/cdnsusbhs_adma_logic.v ./rtl/f1/cdnsusbhs_adma_sfr.v ./rtl/f1/cdnsusbhs_adma_top.v ./rtl/f1/cdnsusbhs_adpctrl.v ./rtl/f1/cdnsusbhs_aximwrap_ot.v ./rtl/f1/cdnsusbhs_bistctrl.v
add_design_file ./rtl/f1/cdnsusbhs_bit_sync.v
add_design_file ./rtl/f1/cdnsusbhs_clkgate.v
add_design_file ./rtl/f1/cdnsusbhs_clock_ctrl.v
add_design_file ./rtl/f1/cdnsusbhs_common_gen_fifo.v
add_design_file ./rtl/f1/cdnsusbhs_cusb2.v
add_design_file ./rtl/f1/cdnsusbhs_cusb2_adma.v
add_design_file ./rtl/f1/cdnsusbhs_cusb2_params.v
add_design_file ./rtl/f1/cdnsusbhs_data_sync.v
add_design_file ./rtl/f1/cdnsusbhs_data_sync_rx.v
add_design_file ./rtl/f1/cdnsusbhs_data_sync_tx.v
add_design_file ./rtl/f1/cdnsusbhs_devfsm.v
add_design_file ./rtl/f1/cdnsusbhs_dffn_sync.v
add_design_file ./rtl/f1/cdnsusbhs_dff_sync.v
add_design_file ./rtl/f1/cdnsusbhs_ep0.v
add_design_file ./rtl/f1/cdnsusbhs_ep0up.v
add_design_file ./rtl/f1/cdnsusbhs_ep0usb.v
add_design_file ./rtl/f1/cdnsusbhs_epin.v
add_design_file ./rtl/f1/cdnsusbhs_epinup.v
add_design_file ./rtl/f1/cdnsusbhs_epinusb.v
add_design_file ./rtl/f1/cdnsusbhs_epout.v
add_design_file ./rtl/f1/cdnsusbhs_epoutup.v
add_design_file ./rtl/f1/cdnsusbhs_epoutusb.v
add_design_file ./rtl/f1/cdnsusbhs_ifctrlup.v
add_design_file ./rtl/f1/cdnsusbhs_ifctrlusb.v
add_design_file ./rtl/f1/cdnsusbhs_load_sync.v
add_design_file ./rtl/f1/cdnsusbhs_load_sync_rx.v
add_design_file ./rtl/f1/cdnsusbhs_load_sync_tx.v
add_design_file ./rtl/f1/cdnsusbhs_ocp2axi_ms.v
add_design_file ./rtl/f1/cdnsusbhs_ocp2axi_sl.v
add_design_file ./rtl/f1/cdnsusbhs_portctrl.v
add_design_file ./rtl/f1/cdnsusbhs_reset_ctrl.v
add_design_file ./rtl/f1/cdnsusbhs_rxtxctrl.v
add_design_file ./rtl/f1/cdnsusbhs_sfrs.v
add_design_file ./rtl/f1/cdnsusbhs_signal_sync.v
add_design_file ./rtl/f1/cdnsusbhs_signal_sync_rx.v
add_design_file ./rtl/f1/cdnsusbhs_signal_sync_tx.v
add_design_file ./rtl/f1/cdnsusbhs_upmux.v
add_design_file ./rtl/f1/cdnsusbhs_upwrap.v
add_design_file ./rtl/f1/cdnsusbhs_usb2_phy_wrapper.v
add_design_file ./rtl/f1/cdnsusbhs_usbhs.v
add_design_file ./rtl/f1/cdnsusbhs_usbhs_phy.v
add_design_file ./rtl/f1/cdnsusbhs_usbwrap.v
add_design_file ./rtl/f1/cdnsusbhs_wudet.v
add_design_file ./rtl/f1/cdnsusbhs_wudet5k.v
add_design_file ./rtl/f1/cdnsusbhs_wudetutmi.v
add_design_file ./rtl/f1/usb2_pma_top.sv
add_design_file ./rtl/f2/cdnsusbhs_bistctrl.v
add_design_file ./rtl/f2/cdnsusbhs_clock_ctrl.v
add_design_file ./rtl/f2/cdnsusbhs_reset_ctrl.v
add_design_file ./rtl/f2/cdnsusbhs_usb2_phy_wrapper.v
add_design_file ./rtl/f2/cdnsusbhs_usbhs_phy.v
add_design_file ./rtl/f2/clkgate.sv
add_design_file ./rtl/f2/dti_1pr_tm16fcll_128x56_4ww2x_m_shd.v
#add_design_file ./rtl/f2/dti_1pr_tm16fcll_128x56_4ww2x_m_shd_fault.v
add_design_file ./rtl/f2/dti_dp_tm16fcll_512x32_4ww2xoe_m_hc.v

target_device GEMINI
#set_device_size 78x66
set_top_module cdnsusbhs_chip_usbhs
synthesize
packing
global_placement
place
route
bitstream force

