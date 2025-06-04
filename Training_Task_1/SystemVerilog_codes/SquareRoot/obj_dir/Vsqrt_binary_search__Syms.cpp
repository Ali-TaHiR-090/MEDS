// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsqrt_binary_search__pch.h"
#include "Vsqrt_binary_search.h"
#include "Vsqrt_binary_search___024root.h"

// FUNCTIONS
Vsqrt_binary_search__Syms::~Vsqrt_binary_search__Syms()
{
}

Vsqrt_binary_search__Syms::Vsqrt_binary_search__Syms(VerilatedContext* contextp, const char* namep, Vsqrt_binary_search* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(61);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
