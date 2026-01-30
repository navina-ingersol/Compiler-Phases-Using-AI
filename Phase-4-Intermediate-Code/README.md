# Phase 4: Intermediate Code Generation

Intermediate Code Generation is the fourth phase of a compiler.
It converts the source program into an intermediate representation
that is independent of machine architecture.

Input (from Semantic Analysis):
int a = b + c * d;

Intermediate Code (Three Address Code):
t1 = c * d
t2 = b + t1
a = t2

This phase prepares the program for optimization.
