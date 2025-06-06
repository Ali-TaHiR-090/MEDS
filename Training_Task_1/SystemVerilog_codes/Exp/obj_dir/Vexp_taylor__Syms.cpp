// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vexp_taylor__pch.h"
#include "Vexp_taylor.h"
#include "Vexp_taylor___024root.h"

// FUNCTIONS
Vexp_taylor__Syms::~Vexp_taylor__Syms()
{
}

Vexp_taylor__Syms::Vexp_taylor__Syms(VerilatedContext* contextp, const char* namep, Vexp_taylor* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(33);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
