module INIT_36 #(
    parameter [32767:0] INIT          = {8192{4'hF}},
    parameter [4095:0]  INIT_PARITY   = {1024{4'h0}},
    parameter DATA_WIDTH    = 36
)
(
    input wire clk,
    input wire REN_A,
    input wire REN_B,
    input wire [9:0] address_A,
    input wire [9:0] address_B,
    output wire [DATA_WIDTH-1:0] dout_A,
    output wire [DATA_WIDTH-1:0] dout_B
);

wire [31:0] data_out_A;
wire [31:0] data_out_B;
wire [3:0]  parity_out_A;
wire [3:0]  parity_out_B;

assign dout_A = {parity_out_A, data_out_A};
assign dout_B = {parity_out_B, data_out_B};

// DUT
TDP_RAM36K # (
    .INIT(INIT),
    .INIT_PARITY(INIT_PARITY),
    .WRITE_WIDTH_A(DATA_WIDTH),
    .READ_WIDTH_A(DATA_WIDTH),
    .WRITE_WIDTH_B(DATA_WIDTH),
    .READ_WIDTH_B(DATA_WIDTH)
)
TDP_RAM36K_inst (
    .WEN_A(1'b0),
    .WEN_B(1'b0),
    .REN_A(REN_A),
    .REN_B(REN_B),
    .CLK_A(clk),
    .CLK_B(clk),
    .BE_A({4{1'b0}}),
    .BE_B({4{1'b0}}),
    .ADDR_A({address_A, 5'd0}),
    .ADDR_B({address_B, 5'd0}),
    .WDATA_A({32{1'b0}}),
    .WPARITY_A({4{1'b0}}),
    .WDATA_B({32{1'b0}}),
    .WPARITY_B({4{1'b0}}),
    .RDATA_A(data_out_A[31:0]),
    .RPARITY_A(parity_out_A[3:0]),
    .RDATA_B(data_out_B[31:0]),
    .RPARITY_B(parity_out_B[3:0])
);

endmodule