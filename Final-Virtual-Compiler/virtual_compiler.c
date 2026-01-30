#include <stdio.h>

int main() {
    printf("=== VIRTUAL COMPILER START ===\n\n");

    printf("Phase 1: Lexical Analysis\n");
    printf("Input: int a = 10;\n");
    printf("Output: KEYWORD IDENTIFIER OPERATOR NUMBER\n\n");

    printf("Phase 2: Syntax Analysis\n");
    printf("Result: Grammar Valid\n\n");

    printf("Phase 3: Semantic Analysis\n");
    printf("Result: No Semantic Errors\n\n");

    printf("Phase 4: Intermediate Code Generation\n");
    printf("t1 = 10\n");
    printf("a = t1\n\n");

    printf("Phase 5: Code Optimization\n");
    printf("a = 10\n\n");

    printf("Phase 6: Target Code Generation\n");
    printf("MOV a, 10\n\n");

    printf("=== COMPILATION SUCCESSFUL ===\n");

    return 0;
}
