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
// Function: Top wrapper file with el2_swerv/mem instantiated inside
// Comments:
//
//********************************************************************************
module el2_swerv_wrapper
import el2_pkg::*;
(
   input logic                             clk,
   input logic                             rst_l,
   input logic                             dbg_rst_l,
   input logic [31:1]                      rst_vec,
   input logic                             nmi_int,
   input logic [31:1]                      nmi_vec,
   input logic [31:1]                      jtag_id,


   output logic [31:0]                     trace_rv_i_insn_ip,
   output logic [31:0]                     trace_rv_i_address_ip,
   output logic                            trace_rv_i_valid_ip,
   output logic                            trace_rv_i_exception_ip,
   output logic [4:0]                      trace_rv_i_ecause_ip,
   output logic                            trace_rv_i_interrupt_ip,
   output logic [31:0]                     trace_rv_i_tval_ip,

   // Bus signals
















































































































































































































































   // clk ratio signals
   input logic                             lsu_bus_clk_en, // Clock ratio b/w cpu core clk & AHB master interface
   input logic                             ifu_bus_clk_en, // Clock ratio b/w cpu core clk & AHB master interface
   input logic                             dbg_bus_clk_en, // Clock ratio b/w cpu core clk & AHB master interface
   input logic                             dma_bus_clk_en, // Clock ratio b/w cpu core clk & AHB slave interface

 // all of these test inputs are brought to top-level; must be tied off based on usage by physical design (ie. icache or not, iccm or not, dccm or not)

   input                                   el2_dccm_ext_in_pkt_t  [8-1:0] dccm_ext_in_pkt,
   input                                   el2_ccm_ext_in_pkt_t  [8-1:0] iccm_ext_in_pkt,
   input                                   el2_ic_data_ext_in_pkt_t  [2-1:0][2-1:0] ic_data_ext_in_pkt,
   input                                   el2_ic_tag_ext_in_pkt_t  [2-1:0] ic_tag_ext_in_pkt,

   input logic                             timer_int,
   input logic                             soft_int,
   input logic [8:1]        extintsrc_req,

   output logic                            dec_tlu_perfcnt0, // toggles when slot0 perf counter 0 has an event inc
   output logic                            dec_tlu_perfcnt1,
   output logic                            dec_tlu_perfcnt2,
   output logic                            dec_tlu_perfcnt3,

   // ports added by the soc team
   input logic                             jtag_tck,    // JTAG clk
   input logic                             jtag_tms,    // JTAG TMS
   input logic                             jtag_tdi,    // JTAG tdi
   input logic                             jtag_trst_n, // JTAG Reset
   output logic                            jtag_tdo,    // JTAG TDO

   input logic [31:4] core_id,

   // external MPC halt/run interface
   input logic                             mpc_debug_halt_req, // Async halt request
   input logic                             mpc_debug_run_req,  // Async run request
   input logic                             mpc_reset_run_req,  // Run/halt after reset
   output logic                            mpc_debug_halt_ack, // Halt ack
   output logic                            mpc_debug_run_ack,  // Run ack
   output logic                            debug_brkpt_status, // debug breakpoint

   input logic                             i_cpu_halt_req,      // Async halt req to CPU
   output logic                            o_cpu_halt_ack,      // core response to halt
   output logic                            o_cpu_halt_status,   // 1'b1 indicates core is halted
   output logic                            o_debug_mode_status, // Core to the PMU that core is in debug mode. When core is in debug mode, the PMU should refrain from sendng a halt or run request
   input logic                             i_cpu_run_req, // Async restart req to CPU
   output logic                            o_cpu_run_ack, // Core response to run req
   input logic                             scan_mode,     // To enable scan mode
   input logic                             mbist_mode     // to enable mbist
);

   logic                             active_l2clk;
   logic                             free_l2clk;

   // DCCM ports
   logic         dccm_wren;
   logic         dccm_rden;
   logic [16 -1:0]         dccm_wr_addr_lo;
   logic [16 -1:0]         dccm_wr_addr_hi;
   logic [16 -1:0]         dccm_rd_addr_lo;
   logic [16 -1:0]         dccm_rd_addr_hi;
   logic [39-1:0]  dccm_wr_data_lo;
   logic [39-1:0]  dccm_wr_data_hi;

   logic [39-1:0]  dccm_rd_data_lo;
   logic [39-1:0]  dccm_rd_data_hi;

   // PIC ports

   // Icache & Itag ports
   logic [31:1]  ic_rw_addr;
   logic [2-1:0]   ic_wr_en  ;     // Which way to write
   logic         ic_rd_en ;


   logic [2-1:0]   ic_tag_valid;   // Valid from the I$ tag valid outside (in flops).

   logic [2-1:0]   ic_rd_hit;      // ic_rd_hit[3:0]
   logic         ic_tag_perr;                       // Ic tag parity error

   logic [5:3]  ic_debug_addr;     // Read/Write addresss to the Icache.
   logic         ic_debug_rd_en;                    // Icache debug rd
   logic         ic_debug_wr_en;                    // Icache debug wr
   logic         ic_debug_tag_array;                // Debug tag array
   logic [2-1:0]   ic_debug_way;   // Debug way. Rd or Wr.

   logic [25:0]  ictag_debug_rd_data;               // Debug icache tag.
   logic [2-1:0][70:0]  ic_wr_data;
   logic [63:0]  ic_rd_data;
   logic [70:0]  ic_debug_rd_data;                  // Data read from Icache. 2x64bits + parity bits. F2 stage. With ECC
   logic [70:0]  ic_debug_wr_data;                  // Debug wr cache.

   logic [2-1:0] ic_eccerr;       // ecc error per bank
   logic [2-1:0] ic_parerr;       // parity error per bank

   logic [63:0]  ic_premux_data;
   logic         ic_sel_premux_data;

   // ICCM ports
   logic [19-1:1]    iccm_rw_addr;
   logic           iccm_wren;
   logic           iccm_rden;
   logic [2:0]     iccm_wr_size;
   logic [77:0]    iccm_wr_data;
   logic           iccm_buf_correct_ecc;
   logic           iccm_correction_state;

   logic [63:0]    iccm_rd_data;
   logic [77:0]    iccm_rd_data_ecc;

   logic        core_rst_l;                         // Core reset including rst_l and dbg_rst_l
   logic        jtag_tdoEn;

   logic        dccm_clk_override;
   logic        icm_clk_override;
   logic        dec_tlu_core_ecc_disable;


   // zero out the signals not presented at the wrapper instantiation level





















































































































































































































































































   logic                   dmi_reg_en;
   logic [6:0]             dmi_reg_addr;
   logic                   dmi_reg_wr_en;
   logic [31:0]            dmi_reg_wdata;
   logic [31:0]            dmi_reg_rdata;

   // Instantiate the el2_swerv core
   el2_swerv  swerv (
                                .clk(clk),
                                .*
                                );

   // Instantiate the mem
   el2_mem   mem (
                             .clk(active_l2clk),
                             .rst_l(core_rst_l),
                             .*
                             );


   //  JTAG/DMI instance
   dmi_wrapper  dmi_wrapper (
    // JTAG signals
    .trst_n      (jtag_trst_n),     // JTAG reset
    .tck         (jtag_tck),        // JTAG clock
    .tms         (jtag_tms),        // Test mode select
    .tdi         (jtag_tdi),        // Test Data Input
    .tdo         (jtag_tdo),        // Test Data Output
    .tdoEnable   (),
    // Processor Signals
    .core_rst_n  (dbg_rst_l),       // Debug reset, active low
    .core_clk    (clk),             // Core clock
    .jtag_id     (jtag_id),         // JTAG ID
    .rd_data     (dmi_reg_rdata),   // Read data from  Processor
    .reg_wr_data (dmi_reg_wdata),   // Write data to Processor
    .reg_wr_addr (dmi_reg_addr),    // Write address to Processor
    .reg_en      (dmi_reg_en),      // Write interface bit to Processor
    .reg_wr_en   (dmi_reg_wr_en),   // Write enable to Processor
    .dmi_hard_reset   ()
   );


endmodule
