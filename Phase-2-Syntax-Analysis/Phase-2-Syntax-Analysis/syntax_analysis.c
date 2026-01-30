#include <stdio.h>
#include <string.h>

int main() {
    char tokens[100];
    fgets(tokens, sizeof(tokens), stdin);

    if (strstr(tokens, "KEYWORD") &&
        strstr(tokens, "IDENTIFIER") &&
        strstr(tokens, "OPERATOR") &&
        strstr(tokens, "NUMBER")) {

        printf("Syntax Analysis Successful\n");
        printf("Grammar is valid\n");
    } else {
        printf("Syntax Error\n");
    }

    return 0;
}
