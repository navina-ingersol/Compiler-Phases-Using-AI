# Phase 1 – Lexical Analysis

## Overview
This phase implements **Lexical Analysis** for a simplified C language.
The lexical analyzer scans the source code character by character and
groups them into meaningful tokens.

## Files Included
- `lexer.cpp` – Lexical analyzer implementation

## How It Works
1. Source code is read from standard input.
2. The lexer identifies and classifies tokens such as:
   - Keywords
   - Identifiers
   - Integer literals
   - String literals
   - Operators and punctuators
3. Whitespace and comments are ignored.

## How to Compile
```bash
g++ lexer.cpp -o lexer
