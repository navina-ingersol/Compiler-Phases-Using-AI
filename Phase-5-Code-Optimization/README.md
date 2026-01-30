# Phase 5: Code Optimization

Code Optimization is the fifth phase of a compiler.
It improves the intermediate code by removing redundant
and unnecessary operations.

Input (from Intermediate Code Generation):
t1 = c * d
t2 = b + t1
a = t2

Optimized Output:
t1 = c * d
a = b + t1

This phase makes the code more efficient before target code generation.
