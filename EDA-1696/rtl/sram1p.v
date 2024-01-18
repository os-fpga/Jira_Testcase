`timescale 1ns/1ps

module sram1p
    #(
    parameter   SRAM_SIZE         = 2,
    parameter   ADDR_WIDTH        = 8,
    parameter   DATA_WIDTH        = 32
    )(
    input       [ADDR_WIDTH-1:0]  addr,
    input                         we_n,
    input                         ce_n,
    input       [DATA_WIDTH-1:0]  din,
    output reg  [DATA_WIDTH-1:0]  dout,
    
    input                         clk,
    input                         rst_n
    );
    //
    // declare whole signals
    //
    reg         [DATA_WIDTH-1:0]  memory [0:SRAM_SIZE-1];
    wire                          read;
    wire                          write;
    
    //
    //
    //
    assign   write = (~ce_n & ~we_n);
    assign   read  = (~ce_n &  we_n);
    
    //
    //
    //
    always@(posedge clk) begin
       if(write) memory[addr] <= din;
    end
    always@(posedge clk or negedge rst_n) begin
       if(~rst_n) dout <= {{DATA_WIDTH{1'b0}}};
       else if(read) dout <= memory[addr];
       else dout <= {{DATA_WIDTH{1'b0}}};
    end
    
    //
    //
    //
    // function integer clog2;
    //    input integer value;
    //    begin
    //       value = value - 1;
    //       for(clog2=0; value>0; clog2=clog2+1) begin
    //          value = value >> 1;
    //       end
    //    end
    // endfunction
    endmodule
    
    
    