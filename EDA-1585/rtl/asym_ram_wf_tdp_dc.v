// Asymetric RAM - TDP

module asym_ram_wf_tdp_dc (clk, weA, weB, addrA, addrB, diA, doA, diB, doB);

parameter WIDTHB = 4;
parameter SIZEB = 1024;
parameter ADDRWIDTHB = 10;
parameter WIDTHA = 16;
parameter SIZEA = 256;
parameter ADDRWIDTHA = 8;

input clk;
input weA, weB;
input [ADDRWIDTHA-1:0] addrA;
input [ADDRWIDTHB-1:0] addrB;
input [WIDTHA-1:0] diA;
input [WIDTHB-1:0] diB;
output reg [WIDTHA-1:0] doA;
output reg [WIDTHB-1:0] doB;

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

always @(posedge clk)
begin
        if (weB)begin
            RAM[addrB] <= diB;
            doB <= diB;
        end
        else
            doB <= RAM[addrB];
end

always @(posedge clk)
begin : portA
integer i;
reg [log2RATIO-1:0] lsbaddr ;
    for (i=0; i< RATIO; i= i+ 1) 
    begin
        lsbaddr = i;
                if (weA)begin
                    RAM[{addrA, lsbaddr}] <= diA[(i+1)*minWIDTH-1 -: minWIDTH];
                    doA[(i+1)*minWIDTH -1 -: minWIDTH] <= diA[(i+1)*minWIDTH-1 -: minWIDTH];
                end
                else
                    doA[(i+1)*minWIDTH -1 -: minWIDTH] <= RAM[{addrA, lsbaddr}];
    end
end


endmodule
