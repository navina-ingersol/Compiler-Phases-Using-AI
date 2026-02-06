# Phase 3 – Semantic Analysis

## Overview
This phase implements **Semantic Analysis** for a simplified C language.
Semantic analysis ensures that the program is not only syntactically correct,
but also **meaningfully correct**.

It performs checks related to variable declarations, scope resolution,
and type compatibility.

This phase **reuses the Lexical Analysis (Phase 1)** and
**Syntax Analysis (Phase 2)** components.

---

## Files Included

### Core Semantic Analysis
- `checker.cpp / checker.h` – Main semantic checker that coordinates all semantic checks
- `symbol.cpp / symbol.h` – Symbol table implementation for identifiers
- `scope.cpp / scope.h` – Scope management for nested blocks
- `type.cpp / type.h` – Type representation and type compatibility checking

### Reused from Earlier Phases
- `lexer.cpp / lexer.h` – Lexical analyzer (Phase 1)
- `parser.cpp` – Syntax analyzer (Phase 2)
- `tokens.h` – Token definitions

### Utility
- `string.cpp / string.h` – String handling utilities

---

## What Semantic Analysis Checks
- Variables are declared before use
- Identifiers are used within valid scopes
- Type compatibility in assignments and expressions
- Correct usage of variables and functions

---

## How It Works
1. Source code is read from standard input.
2. The lexical analyzer generates tokens.
3. The parser constructs the syntactic structure.
4. The semantic checker:
   - Builds and manages symbol tables
   - Tracks scope entry and exit
   - Validates type correctness
5. Semantic errors are reported if violations are found.

---

## How to Compile
```bash
g++ lexer.cpp parser.cpp checker.cpp scope.cpp symbol.cpp type.cpp string.cpp -o semantic
