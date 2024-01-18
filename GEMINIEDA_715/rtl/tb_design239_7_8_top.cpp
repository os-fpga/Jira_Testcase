#include "obj_dir/Vco_sim_design239_7_8_top.h"
int sc_main(int argc, char** argv){
    Verilated::commandArgs(argc,argv);
    Verilated::traceEverOn(true);
    Vco_sim_design239_7_8_top* top;
    top = new Vco_sim_design239_7_8_top("top");
        while (!Verilated::gotFinish())    {sc_start(1, SC_NS);}
    return 0;
}
