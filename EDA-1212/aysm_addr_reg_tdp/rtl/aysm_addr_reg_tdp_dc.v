// Asymetric RAM - TDP
// READ_FIRST MODE.
// asym_ram_tdp_read_first_dc.v
module aysm_addr_reg_tdp_dc (clkA,clkB, weA, weB, addrA, addrB, diA, doA, diB, doB);

parameter WIDTHB = 4;
parameter SIZEB = 1024;
parameter ADDRWIDTHB = 10;
parameter WIDTHA = 16;
parameter SIZEA = 256;
parameter ADDRWIDTHA = 8;

input clkA,clkB;
input weA, weB;
input [ADDRWIDTHA-1:0] addrA;
input [ADDRWIDTHB-1:0] addrB;
input [WIDTHA-1:0] diA;
input [WIDTHB-1:0] diB;
output  [WIDTHA-1:0] doA;
output  [WIDTHB-1:0] doB;

reg [ADDRWIDTHA-1:0] addrA_reg;
reg [ADDRWIDTHB-1:0] addrB_reg;

`define max(a,b) {(a) > (b) ? (a) : (b)}
`define min(a,b) {(a) < (b) ? (a) : (b)}

function integer log2;
input integer value;
reg [31:0] shifted;
integer res;
begin
    if (value < 2)
        log2 = value;
    else
    begin
        shifted = value-1;
            for (res=0; shifted>0; res=res+1)
                shifted = shifted>>1;
                log2 = res;
    end
end
endfunction

localparam maxSIZE = `max(SIZEA, SIZEB);
localparam maxWIDTH = `max(WIDTHA, WIDTHB);
localparam minWIDTH = `min(WIDTHA, WIDTHB);
localparam RATIO = maxWIDTH / minWIDTH;
localparam log2RATIO = log2(RATIO);

reg [minWIDTH-1:0] RAM [0:maxSIZE-1];

always @(posedge clkB)
begin

    addrB_reg<=addrB; // Registering the portB address

    if (weB)begin
        RAM[addrB] <= diB;
    end
            
end

always @(posedge clkA)
begin : portA
integer i;
reg [log2RATIO-1:0] lsbaddr ;
addrA_reg <= addrA; // Registering the portA address
for (i=0; i< RATIO; i= i+ 1) 
        begin
            lsbaddr = i;
                    if (weA)begin
                        RAM[{addrA, lsbaddr}] <= diA[(i+1)*minWIDTH-1 -: minWIDTH];
                    end
        end
end



assign doB = RAM[addrB_reg];

assign doA[3:0]= RAM[{addrA_reg, 2'b00}];//doA[4-1:0]= doA[3:0]
assign doA[7:4] = RAM[{addrA_reg, 2'b01}];//doA[(2*4-1):4]= doA[7:4]
assign doA[11:8] = RAM[{addrA_reg, 2'b10}];//doA[(3*4-1):8]= doA[11:8]
assign doA[15:12] = RAM[{addrA_reg, 2'b11}];//doA[(4*4-1):12]= doA[15:12]


endmodule