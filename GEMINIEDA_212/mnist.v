// mnist vivado test verilog code
//
module mnist (
	input wire clk,
	input wire reset,
	input wire [17:0] tdata_i,
	input wire tvalid_i,
	input wire tlast_i,
	output wire [17:0] tdata_o,
	output wire tvalid_o,
	output wire tlast_o
);

wire [17:0] tdata [0:14]; // tdata[0] is the input layer
wire tvalid [0:14];
wire tlast [0:14];

assign tdata[0] = tdata_i;
assign tvalid[0] = tvalid_i;
assign tlast[0] = tlast_i;
assign tdata_o = tdata[14];
assign tvalid_o = tvalid[14];
assign tlast_o = tlast[14];

//conv2d #(.ICHAN(1),.IWIDTH(28),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(5),.WEIGHTS("/home/rsankaranarayanan/design_eval/convd2D_RL/raptor/mnist_00.mem")) mnist_00 (
conv2d #(.ICHAN(1),.IWIDTH(28),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(5)) mnist_00 (
	.clk(clk),
	.reset(reset),
	.tdata_i(tdata[0]),
	.tvalid_i(tvalid[0]),
	.tlast_i(tlast[0]),
	.tdata_o(tdata[1]),
	.tvalid_o(tvalid[1]),
	.tlast_o(tlast[1])
	//.S_AXI_ACLK(clk),
	//.S_AXI_ARESETN(~reset),
	//.S_AXI_AWVALID(1'b0),
	//.S_AXI_BREADY(1'b0),
	//.S_AXI_ARVALID(1'b0),
	//.S_AXI_RREADY(1'b0)
);
//conv2d #(.ICHAN(32),.IWIDTH(26),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(6),.WEIGHTS("mnist_01.mem")) mnist_01 (
conv2d #(.ICHAN(32),.IWIDTH(26),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(6)) mnist_01 (
	.clk(clk),
	.reset(reset),
	.tdata_i(tdata[1]),
	.tvalid_i(tvalid[1]),
	.tlast_i(tlast[1]),
	.tdata_o(tdata[2]),
	.tvalid_o(tvalid[2]),
	.tlast_o(tlast[2])
	//.S_AXI_ACLK(clk),
	//.S_AXI_ARESETN(~reset),
	//.S_AXI_AWVALID(1'b0),
	//.S_AXI_BREADY(1'b0),
	//.S_AXI_ARVALID(1'b0),
	//.S_AXI_RREADY(1'b0)
);
//conv2d #(.ICHAN(32),.IWIDTH(24),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(6),.WEIGHTS("mnist_02.mem")) mnist_02 (
conv2d #(.ICHAN(32),.IWIDTH(24),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(6)) mnist_02 (
	.clk(clk),
	.reset(reset),
	.tdata_i(tdata[2]),
	.tvalid_i(tvalid[2]),
	.tlast_i(tlast[2]),
	.tdata_o(tdata[3]),
	.tvalid_o(tvalid[3]),
	.tlast_o(tlast[3])
	//.S_AXI_ACLK(clk),
	//.S_AXI_ARESETN(~reset),
	//.S_AXI_AWVALID(1'b0),
	//.S_AXI_BREADY(1'b0),
	//.S_AXI_ARVALID(1'b0),
	//.S_AXI_RREADY(1'b0)
);
//conv2d #(.ICHAN(32),.IWIDTH(22),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(7),.WEIGHTS("mnist_03.mem")) mnist_03 (
conv2d #(.ICHAN(32),.IWIDTH(22),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(7)) mnist_03 (
	.clk(clk),
	.reset(reset),
	.tdata_i(tdata[3]),
	.tvalid_i(tvalid[3]),
	.tlast_i(tlast[3]),
	.tdata_o(tdata[4]),
	.tvalid_o(tvalid[4]),
	.tlast_o(tlast[4])
	//.S_AXI_ACLK(clk),
	//.S_AXI_ARESETN(~reset),
	//.S_AXI_AWVALID(1'b0),
	//.S_AXI_BREADY(1'b0),
	//.S_AXI_ARVALID(1'b0),
	//.S_AXI_RREADY(1'b0)
);
//conv2d #(.ICHAN(32),.IWIDTH(20),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(7),.WEIGHTS("mnist_04.mem")) mnist_04 (
conv2d #(.ICHAN(32),.IWIDTH(20),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(7)) mnist_04 (
	.clk(clk),
	.reset(reset),
	.tdata_i(tdata[4]),
	.tvalid_i(tvalid[4]),
	.tlast_i(tlast[4]),
	.tdata_o(tdata[5]),
	.tvalid_o(tvalid[5]),
	.tlast_o(tlast[5])
	//.S_AXI_ACLK(clk),
	//.S_AXI_ARESETN(~reset),
	//.S_AXI_AWVALID(1'b0),
	//.S_AXI_BREADY(1'b0),
	//.S_AXI_ARVALID(1'b0),
	//.S_AXI_RREADY(1'b0)
);
//conv2d #(.ICHAN(32),.IWIDTH(18),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(8),.WEIGHTS("mnist_05.mem")) mnist_05 (
conv2d #(.ICHAN(32),.IWIDTH(18),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(8)) mnist_05 (
	.clk(clk),
	.reset(reset),
	.tdata_i(tdata[5]),
	.tvalid_i(tvalid[5]),
	.tlast_i(tlast[5]),
	.tdata_o(tdata[6]),
	.tvalid_o(tvalid[6]),
	.tlast_o(tlast[6])
	//.S_AXI_ACLK(clk),
	//.S_AXI_ARESETN(~reset),
	//.S_AXI_AWVALID(1'b0),
	//.S_AXI_BREADY(1'b0),
	//.S_AXI_ARVALID(1'b0),
	//.S_AXI_RREADY(1'b0)
);
//conv2d #(.ICHAN(32),.IWIDTH(16),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(9),.WEIGHTS("mnist_06.mem")) mnist_06 (
conv2d #(.ICHAN(32),.IWIDTH(16),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(9)) mnist_06 (
	.clk(clk),
	.reset(reset),
	.tdata_i(tdata[6]),
	.tvalid_i(tvalid[6]),
	.tlast_i(tlast[6]),
	.tdata_o(tdata[7]),
	.tvalid_o(tvalid[7]),
	.tlast_o(tlast[7])
	//.S_AXI_ACLK(clk),
	//.S_AXI_ARESETN(~reset),
	//.S_AXI_AWVALID(1'b0),
	//.S_AXI_BREADY(1'b0),
	//.S_AXI_ARVALID(1'b0),
	//.S_AXI_RREADY(1'b0)
);
//conv2d #(.ICHAN(32),.IWIDTH(14),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(9),.WEIGHTS("mnist_07.mem")) mnist_07 (
conv2d #(.ICHAN(32),.IWIDTH(14),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(9)) mnist_07 (
	.clk(clk),
	.reset(reset),
	.tdata_i(tdata[7]),
	.tvalid_i(tvalid[7]),
	.tlast_i(tlast[7]),
	.tdata_o(tdata[8]),
	.tvalid_o(tvalid[8]),
	.tlast_o(tlast[8])
	//.S_AXI_ACLK(clk),
	//.S_AXI_ARESETN(~reset),
	//.S_AXI_AWVALID(1'b0),
	//.S_AXI_BREADY(1'b0),
	//.S_AXI_ARVALID(1'b0),
	//.S_AXI_RREADY(1'b0)
);
//conv2d #(.ICHAN(32),.IWIDTH(12),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(9),.WEIGHTS("mnist_08.mem")) mnist_08 (
conv2d #(.ICHAN(32),.IWIDTH(12),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(9)) mnist_08 (
	.clk(clk),
	.reset(reset),
	.tdata_i(tdata[8]),
	.tvalid_i(tvalid[8]),
	.tlast_i(tlast[8]),
	.tdata_o(tdata[9]),
	.tvalid_o(tvalid[9]),
	.tlast_o(tlast[9])
	//.S_AXI_ACLK(clk),
	//.S_AXI_ARESETN(~reset),
	//.S_AXI_AWVALID(1'b0),
	//.S_AXI_BREADY(1'b0),
	//.S_AXI_ARVALID(1'b0),
	//.S_AXI_RREADY(1'b0)
);
//conv2d #(.ICHAN(32),.IWIDTH(10),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(10),.WEIGHTS("mnist_09.mem")) mnist_09 (
conv2d #(.ICHAN(32),.IWIDTH(10),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(10)) mnist_09 (
	.clk(clk),
	.reset(reset),
	.tdata_i(tdata[9]),
	.tvalid_i(tvalid[9]),
	.tlast_i(tlast[9]),
	.tdata_o(tdata[10]),
	.tvalid_o(tvalid[10]),
	.tlast_o(tlast[10])
	//.S_AXI_ACLK(clk),
	//.S_AXI_ARESETN(~reset),
	//.S_AXI_AWVALID(1'b0),
	//.S_AXI_BREADY(1'b0),
	//.S_AXI_ARVALID(1'b0),
	//.S_AXI_RREADY(1'b0)
);
//conv2d #(.ICHAN(32),.IWIDTH(8),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(10),.WEIGHTS("mnist_10.mem")) mnist_10 (
conv2d #(.ICHAN(32),.IWIDTH(8),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(10)) mnist_10 (
	.clk(clk),
	.reset(reset),
	.tdata_i(tdata[10]),
	.tvalid_i(tvalid[10]),
	.tlast_i(tlast[10]),
	.tdata_o(tdata[11]),
	.tvalid_o(tvalid[11]),
	.tlast_o(tlast[11])
	//.S_AXI_ACLK(clk),
	//.S_AXI_ARESETN(~reset),
	//.S_AXI_AWVALID(1'b0),
	//.S_AXI_BREADY(1'b0),
	//.S_AXI_ARVALID(1'b0),
	//.S_AXI_RREADY(1'b0)
);
//conv2d #(.ICHAN(32),.IWIDTH(6),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(11),.WEIGHTS("mnist_11.mem")) mnist_11 (
conv2d #(.ICHAN(32),.IWIDTH(6),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(11)) mnist_11 (
	.clk(clk),
	.reset(reset),
	.tdata_i(tdata[11]),
	.tvalid_i(tvalid[11]),
	.tlast_i(tlast[11]),
	.tdata_o(tdata[12]),
	.tvalid_o(tvalid[12]),
	.tlast_o(tlast[12])
	//.S_AXI_ACLK(clk),
	//.S_AXI_ARESETN(~reset),
	//.S_AXI_AWVALID(1'b0),
	//.S_AXI_BREADY(1'b0),
	//.S_AXI_ARVALID(1'b0),
	//.S_AXI_RREADY(1'b0)
);
//conv2d #(.ICHAN(32),.IWIDTH(4),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(12),.WEIGHTS("mnist_12.mem")) mnist_12 (
conv2d #(.ICHAN(32),.IWIDTH(4),.OCHAN(32),.KHEIGHT(3),.KWIDTH(3),.STRIDE(1),.ODECIMAL(12)) mnist_12 (
	.clk(clk),
	.reset(reset),
	.tdata_i(tdata[12]),
	.tvalid_i(tvalid[12]),
	.tlast_i(tlast[12]),
	.tdata_o(tdata[13]),
	.tvalid_o(tvalid[13]),
	.tlast_o(tlast[13])
	//.S_AXI_ACLK(clk),
	//.S_AXI_ARESETN(~reset),
	//.S_AXI_AWVALID(1'b0),
	//.S_AXI_BREADY(1'b0),
	//.S_AXI_ARVALID(1'b0),
	//.S_AXI_RREADY(1'b0)
);
//conv2d #(.ICHAN(128),.IWIDTH(1),.OCHAN(10),.KHEIGHT(1),.KWIDTH(1),.STRIDE(1),.ODECIMAL(13),.WEIGHTS("mnist_13.mem")) mnist_13 (
conv2d #(.ICHAN(128),.IWIDTH(1),.OCHAN(10),.KHEIGHT(1),.KWIDTH(1),.STRIDE(1),.ODECIMAL(13)) mnist_13 (
	.clk(clk),
	.reset(reset),
	.tdata_i(tdata[13]),
	.tvalid_i(tvalid[13]),
	.tlast_i(tlast[13]),
	.tdata_o(tdata[14]),
	.tvalid_o(tvalid[14]),
	.tlast_o(tlast[14])
	//.S_AXI_ACLK(clk),
	//.S_AXI_ARESETN(~reset),
	//.S_AXI_AWVALID(1'b0),
	//.S_AXI_BREADY(1'b0),
	//.S_AXI_ARVALID(1'b0),
	//.S_AXI_RREADY(1'b0)
);
endmodule
