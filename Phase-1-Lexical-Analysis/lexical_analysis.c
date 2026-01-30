#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char input[100];
    scanf("%s", input);

    if (strcmp(input, "int") == 0)
        printf("KEYWORD");
    else if (isdigit(input[0]))
        printf("NUMBER");
    else
        printf("IDENTIFIER");

    return 0;
}
