# Phase 6: Target Code Generation

Target Code Generation is the final phase of a compiler.
It converts optimized intermediate code into target machine code
or assembly-like instructions.

Input (from Code Optimization):
t1 = c * d
a = b + t1

Target Code:
LOAD R1, c
MUL R1, d
LOAD R2, b
ADD R2, R1
STORE a, R2

This phase produces executable-level instructions.
