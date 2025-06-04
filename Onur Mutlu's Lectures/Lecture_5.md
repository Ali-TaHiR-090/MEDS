# Key Takeaways: Verilog HDL & Sequential Logic Design

## 1. Hardware Description Languages (HDLs)
- **Purpose**: Enable description of digital hardware (wires, gates, registers) with concurrency support.
- **Verilog Basics**:
  - **Modules**: Fundamental building blocks with inputs/outputs (`input a, b; output y`).
  - **Bit Vectors**: Defined as `[MSB:LSB]` (e.g., `input [31:0] a` for 32-bit bus).
  - **Constants**: Notation `n'base_value` (e.g., `4'b1010` for 4-bit binary 1010).

## 2. Modeling Styles in Verilog
- **Structural**:
  - Gate-level or module instantiation (e.g., `and g1(y, a, b);`).
  - Hierarchical design (top-down/bottom-up).
- **Behavioral**:
  - Uses equations (`assign y = a & b;`).
  - High-level constructs (e.g., `always` blocks for sequential logic).

## 3. Combinational Logic
- **Operators**:
  - Bitwise (`&`, `|`, `^`), reduction (`&a` for AND-all-bits), conditional (`y = s ? d1 : d0`).
- **Best Practices**:
  - Use `assign` for simple logic.
  - Ensure all outputs are defined in all conditions to avoid unintended latches.

## 4. Sequential Logic
- **Always Blocks**:
  - Syntax: `always @(posedge clk or posedge reset)`.
  - Non-blocking assignments (`<=`) for registers (e.g., `q <= d;`).
- **Flip-Flops & Latches**:
  - D-FF example:
    ```verilog
    always @(posedge clk) begin
      if (reset) q <= 0;
      else q <= d;
    end
    ```
  - Latches inferred when outputs aren’t fully defined in all paths (e.g., missing `else`).

## 5. Finite State Machines (FSMs)
- **Implementation**:
  - **State Encoding**: Binary, one-hot, or output-encoded.
  - **Three Parts**:
    1. State register (`always @(posedge clk`).
    2. Next-state logic (`case(state)`).
    3. Output logic (Moore: state-only; Mealy: state + inputs).

## 6. Timing & Verification (Preview)

- **Key Concepts**: Combinational Delays: Propagation/contamination delays.

- **Sequential Timing**: Setup/hold times for flip-flops.

- **Glitches**: Transient outputs due to path delays.

- **Design Tradeoffs**:
-Area vs. speed vs. power.
-Synchronous vs. asynchronous resets.

## 7. Best Practices
- **Naming**: Consistent style (e.g., `signal_msb_to_lsb`).
- **Simulation vs. Synthesis**:
  - Delays (`#5`) are for simulation only.
  - Avoid latches unintentionally (cover all if-else cases).
- **Non-blocking Assignments**: Use for sequential logic to model concurrent updates.

## 8. Advanced Topics (Mentioned)
- **Parameterized Modules**: Reusable code (e.g., `parameter WIDTH=8; input [WIDTH-1:0] a;`).
- **Tri-State Buffers**: For shared buses (`assign bus = enable ? data : 'bz;`).

**Note:** Focus on modular design, verification at each hierarchy level, and HDL-to-hardware mapping tradeoffs. Upcoming lectures will cover timing analysis and processor design.

