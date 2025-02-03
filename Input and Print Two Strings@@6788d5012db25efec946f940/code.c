#include <stdio.h>

char* welcome(char c[]) {
    char* a[50] ,b[50];
    scanf("%s", &a);
    scanf("%s", &b);
    sprintf(c, "%s and %s", a, b);
    return c;
}

int main() {
    char* x[100];
    welcome(x);
    printf("You entered: %s", x);
    return 0;
}