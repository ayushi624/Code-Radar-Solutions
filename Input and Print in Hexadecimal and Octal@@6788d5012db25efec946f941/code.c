#include <stdio.h>

int welcome() {
    int a;
    scanf("%d", &a);
    return a;
}

int main() {
    int x = welcome();
    printf("Hexadecimal: %X\n", x);
    printf("Octal: %o\n", x);
    return 0;
}