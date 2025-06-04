# Key Takeaways: FSM Design, FPGA, and Verilog Basics

## 1. Finite State Machine (FSM) Design
- **Moore vs. Mealy Machines**:
  - **Moore**: Outputs depend only on the current state (stable, no glitches).
  - **Mealy**: Outputs depend on current state + inputs (shorter combinational paths but prone to glitches).
- **State Encoding Tradeoffs**:
  - **Binary Encoding**: Minimizes flip-flops (log2(N) bits for N states).
  - **One-Hot Encoding**: 1 bit per state (simpler logic, more flip-flops).
  - **Output Encoding**: Directly embed outputs in state bits (only for Moore machines).
- **Traffic Light Controller Example**:
  - 4 states: `S0` (Green A/Red B), `S1` (Yellow A/Red B), `S2` (Red A/Green B), `S3` (Red A/Yellow B).
  - Transitions based on traffic sensors (`ta`, `tb`) and timers.
  - Asynchronous reset for immediate initialization.

## 2. Hardware Implementation
- **Combinational Logic**:
  - Next-state logic: Derived from transition tables (e.g., `S_prime = S1 XOR S0`).
  - Output logic: Directly mapped from state bits (e.g., `La1 = S1` for green light).
- **Timing Considerations**:
  - Propagation delays in combinational paths.
  - Asynchronous reset prioritizes safety (no clock wait).

## 3. FPGA Fundamentals
- **FPGA Architecture**:
  - Reconfigurable logic blocks (LUTs) + programmable interconnects.
  - Specialized blocks (e.g., multipliers, memory) for efficiency.
- **Design Flow**:
  1. **HDL Description** (Verilog/VHDL).
  2. **Synthesis**: Convert HDL to LUTs/flip-flops.
  3. **Place & Route**: Map logic to FPGA resources.
  4. **Bitstream Generation**: Configure FPGA.


### Notes:
- Focused on technical details (FSM design, FPGA workflow, Verilog syntax).
- Excluded non-technical content (e.g., lab logistics, Q&A interruptions).
- Structured hierarchically for readability. Let me know if you'd like to expand any section!