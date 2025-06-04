#include "Vsqrt_binary_search.h"
#include "verilated.h"
#include <iostream>

#define INT_WIDTH 8
#define FRAC_WIDTH 8
#define FIXED_SCALE (1 << FRAC_WIDTH)

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vsqrt_binary_search* top = new Vsqrt_binary_search;

    int test_values[] = {5, 1, 2, 4, 9, 16, 25, 100}; // Integers to test sqrt
    const int num_tests = sizeof(test_values) / sizeof(test_values[0]);

    for (int t = 0; t < num_tests; ++t) {
        int input_val = test_values[t];
        int fixed_input = input_val * FIXED_SCALE;

        // Set input
        top->x = fixed_input;
        top->start = 1;
        top->clk = 0;
        top->eval();
        top->clk = 1;
        top->eval();
        top->start = 0;

        // Run clock until valid
        while (!top->valid) {
            top->clk = 0;
            top->eval();
            top->clk = 1;
            top->eval();
        }

        double input_real = (double)(fixed_input) / FIXED_SCALE;
        double result_real = (double)(top->sqrt) / FIXED_SCALE;

        std::cout << "x = " << input_real
                  << " => sqrt ≈ " << result_real
                  << " (raw: " << top->sqrt << ")\n";
    }

    delete top;
    return 0;
}
