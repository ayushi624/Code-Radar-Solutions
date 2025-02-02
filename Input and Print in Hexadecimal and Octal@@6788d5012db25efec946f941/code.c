#include <stdio.h>

int welcome() {
    int a;
    scanf("%d", &a);
    return a;
}

int main() {
    printf("Hexadecimal: %x\n", welcome());
    printf("Octal: %o\n", welcome());
    return 0;
}