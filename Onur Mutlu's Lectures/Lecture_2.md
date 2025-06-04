# Key Takeaways: Digital Logic Design Lecture

## Transistors and Logic Gates
   - **CMOS Structure**: 
     - Complementary Metal-Oxide-Semiconductor (CMOS) uses paired NMOS (good at pulling down) and PMOS (good at pulling up) transistors.
     - Inverter: 1 PMOS (connected to Vdd) + 1 NMOS (connected to GND).
   - **Logic Gate Design**:
     - NAND/NOR gates are universal (can build any logic function).
     - AND gates require NAND + inverter due to transistor imperfections (NMOS poorly passes '1', PMOS poorly passes '0').
   - **Power Consumption**:
     - **Dynamic Power**: Proportional to capacitance × voltage² × frequency (switching activity).
     - **Static Power**: Leakage current × voltage (even when idle).

## 2. Boolean Algebra & Circuit Minimization
   - **Canonical Forms**:
     - **Sum of Products (SOP)**: OR of minterms (input combinations where output=1).
     - **Product of Sums (POS)**: AND of maxterms (input combinations where output=0).
   - **Simplification**:
     - Use Boolean laws (commutative, distributive, De Morgan’s) to reduce gate count.
     - Example: `A·B + A·B' = A` (eliminates redundant terms).

## 3. Combinational Logic Blocks
   - **Decoders**:
     - `n` inputs → `2^n` outputs. Activates one output line per input pattern (e.g., memory address decoding).
   - **Multiplexers (MUX)**:
     - Selects one of `N` inputs using `log2(N)` select lines. Used for data routing and logic implementation (e.g., LUTs in FPGAs).
   - **Adders**:
     - **Full Adder**: 1-bit adder with carry-in/carry-out (`Sum = A⊕B⊕Cin`, `Cout = majority(A,B,Cin)`).
     - **Ripple-Carry Adder**: Chains 1-bit adders; slow due to sequential carry propagation.
     - **Carry-Lookahead**: Parallelizes carry computation using propagate/generate logic.

## 4. **Programmable Logic**
   - **PLA (Programmable Logic Array)**:
     - Implements SOP with configurable AND-OR arrays. Used for flexible logic design.
   - **FPGAs**:
     - Use Lookup Tables (LUTs) to emulate any logic function by programming truth tables.

## 5. CMOS Technology & Scaling
   - **Moore’s Law**: Exponential growth in transistor density (now ~70B transistors/chip).
   - **Challenges**:
     - Heat dissipation, leakage current, and manufacturing precision at nanometer scales.
   - **Innovations**:
     - EUV lithography, new transistor architectures (FinFET, GAAFET).

## 6. Practical Considerations
   - **Latency**: Series transistors slower than parallel (longer resistive paths).
   - **Area vs. Speed**: Trade-offs in gate sizing (e.g., 10-input NAND vs. cascaded 2-input NANDs).
   - **Redundancy**: Simplified circuits may lose fault tolerance.

## 7. Applications
   - **Instruction Decoding**: Bit patterns → control signals in CPUs.
   - **Memory Addressing**: Decoders select memory locations.
   - **FPGA Logic**: Configurable MUX/LUTs enable reconfigurable hardware.