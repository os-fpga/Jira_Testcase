`timescale 1ns/1ps
//`include "axi_ram.v"
`include "brams_sim.v"
`include "cells_sim.v"
`include "dsp_sim.v"
`include "simlib.v"
`include "sram1024x18.v"
`include "TDP18K_FIFO.v"
`include "ufifo_ctl.v"
`include "vex_soc.v"
// `timescale 1ns/1ps
//`include "axi_ram.v"

module Tb ();
parameter ADDR_WIDTH = 32;parameter ID_WIDTH = 8;parameter DATA_WIDTH=32;
    reg clock;
    reg reset;

    wire       [ID_WIDTH-1:0]           vexriscv_iBusAxi_ar_payload_id   ;
    wire [ADDR_WIDTH-1:0] vexriscv_iBusAxi_ar_payload_addr ;
    wire [           7:0] vexriscv_iBusAxi_ar_payload_len  ;
    wire [           2:0] vexriscv_iBusAxi_ar_payload_size ;
    wire [           1:0] vexriscv_iBusAxi_ar_payload_burst;
    wire                  vexriscv_iBusAxi_ar_payload_lock ;
    wire [           3:0] vexriscv_iBusAxi_ar_payload_cache;
    wire [           2:0] vexriscv_iBusAxi_ar_payload_prot ;
    wire                  vexriscv_iBusAxi_ar_valid        ;
    wire                  vexriscv_iBusAxi_ar_ready        ;
    wire  [  ID_WIDTH-1:0] vexriscv_iBusAxi_r_payload_id    ;
    wire  [DATA_WIDTH-1:0] vexriscv_iBusAxi_r_payload_data  ;
    wire  [           1:0] vexriscv_iBusAxi_r_payload_resp  ;
    wire                   vexriscv_iBusAxi_r_payload_last  ;
    wire                   vexriscv_iBusAxi_r_valid         ;
    wire                  vexriscv_iBusAxi_r_ready         ;
    reg mem_peripheral_rd_en_debug;
reg [ADDR_WIDTH-1:0]mem_peripheral_rd_addr_debug;
wire [DATA_WIDTH-1:0]mem_peripheral_rd_Data_debug;
wire mem_peripheral_busy_debug;

reg [31:0]Wait_Counter = 'd0;
reg Print_Mem_Data = 'd0;
integer i=0;
wire mem_peripheral_idle;


    initial begin
        reset = 1'b1;
        clock = 1'b0;
        #5;
        reset = 1'b0;
//        #10;
//        reset =1'b1;
//        #10;
//        reset = 1'b0;
    end
    always  #(2.5)     clock = !clock;

    initial begin
        mem_peripheral_rd_en_debug = 1'b0;
        mem_peripheral_rd_addr_debug = 'd0;

       // @(posedge mem_peripheral_rd_en_debug);
       // @()
        $display("At wait statement mem_peripheral_idle = %d",mem_peripheral_idle);
repeat(100)@(posedge clock);
@(mem_peripheral_idle);
$display("At wait statement mem_peripheral_idle = %d",mem_peripheral_idle);
$display("At time = %t",$time);
            for(i=0;i<100;i=i+1)begin
                
                mem_peripheral_rd_en_debug = 1'b1;
                mem_peripheral_rd_addr_debug = i;
                @(posedge clock);
               
                $display("mem_peripheral_rd_Data_debug = %h at mem_peripheral_rd_addr_debug = %d",mem_peripheral_rd_Data_debug,mem_peripheral_rd_addr_debug);
                if(mem_peripheral_rd_addr_debug=='d12) begin
                    if (mem_peripheral_rd_Data_debug==32'h000013a6)begin
                        $display("================================");
                        $display("          Test Passed           ");
                        $display("================================");
                        break;
                    end else begin
                        $display("================================");
                        $display("          Test Failed           ");
                        $display("================================");
                        break;
                    end
                end 
                
            end

    end

    initial begin
        // $dumpfile("tb.vcd");
        // $dumpvars;
        #500000  $finish;
        $display("SoC Simulation Completed");
    end
    vex_soc vex_soc (
        .reset                            (reset                            ), //input wire
        .clock0                              (clock                              ), //input wire
        .vexriscv_iBusAxi_ar_payload_id   (vexriscv_iBusAxi_ar_payload_id   ), //output wire 
        .vexriscv_iBusAxi_ar_payload_addr (vexriscv_iBusAxi_ar_payload_addr ), //output wire [ADDR_WIDTH-1:0]
        .vexriscv_iBusAxi_ar_payload_len  (vexriscv_iBusAxi_ar_payload_len  ), //output wire [7:0]
        .vexriscv_iBusAxi_ar_payload_size (vexriscv_iBusAxi_ar_payload_size ), //output wire [2:0]
        .vexriscv_iBusAxi_ar_payload_burst(vexriscv_iBusAxi_ar_payload_burst), //output wire [1:0]
        .vexriscv_iBusAxi_ar_payload_lock (vexriscv_iBusAxi_ar_payload_lock ), //output wire
        .vexriscv_iBusAxi_ar_payload_cache(vexriscv_iBusAxi_ar_payload_cache), //output wire [3:0]
        .vexriscv_iBusAxi_ar_payload_prot (vexriscv_iBusAxi_ar_payload_prot ), //output wire [2:0]
        .vexriscv_iBusAxi_ar_valid        (vexriscv_iBusAxi_ar_valid        ), //output wire
        .vexriscv_iBusAxi_ar_ready        (vexriscv_iBusAxi_ar_ready        ), //output
        .vexriscv_iBusAxi_r_payload_id    (vexriscv_iBusAxi_r_payload_id    ), //input [ID_WIDTH-1:0]
        .vexriscv_iBusAxi_r_payload_data  (vexriscv_iBusAxi_r_payload_data  ), //input [DATA_WIDTH-1:0]
        .vexriscv_iBusAxi_r_payload_resp  (vexriscv_iBusAxi_r_payload_resp  ), //input[1:0].
        .vexriscv_iBusAxi_r_payload_last  (vexriscv_iBusAxi_r_payload_last  ), //input
        .vexriscv_iBusAxi_r_valid         (vexriscv_iBusAxi_r_valid         ), //input
        .vexriscv_iBusAxi_r_ready         (vexriscv_iBusAxi_r_ready         ),  //output
        .mem_peripheral_rd_en_debug(mem_peripheral_rd_en_debug),
        .mem_peripheral_rd_addr_debug(mem_peripheral_rd_addr_debug),
        .mem_peripheral_rd_Data_debug(mem_peripheral_rd_Data_debug),
        .mem_peripheral_idle(mem_peripheral_idle)
        );

    axi_ram #(
        // Width of data bus in bits
        .DATA_WIDTH     (32    ),
        // Width of address bus in bits
        .ADDR_WIDTH     (16    ),
        // Width of ID signal
        .ID_WIDTH       (8     ),
        // Extra pipeline register on output
        .PIPELINE_OUTPUT(0     )
    ) axi_ram (
        .clk          (clock                              ), //input  wire
        .rst          (reset                            ), //input  wire
        .s_axi_awid   ('d0                              ), //input  wire [ID_WIDTH-1:0]
        .s_axi_awaddr ('d0                              ), //input  wire [ADDR_WIDTH-1:0]
        .s_axi_awlen  ('d0                              ), //input  wire [7:0]
        .s_axi_awsize ('d0                              ), //input  wire [2:0]
        .s_axi_awburst('d0                              ), //input  wire [1:0]
        .s_axi_awlock ('d0                              ), //input  wire
        .s_axi_awcache('d0                              ), //input  wire [3:0]
        .s_axi_awprot ('d0                              ), //input  wire [2:0]
        .s_axi_awvalid('d0                              ), //input  wire
        .s_axi_awready(                                 ), //output wire
        .s_axi_wdata  ('d0                              ), //input  wire [DATA_WIDTH-1:0]
        .s_axi_wstrb  ('d0                              ), //input  wire [STRB_WIDTH-1:0]
        .s_axi_wlast  ('d0                              ), //input  wire
        .s_axi_wvalid ('d0                              ), //input  wire
        .s_axi_wready (                                 ), //output wire
        .s_axi_bid    (                                 ), //output wire [ID_WIDTH-1:0]
        .s_axi_bresp  (                                 ), //output wire [1:0]
        .s_axi_bvalid (                                 ), //output wire
        .s_axi_bready ('d0                              ), //input  wire
        .s_axi_arid   (vexriscv_iBusAxi_ar_payload_id   ), //input  wire [ID_WIDTH-1:0]
        .s_axi_araddr (vexriscv_iBusAxi_ar_payload_addr ), //input  wire [ADDR_WIDTH-1:0]
        .s_axi_arlen  (vexriscv_iBusAxi_ar_payload_len  ), //input  wire [7:0]
        .s_axi_arsize (vexriscv_iBusAxi_ar_payload_size ), //input  wire [2:0]
        .s_axi_arburst(vexriscv_iBusAxi_ar_payload_burst), //input  wire [1:0]
        .s_axi_arlock (vexriscv_iBusAxi_ar_payload_lock ), //input  wire
        .s_axi_arcache(vexriscv_iBusAxi_ar_payload_cache), //input  wire [3:0]
        .s_axi_arprot (vexriscv_iBusAxi_ar_payload_prot ), //input  wire [2:0]
        .s_axi_arvalid(vexriscv_iBusAxi_ar_valid        ), //input  wire
        .s_axi_arready(vexriscv_iBusAxi_ar_ready        ), //output wire
        .s_axi_rid    (vexriscv_iBusAxi_r_payload_id    ), //output wire [ID_WIDTH-1:0]
        .s_axi_rdata  (vexriscv_iBusAxi_r_payload_data  ), //output wire [DATA_WIDTH-1:0]
        .s_axi_rresp  (vexriscv_iBusAxi_r_payload_resp  ), //output wire [1:0]
        .s_axi_rlast  (vexriscv_iBusAxi_r_payload_last  ), //output wire
        .s_axi_rvalid (vexriscv_iBusAxi_r_valid         ), //output wire
        .s_axi_rready (vexriscv_iBusAxi_r_ready         )  //input  wire
    );
endmodule




//=====================================================================================================
module axi_ram #
(
    // Width of data bus in bits
    parameter DATA_WIDTH = 32,
    // Width of address bus in bits
    parameter ADDR_WIDTH = 16,
    // Width of wstrb (width of data bus in words)
    parameter STRB_WIDTH = (DATA_WIDTH/8),
    // Width of ID signal
    parameter ID_WIDTH = 8,
    // Extra pipeline register on output
    parameter PIPELINE_OUTPUT = 0
)
(
    input  wire                   clk,
    input  wire                   rst,

    input  wire [ID_WIDTH-1:0]    s_axi_awid,
    input  wire [ADDR_WIDTH-1:0]  s_axi_awaddr,
    input  wire [7:0]             s_axi_awlen,
    input  wire [2:0]             s_axi_awsize,
    input  wire [1:0]             s_axi_awburst,
    input  wire                   s_axi_awlock,
    input  wire [3:0]             s_axi_awcache,
    input  wire [2:0]             s_axi_awprot,
    input  wire                   s_axi_awvalid,
    output bit                  s_axi_awready,
    input  wire [DATA_WIDTH-1:0]  s_axi_wdata,
    input  wire [STRB_WIDTH-1:0]  s_axi_wstrb,
    input  wire                   s_axi_wlast,
    input  wire                   s_axi_wvalid,
    output bit                   s_axi_wready,
    output bit [ID_WIDTH-1:0]    s_axi_bid,
    output bit [1:0]             s_axi_bresp,
    output bit                   s_axi_bvalid,
    input  wire                   s_axi_bready,
    input  wire [ID_WIDTH-1:0]    s_axi_arid,
    input  wire [ADDR_WIDTH-1:0]  s_axi_araddr,
    input  wire [7:0]             s_axi_arlen,
    input  wire [2:0]             s_axi_arsize,
    input  wire [1:0]             s_axi_arburst,
    input  wire                   s_axi_arlock,
    input  wire [3:0]             s_axi_arcache,
    input  wire [2:0]             s_axi_arprot,
    input  wire                   s_axi_arvalid,
    output bit                    s_axi_arready,
    output bit [ID_WIDTH-1:0]    s_axi_rid,
    output bit [DATA_WIDTH-1:0]  s_axi_rdata,
    output bit [1:0]             s_axi_rresp,
    output bit                   s_axi_rlast,
    output bit                   s_axi_rvalid,
    input  wire                   s_axi_rready
);

parameter VALID_ADDR_WIDTH = ADDR_WIDTH - $clog2(STRB_WIDTH);
parameter WORD_WIDTH = STRB_WIDTH;
parameter WORD_SIZE = DATA_WIDTH/WORD_WIDTH;

// bus width assertions
initial begin
    if (WORD_SIZE * STRB_WIDTH != DATA_WIDTH) begin
        $error("Error: AXI data width not evenly divisble (instance %m)");
        $finish;
    end

    if (2**$clog2(WORD_WIDTH) != WORD_WIDTH) begin
        $error("Error: AXI word width must be even power of two (instance %m)");
        $finish;
    end
end

localparam [0:0]
    READ_STATE_IDLE = 1'd0,
    READ_STATE_BURST = 1'd1;

reg [0:0] read_state_reg = READ_STATE_IDLE, read_state_next;

localparam [1:0]
    WRITE_STATE_IDLE = 2'd0,
    WRITE_STATE_BURST = 2'd1,
    WRITE_STATE_RESP = 2'd2;

reg [1:0] write_state_reg = WRITE_STATE_IDLE, write_state_next;

reg mem_wr_en;
reg mem_rd_en;

reg [ID_WIDTH-1:0] read_id_reg = {ID_WIDTH{1'b0}}, read_id_next;
reg [ADDR_WIDTH-1:0] read_addr_reg = {ADDR_WIDTH{1'b0}}, read_addr_next;
reg [7:0] read_count_reg = 8'd0, read_count_next;
reg [2:0] read_size_reg = 3'd0, read_size_next;
reg [1:0] read_burst_reg = 2'd0, read_burst_next;
reg [ID_WIDTH-1:0] write_id_reg = {ID_WIDTH{1'b0}}, write_id_next;
reg [ADDR_WIDTH-1:0] write_addr_reg = {ADDR_WIDTH{1'b0}}, write_addr_next;
reg [7:0] write_count_reg = 8'd0, write_count_next;
reg [2:0] write_size_reg = 3'd0, write_size_next;
reg [1:0] write_burst_reg = 2'd0, write_burst_next;

reg s_axi_awready_reg = 1'b0, s_axi_awready_next;
reg s_axi_wready_reg = 1'b0, s_axi_wready_next;
reg [ID_WIDTH-1:0] s_axi_bid_reg = {ID_WIDTH{1'b0}}, s_axi_bid_next;
reg s_axi_bvalid_reg = 1'b0, s_axi_bvalid_next;
reg s_axi_arready_reg = 1'b0, s_axi_arready_next;
reg [ID_WIDTH-1:0] s_axi_rid_reg = {ID_WIDTH{1'b0}}, s_axi_rid_next;
reg [DATA_WIDTH-1:0] s_axi_rdata_reg = {DATA_WIDTH{1'b0}}, s_axi_rdata_next;
reg s_axi_rlast_reg = 1'b0, s_axi_rlast_next;
reg s_axi_rvalid_reg = 1'b0, s_axi_rvalid_next;
reg [ID_WIDTH-1:0] s_axi_rid_pipe_reg = {ID_WIDTH{1'b0}};
reg [DATA_WIDTH-1:0] s_axi_rdata_pipe_reg = {DATA_WIDTH{1'b0}};
reg s_axi_rlast_pipe_reg = 1'b0;
reg s_axi_rvalid_pipe_reg = 1'b0;

// (* RAM_STYLE="BLOCK" *)
reg [DATA_WIDTH-1:0] mem[(65540)-1:0];

wire [VALID_ADDR_WIDTH-1:0] s_axi_awaddr_valid = s_axi_awaddr >> (ADDR_WIDTH - VALID_ADDR_WIDTH);
wire [VALID_ADDR_WIDTH-1:0] s_axi_araddr_valid = s_axi_araddr >> (ADDR_WIDTH - VALID_ADDR_WIDTH);
wire [VALID_ADDR_WIDTH-1:0] read_addr_valid = read_addr_reg >> (ADDR_WIDTH - VALID_ADDR_WIDTH);
wire [VALID_ADDR_WIDTH-1:0] write_addr_valid = write_addr_reg >> (ADDR_WIDTH - VALID_ADDR_WIDTH);

assign s_axi_awready = s_axi_awready_reg;
assign s_axi_wready = s_axi_wready_reg;
assign s_axi_bid = s_axi_bid_reg;
assign s_axi_bresp = 2'b00;
assign s_axi_bvalid = s_axi_bvalid_reg;
assign s_axi_arready = s_axi_arready_reg;
assign s_axi_rid = PIPELINE_OUTPUT ? s_axi_rid_pipe_reg : s_axi_rid_reg;
assign s_axi_rdata = PIPELINE_OUTPUT ? s_axi_rdata_pipe_reg : s_axi_rdata_reg;
assign s_axi_rresp = 2'b00;
assign s_axi_rlast = PIPELINE_OUTPUT ? s_axi_rlast_pipe_reg : s_axi_rlast_reg;
assign s_axi_rvalid = PIPELINE_OUTPUT ? s_axi_rvalid_pipe_reg : s_axi_rvalid_reg;

integer i, j;

// initial begin
//     // two nested loops for smaller number of iterations per loop
//     // workaround for synthesizer complaints about large loop counts
//     for (i = 0; i < 2**VALID_ADDR_WIDTH; i = i + 2**(VALID_ADDR_WIDTH/2)) begin
//         for (j = i; j < i + 2**(VALID_ADDR_WIDTH/2); j = j + 1) begin
//             mem[j] = 0;
//         end
//     end
// end

always @* begin
    write_state_next = WRITE_STATE_IDLE;

    mem_wr_en = 1'b0;

    write_id_next = write_id_reg;
    write_addr_next = write_addr_reg;
    write_count_next = write_count_reg;
    write_size_next = write_size_reg;
    write_burst_next = write_burst_reg;

    s_axi_awready_next = 1'b0;
    s_axi_wready_next = 1'b0;
    s_axi_bid_next = s_axi_bid_reg;
    s_axi_bvalid_next = s_axi_bvalid_reg && !s_axi_bready;

    case (write_state_reg)
        WRITE_STATE_IDLE: begin
            s_axi_awready_next = 1'b1;

            if (s_axi_awready && s_axi_awvalid) begin
                write_id_next = s_axi_awid;
                write_addr_next = s_axi_awaddr;
                write_count_next = s_axi_awlen;
                write_size_next = s_axi_awsize < $clog2(STRB_WIDTH) ? s_axi_awsize : $clog2(STRB_WIDTH);
                write_burst_next = s_axi_awburst;

                s_axi_awready_next = 1'b0;
                s_axi_wready_next = 1'b1;
                write_state_next = WRITE_STATE_BURST;
            end else begin
                write_state_next = WRITE_STATE_IDLE;
            end
        end
        WRITE_STATE_BURST: begin
            s_axi_wready_next = 1'b1;

            if (s_axi_wready && s_axi_wvalid) begin
                mem_wr_en = 1'b1;
                if (write_burst_reg != 2'b00) begin
                    write_addr_next = write_addr_reg + (1 << write_size_reg);
                end
                write_count_next = write_count_reg - 1;
                if (write_count_reg > 0) begin
                    write_state_next = WRITE_STATE_BURST;
                end else begin
                    s_axi_wready_next = 1'b0;
                    if (s_axi_bready || !s_axi_bvalid) begin
                        s_axi_bid_next = write_id_reg;
                        s_axi_bvalid_next = 1'b1;
                        s_axi_awready_next = 1'b1;
                        write_state_next = WRITE_STATE_IDLE;
                    end else begin
                        write_state_next = WRITE_STATE_RESP;
                    end
                end
            end else begin
                write_state_next = WRITE_STATE_BURST;
            end
        end
        WRITE_STATE_RESP: begin
            if (s_axi_bready || !s_axi_bvalid) begin
                s_axi_bid_next = write_id_reg;
                s_axi_bvalid_next = 1'b1;
                s_axi_awready_next = 1'b1;
                write_state_next = WRITE_STATE_IDLE;
            end else begin
                write_state_next = WRITE_STATE_RESP;
            end
        end
    endcase
end

always @(posedge clk) begin
    write_state_reg <= write_state_next;

    write_id_reg <= write_id_next;
    write_addr_reg <= write_addr_next;
    write_count_reg <= write_count_next;
    write_size_reg <= write_size_next;
    write_burst_reg <= write_burst_next;

    s_axi_awready_reg <= s_axi_awready_next;
    s_axi_wready_reg <= s_axi_wready_next;
    s_axi_bid_reg <= s_axi_bid_next;
    s_axi_bvalid_reg <= s_axi_bvalid_next;

    for (i = 0; i < WORD_WIDTH; i = i + 1) begin
        if (mem_wr_en & s_axi_wstrb[i]) begin
            mem[write_addr_valid][WORD_SIZE*i +: WORD_SIZE] <= s_axi_wdata[WORD_SIZE*i +: WORD_SIZE];
        end
    end

    if (rst) begin
        write_state_reg <= WRITE_STATE_IDLE;

        s_axi_awready_reg <= 1'b0;
        s_axi_wready_reg <= 1'b0;
        s_axi_bvalid_reg <= 1'b0;
    end
end

always @* begin
    read_state_next = READ_STATE_IDLE;

    mem_rd_en = 1'b0;

    s_axi_rid_next = s_axi_rid_reg;
    s_axi_rlast_next = s_axi_rlast_reg;
    s_axi_rvalid_next = s_axi_rvalid_reg && !(s_axi_rready || (PIPELINE_OUTPUT && !s_axi_rvalid_pipe_reg));

    read_id_next = read_id_reg;
    read_addr_next = read_addr_reg;
    read_count_next = read_count_reg;
    read_size_next = read_size_reg;
    read_burst_next = read_burst_reg;

    s_axi_arready_next = 1'b0;

    case (read_state_reg)
        READ_STATE_IDLE: begin
            s_axi_arready_next = 1'b1;

            if (s_axi_arready && s_axi_arvalid) begin
                read_id_next = s_axi_arid;
                read_addr_next = s_axi_araddr;
                read_count_next = s_axi_arlen;
                read_size_next = s_axi_arsize < $clog2(STRB_WIDTH) ? s_axi_arsize : $clog2(STRB_WIDTH);
                read_burst_next = s_axi_arburst;

                s_axi_arready_next = 1'b0;
                read_state_next = READ_STATE_BURST;
            end else begin
                read_state_next = READ_STATE_IDLE;
            end
        end
        READ_STATE_BURST: begin
            if (s_axi_rready || (PIPELINE_OUTPUT && !s_axi_rvalid_pipe_reg) || !s_axi_rvalid_reg) begin
                mem_rd_en = 1'b1;
                s_axi_rvalid_next = 1'b1;
                s_axi_rid_next = read_id_reg;
                s_axi_rlast_next = read_count_reg == 0;
                if (read_burst_reg != 2'b00) begin
                    read_addr_next = read_addr_reg + (1 << read_size_reg);
                end
                read_count_next = read_count_reg - 1;
                if (read_count_reg > 0) begin
                    read_state_next = READ_STATE_BURST;
                end else begin
                    s_axi_arready_next = 1'b1;
                    read_state_next = READ_STATE_IDLE;
                end
            end else begin
                read_state_next = READ_STATE_BURST;
            end
        end
    endcase
end

always @(posedge clk) begin
    read_state_reg <= read_state_next;

    read_id_reg <= read_id_next;
    read_addr_reg <= read_addr_next;
    read_count_reg <= read_count_next;
    read_size_reg <= read_size_next;
    read_burst_reg <= read_burst_next;

    s_axi_arready_reg <= s_axi_arready_next;
    s_axi_rid_reg <= s_axi_rid_next;
    s_axi_rlast_reg <= s_axi_rlast_next;
    s_axi_rvalid_reg <= s_axi_rvalid_next;

    if (mem_rd_en) begin
        s_axi_rdata_reg <= mem[read_addr_valid];
    end

    if (!s_axi_rvalid_pipe_reg || s_axi_rready) begin
        s_axi_rid_pipe_reg <= s_axi_rid_reg;
        s_axi_rdata_pipe_reg <= s_axi_rdata_reg;
        s_axi_rlast_pipe_reg <= s_axi_rlast_reg;
        s_axi_rvalid_pipe_reg <= s_axi_rvalid_reg;
    end

    if (rst) begin
        read_state_reg <= READ_STATE_IDLE;

        s_axi_arready_reg <= 1'b0;
        s_axi_rvalid_reg <= 1'b0;
        s_axi_rvalid_pipe_reg <= 1'b0;
    end
end


initial begin
	$readmemh("../tb/Prog.hex", mem);
end

endmodule
