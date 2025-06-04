# Key Takeaways: Sequential Logic & Memory Design

## 1. **Sequential Logic Fundamentals**
   - **Stateful Systems**: 
     - Sequential circuits depend on current inputs **and past states** (unlike combinational logic).
     - Built using **latches/flip-flops** for state storage.
   - **Finite State Machines (FSMs)**:
     - Model systems with discrete states (e.g., traffic lights, locks).
     - Components: States, inputs, outputs, transition rules, output logic.
     - **Example**: Traffic light cycles through states (Green → Yellow → Red → Red/Yellow) synchronously.

## 2. **Memory Elements**
   - **Latches vs. Flip-Flops**:
     - **Latch**: Level-triggered (transparent when enable=1). Problematic for FSMs due to mid-cycle state changes.
     - **Flip-Flop**: Edge-triggered (captures input **only** at clock edges). Built using two latches.
   - **D Flip-Flop**:
     - Stores input `D` at **rising clock edge**, holds value otherwise.
     - Critical for FSMs to ensure stable states during clock cycles.

## 3. **Memory Design**
   - **Registers**:
     - Group of D flip-flops (e.g., 4-bit register stores 4 bits in parallel).
     - **Write Enable**: Controls when data is written (synchronized to clock).
   - **Memory Arrays**:
     - **Address Decoding**: Use decoders to select memory locations (e.g., 2-bit address → 4 locations).
     - **Read/Write Logic**:
       - **Read**: Multiplexer selects output based on address.
       - **Write**: Decoder enables specific register’s write signal.

## 4. **Programmable Logic & FSMs**
   - **Lookup Tables (LUTs)**:
     - Memory arrays can implement logic functions (e.g., store truth tables).
     - Used in FPGAs for reconfigurable logic.
   - **FSM Implementation**:
     - **State Register**: D flip-flops hold current state.
     - **Combinational Logic**:
       - **Next State**: Computes new state from inputs/current state.
       - **Output Logic**: Generates outputs based on state/inputs.
     - **Clock Synchronization**: Ensures state updates only at clock edges.

## 5. **Advanced Topics**
   - **Tri-State Buffers**:
     - Enable shared bus communication (only one driver at a time).
     - Used in memory systems to avoid bus contention.
   - **Metastability**:
     - Occurs when flip-flop inputs violate setup/hold times (e.g., RS latch with `S=R=0`).
     - Mitigated by synchronous design and proper timing constraints.

## 6. **Applications**
   - **ALU Design**:
     - Combinational logic (adders, comparators) + sequential state (registers).
   - **Memory Hierarchy**:
     - Registers (fast, expensive) → SRAM/DRAM (dense, slower).
   - **FPGA Logic**: LUTs + flip-flops enable reconfigurable FSMs.