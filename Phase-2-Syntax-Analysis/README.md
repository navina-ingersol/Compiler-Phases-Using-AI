# Phase 2 – Syntax Analysis

## Overview
This phase implements **Syntax Analysis** for a simplified C language.
The parser checks whether the sequence of tokens follows the grammar rules
of the language.

The lexical analyzer from Phase 1 is reused to generate tokens for parsing.

## Files Included
- `parser.cpp` – Syntax analyzer (parser)
- `lexer.cpp` – Lexical analyzer reused from Phase 1

## How It Works
1. Source code is read from standard input.
2. The lexical analyzer scans the input and produces tokens.
3. The parser processes the token stream and validates the grammar.
4. Syntax errors are reported if the input is invalid.

