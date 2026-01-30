#include <stdio.h>

int main() {
    int declared = 1;   // variable declared
    int type_match = 1; // type is correct

    if (declared && type_match) {
        printf("Semantic Analysis Successful\n");
        printf("No semantic errors found\n");
    } else {
        printf("Semantic Error Detected\n");
    }

    return 0;
}
