#include "Vexp_taylor.h"
#include "verilated.h"
#include <iostream>

#define INT_WIDTH 8
#define FRAC_WIDTH 8
#define FIXED_SCALE (1 << FRAC_WIDTH)

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);

    Vexp_taylor* top = new Vexp_taylor;

    std::cout << "Fixed-point test for exp_taylor\n";
    std::cout << "------------------------------\n";

    for (int i = -4 * FIXED_SCALE; i <= 4 * FIXED_SCALE; i += FIXED_SCALE / 2) {
        top->x = i;
        top->eval();

        double input_real = (double)(i) / FIXED_SCALE;
        double result_real = (double)(top->result) / FIXED_SCALE;

        std::cout << "x = " << input_real
                  << " => result = " << result_real
                  << " (raw: " << top->result << ")\n";
    }

    delete top;
    return 0;
}
