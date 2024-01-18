// SPDX-License-Identifier: Apache-2.0
// Copyright 2020 Western Digital Corporation or its affiliates.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//********************************************************************************
// $Id$
//
// Function: Top wrapper file with eh2_swerv/mem instantiated inside
// Comments:
//
//********************************************************************************
module eh2_swerv_wrapper
import eh2_pkg::*;
//#(
//`include "eh2_param.vh"
//)
 (
   input logic                       clk,
   input logic                       rst_l,
   input logic                       dbg_rst_l,
   input logic [31:1]                rst_vec,
   input logic                       nmi_int,
   input logic [31:1]                nmi_vec,
   input logic [31:1]                jtag_id,


   output logic [1-1:0] [63:0] trace_rv_i_insn_ip,
   output logic [1-1:0] [63:0] trace_rv_i_address_ip,
   output logic [1-1:0] [1:0]  trace_rv_i_valid_ip,
   output logic [1-1:0] [1:0]  trace_rv_i_exception_ip,
   output logic [1-1:0] [4:0]  trace_rv_i_ecause_ip,
   output logic [1-1:0] [1:0]  trace_rv_i_interrupt_ip,
   output logic [1-1:0] [31:0] trace_rv_i_tval_ip,

   // Bus signals






















































































































































































































































   // clk ratio signals
   input logic                       lsu_bus_clk_en, // Clock ratio b/w cpu core clk & AHB master interface
   input logic                       ifu_bus_clk_en, // Clock ratio b/w cpu core clk & AHB master interface
   input logic                       dbg_bus_clk_en, // Clock ratio b/w cpu core clk & AHB master interface
   input logic                       dma_bus_clk_en, // Clock ratio b/w cpu core clk & AHB slave interface

 // all of these test inputs are brought to top-level; must be tied off based on usage by physical design (ie. icache or not, iccm or not, dccm or not)

   input                             eh2_dccm_ext_in_pkt_t  [2-1:0] dccm_ext_in_pkt,
   input                             eh2_ccm_ext_in_pkt_t  [8/4-1:0][1:0][1:0] iccm_ext_in_pkt,
   input                             eh2_ccm_ext_in_pkt_t  [1:0] btb_ext_in_pkt,
   input                             eh2_ic_data_ext_in_pkt_t  [8-1:0][2-1:0] ic_data_ext_in_pkt,
   input                             eh2_ic_tag_ext_in_pkt_t   [8-1:0]                        ic_tag_ext_in_pkt,

   input logic [1-1:0]  timer_int,
   input logic [1-1:0]  soft_int,
   input logic [8:1] extintsrc_req,

   output logic [1-1:0] [1:0] dec_tlu_perfcnt0,                  // toggles when perf counter 0 has an event inc
   output logic [1-1:0] [1:0] dec_tlu_perfcnt1,                  // toggles when perf counter 1 has an event inc
   output logic [1-1:0] [1:0] dec_tlu_perfcnt2,                  // toggles when perf counter 2 has an event inc
   output logic [1-1:0] [1:0] dec_tlu_perfcnt3,                  // toggles when perf counter 3 has an event inc

   // ports added by the soc team
   input logic                       jtag_tck,    // JTAG clk
   input logic                       jtag_tms,    // JTAG TMS
   input logic                       jtag_tdi,    // JTAG tdi
   input logic                       jtag_trst_n, // JTAG Reset
   output logic                      jtag_tdo,    // JTAG TDO

   input logic [31:4]     core_id, // Core ID


   // external MPC halt/run interface
   input logic  [1-1:0] mpc_debug_halt_req, // Async halt request
   input logic  [1-1:0] mpc_debug_run_req,  // Async run request
   input logic  [1-1:0] mpc_reset_run_req,  // Run/halt after reset
   output logic [1-1:0] mpc_debug_halt_ack, // Halt ack
   output logic [1-1:0] mpc_debug_run_ack,  // Run ack
   output logic [1-1:0] debug_brkpt_status, // debug breakpoint

   output logic [1-1:0] dec_tlu_mhartstart, // running harts

   input logic          [1-1:0]         i_cpu_halt_req,      // Async halt req to CPU
   output logic         [1-1:0]         o_cpu_halt_ack,      // core response to halt
   output logic         [1-1:0]         o_cpu_halt_status,   // 1'b1 indicates core is halted
   output logic         [1-1:0]         o_debug_mode_status, // Core to the PMU that core is in debug mode. When core is in debug mode, the PMU should refrain from sendng a halt or run request
   input logic          [1-1:0]         i_cpu_run_req, // Async restart req to CPU
   output logic         [1-1:0]         o_cpu_run_ack, // Core response to run req
   input logic                       scan_mode, // To enable scan mode
   input logic                       mbist_mode // to enable mbist
);

   // DCCM ports
   logic         dccm_wren;
   logic         dccm_rden;
   logic [5-1:0]  dccm_wr_addr_lo;
   logic [5-1:0]  dccm_wr_addr_hi;
   logic [5-1:0]  dccm_rd_addr_lo;
   logic [5-1:0]  dccm_rd_addr_hi;
   logic [39-1:0]  dccm_wr_data_lo;
   logic [39-1:0]  dccm_wr_data_hi;

   logic [39-1:0]  dccm_rd_data_lo;
   logic [39-1:0]  dccm_rd_data_hi;

   // PIC ports

   // Icache & Itag ports
   logic [31:1]  ic_rw_addr;
   logic [8-1:0]   ic_wr_en  ;     // Which way to write
   logic         ic_rd_en ;


   logic [8-1:0]   ic_tag_valid;   // Valid from the I$ tag valid outside (in flops).

   logic [8-1:0]   ic_rd_hit;
   logic         ic_tag_perr;    // Ic tag parity error

   logic [5:3]  ic_debug_addr;      // Read/Write addresss to the Icache.
   logic         ic_debug_rd_en;     // Icache debug rd
   logic         ic_debug_wr_en;     // Icache debug wr
   logic         ic_debug_tag_array; // Debug tag array
   logic [8-1:0]   ic_debug_way;       // Debug way. Rd or Wr.

   logic [2-1:0] [70:0] ic_wr_data;           // Data to fill to the Icache. With ECC
   logic [63:0]                           ic_rd_data;          // Data read from Icache. 2x64bits + parity bits. F2 stage. With ECC
   logic [70:0]                           ic_debug_rd_data;    // Data read from Icache. 2x64bits + parity bits. F2 stage. With ECC
   logic [25:0]                           ictag_debug_rd_data;  // Debug icache tag.
   logic [70:0]                           ic_debug_wr_data;     // Debug wr cache.
   logic [2-1:0]        ic_eccerr;
    //
   logic [2-1:0]        ic_parerr;


   logic [63:0]  ic_premux_data;
   logic         ic_sel_premux_data;

   // ICCM ports
   logic [19-1:1]  iccm_rw_addr;
   logic [1-1:0]iccm_buf_correct_ecc_thr;                // ICCM is doing a single bit error correct cycle
   logic                     iccm_correction_state, iccm_corr_scnd_fetch;
   logic                     iccm_stop_fetch;                     // ICCM hits need to ignored for replacement purposes as we have fetched ahead.. dont want to stop fetch through dma_active as it causes timing issues there

   logic           ifc_select_tid_f1;
   logic           iccm_wren;
   logic           iccm_rden;
   logic [2:0]     iccm_wr_size;
   logic [77:0]    iccm_wr_data;
   logic [63:0]    iccm_rd_data;
   logic [116:0]   iccm_rd_data_ecc;

   // BTB
   eh2_btb_sram_pkt btb_sram_pkt;
   logic [12+6+5-1:0] btb_vbank0_rd_data_f1;
   logic [12+6+5-1:0] btb_vbank1_rd_data_f1;
   logic [12+6+5-1:0] btb_vbank2_rd_data_f1;
   logic [12+6+5-1:0] btb_vbank3_rd_data_f1;
   logic                                              btb_wren;
   logic                                              btb_rden;
   logic [1:0] [5:1]             btb_rw_addr;  // per bank
   logic [1:0] [5:1]             btb_rw_addr_f1;  // per bank
   logic [12+6+5-1:0] btb_sram_wr_data;
   logic [1:0] [6-1:0]                 btb_sram_rd_tag_f1;

   logic           active_l2clk;
   logic           free_l2clk;

   logic        core_rst_l;     // Core reset including rst_l and dbg_rst_l

   logic        dccm_clk_override;
   logic        icm_clk_override;
   logic        dec_tlu_core_ecc_disable;
   logic        btb_clk_override;

   // DMI signals
   logic                   dmi_reg_en;                // read or write
   logic [6:0]             dmi_reg_addr;              // address of DM register
   logic                   dmi_reg_wr_en;             // write enable
   logic [31:0]            dmi_reg_wdata;             // write data
   logic [31:0]            dmi_reg_rdata;             // read data

   // zero out the signals not presented at the wrapper instantiation level

















































































































































































































































































































































   dmi_wrapper  dmi_wrapper (

    // JTAG signals
        .jtag_id        (jtag_id),          // JTAG ID
        .trst_n         (jtag_trst_n),      // JTAG reset
        .tck            (jtag_tck),         // JTAG clock
        .tms            (jtag_tms),         // Test mode select
        .tdi            (jtag_tdi),         // Test Data Input
        .tdo            (jtag_tdo),         // Test Data Output
        .tdoEnable      (),                 // Test Data Output enable, NC

    // Processor Signals
        .core_rst_n     (dbg_rst_l),        // DM reset, active low
        .core_clk       (clk),              // Core clock
        .rd_data        (dmi_reg_rdata),    // Read data from  Processor
        .reg_wr_data    (dmi_reg_wdata),    // Write data to Processor
        .reg_wr_addr    (dmi_reg_addr),     // Write address to Processor
        .reg_en         (dmi_reg_en),       // access enable
        .reg_wr_en      (dmi_reg_wr_en),    // Write enable to Processor
        .dmi_hard_reset ()                  // hard reset of the DTM, NC
    );

   //System Bus Debug Master
logic sb_haddr;
logic sb_hburst;
logic sb_hmastlock;
logic sb_hprot;
logic sb_hsize;
logic sb_htrans;
logic sb_hwrite;
logic sb_hwdata;
logic sb_axi_awready;
logic sb_axi_awid;
logic sb_axi_awaddr;
logic sb_axi_awregion;
logic sb_axi_awlen;
logic sb_axi_awsize;
logic sb_axi_awburst;
logic sb_axi_awlock;
logic sb_axi_awcache;
logic sb_axi_awprot;
logic sb_axi_awqos;
logic sb_hrdata;
logic sb_hready;
logic sb_hresp;



      logic sb_axi_wvalid;
      logic sb_axi_wready;
      logic sb_axi_wdata;
      logic sb_axi_wstrb;
      logic sb_axi_wlast;
      logic sb_axi_bvalid;
      logic sb_axi_bready;
      logic sb_axi_bresp;
      logic  sb_axi_bid;
      logic sb_axi_arvalid;
      logic sb_axi_arready ;
      logic sb_axi_arid;
      logic sb_axi_araddr;
      logic sb_axi_arregion;
      logic sb_axi_arlen;
      logic sb_axi_arsize;
      logic sb_axi_arburst;
      logic sb_axi_arlock;
      logic sb_axi_arcache;
      logic sb_axi_arprot;
      logic sb_axi_arqos;
      logic sb_axi_rvalid;
      logic sb_axi_rready;
      logic  sb_axi_rid;
      logic sb_axi_rdata;
      logic sb_axi_rresp;
      logic sb_axi_rlast;
      logic lsu_hmastlock;



logic dma_haddr;
logic dma_hburst;
logic dma_hmastlock;
logic dma_hprot;
logic dma_hsize;
logic dma_htrans;
logic dma_hwrite;
logic dma_hwdata;
logic dma_hreadyin;
logic dma_hsel;
logic dma_hrdata;
logic dma_hreadyout;
logic dma_hresp;

logic lsu_bus_clk_en;
logic ifu_bus_clk_en;
logic dbg_bus_clk_en;
logic dma_bus_clk_en;
logic dmi_reg_en;   
logic dmi_reg_addr; 
logic dmi_reg_wr_en;
logic dmi_reg_wdata;
logic dmi_reg_rdata;



logic  haddr     ;
logic  hburst;
logic  hmastlock;
logic  hprot;
logic  hsize;
logic  htrans;
logic  hwrite;
logic  hrdata;
logic  hready;
logic  hresp;

   // LSU AHB Master
logic lsu_haddr      ;
logic lsu_hburst;
logic lsu_hmastl;
logic lsu_hprot;
logic lsu_hsize;
logic lsu_htrans;
logic lsu_hwrite;
logic lsu_hwdata;

logic lsu_hrdata;
logic lsu_hready;

logic lsu_hresp;
logic dma_axi_awvalid;
logic dma_axi_awready;
logic    dma_axi_awid;
logic dma_axi_awaddr;
logic dma_axi_awsize;
logic dma_axi_awprot;
logic dma_axi_awlen;
logic dma_axi_awburst;
logic dma_axi_wvalid;
logic dma_axi_wready;
logic dma_axi_wdata;
logic dma_axi_wstrb;
logic dma_axi_wlast;
logic dma_axi_bvalid;
logic dma_axi_bready;
logic dma_axi_bresp;
logic    dma_axi_bid;

logic dma_axi_arvalid;
logic dma_axi_arready;
logic    dma_axi_arid;
logic dma_axi_araddr;
logic dma_axi_arsize;
logic dma_axi_arprot;
logic dma_axi_arlen;
logic dma_axi_arburst;

logic dma_axi_rvalid;
logic dma_axi_rready;
logic   dma_axi_rid;
logic dma_axi_rdata;
logic dma_axi_rresp;
logic dma_axi_rlast;



      logic lsu_axi_awvalid; 
      logic lsu_axi_awready;
      logic lsu_axi_awid;
      logic lsu_axi_awaddr;
      logic lsu_axi_awregio;
      logic lsu_axi_awlen;
      logic lsu_axi_awsize;
      logic lsu_axi_awburst;
      logic lsu_axi_awlock;
      logic lsu_axi_awcache;
      logic lsu_axi_awprot;
      logic lsu_axi_awqos;
      logic lsu_axi_wvalid;
      logic lsu_axi_wready;
      logic lsu_axi_wdata;
      logic lsu_axi_wstrb;
      logic lsu_axi_wlast;
      logic lsu_axi_bvalid;
      logic lsu_axi_bready;
      logic lsu_axi_bresp;
      logic lsu_axi_bid;
      logic lsu_axi_arvalid;
      logic lsu_axi_arready;
      logic lsu_axi_arid     ;
      logic lsu_axi_araddr;
      logic lsu_axi_arregio;
      logic lsu_axi_arlen;
      logic lsu_axi_arsize;
      logic lsu_axi_arburst;
      logic lsu_axi_arlock;
      logic lsu_axi_arcache;
      logic lsu_axi_arprot;
      logic lsu_axi_arqos;
      logic lsu_axi_rvalid;
      logic lsu_axi_rready;
      logic  lsu_axi_rid;
      logic lsu_axi_rdata;
      logic lsu_axi_rresp;
      logic lsu_axi_rlast;
      logic lsu_axi_awid;
      logic lsu_axi_bid;
      logic lsu_axi_arid;
      logic lsu_axi_rid;
      logic lsu_axi_awregion;
      logic lsu_axi_arregion;
      logic ifu_axi_awvalid   ;
      logic ifu_axi_awready;
      logic ifu_axi_awaddr;
      logic ifu_axi_awregion;
      logic ifu_axi_awlen;
      logic ifu_axi_awsize;
      logic ifu_axi_awburst;
      logic ifu_axi_awlock;
      logic ifu_axi_awcache;
      logic ifu_axi_awprot;
      logic ifu_axi_awqos;
      logic ifu_axi_wvalid;
      logic ifu_axi_wready;
      logic ifu_axi_wdata;
      logic ifu_axi_wstrb;
      logic ifu_axi_wlast;
      logic ifu_axi_bvalid;
      logic ifu_axi_bready;
      logic ifu_axi_bresp;
      logic ifu_axi_arvalid;
      logic ifu_axi_arready;
      logic ifu_axi_araddr;
      logic ifu_axi_arregion;
      logic ifu_axi_arlen;
      logic ifu_axi_arsize;
      logic ifu_axi_arburst;
      logic ifu_axi_arlock;
      logic ifu_axi_arcache;
      logic ifu_axi_arprot;
      logic ifu_axi_arqos;
      logic ifu_axi_rvalid;
      logic ifu_axi_rready;
      logic ifu_axi_rdata;
      logic ifu_axi_rresp;
      logic ifu_axi_rlast;
      logic ifu_axi_awid;
      logic ifu_axi_bid;
      logic ifu_axi_arid;
      logic ifu_axi_rid;
      logic sb_axi_awvalid;




   // Instantiate the eh2_swerv core
   eh2_swerv  swerv (
                                .*
                               );

   // Instantiate the mem
   eh2_mem  mem (
        .clk(active_l2clk),
        .rst_l(core_rst_l),
        .*
        );








endmodule

