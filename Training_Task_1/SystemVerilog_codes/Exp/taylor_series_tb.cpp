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
    
    double input_real = 2.0; // Input value in real number
    top->x = input_real * FIXED_SCALE; // Input value (2.0 in fixed-point)
    top->eval();
    double result_real = top->result / static_cast<double>(FIXED_SCALE); // Convert back to real number
    


    std::cout << "x = " << input_real
              << " => result = " << result_real
              << " (raw: " << top->result << ")\n";
    delete top;
    return 0;
}
