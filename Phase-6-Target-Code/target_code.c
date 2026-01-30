#include <stdio.h>

int main() {
    printf("LOAD R1, c\n");
    printf("MUL R1, d\n");
    printf("LOAD R2, b\n");
    printf("ADD R2, R1\n");
    printf("STORE a, R2\n");
    return 0;
}
