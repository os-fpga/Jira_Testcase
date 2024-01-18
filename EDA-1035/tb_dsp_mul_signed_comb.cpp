#include "dsp_mul_signed_comb/obj_dir/Vco_sim_dsp_mul_signed_comb.h"
int sc_main(int argc, char** argv){
    Verilated::commandArgs(argc,argv);
    Verilated::traceEverOn(true);
    Vco_sim_dsp_mul_signed_comb* top;
    top = new Vco_sim_dsp_mul_signed_comb("top");
        while (!Verilated::gotFinish())    {sc_start(1, SC_NS);}
    return 0;
}
