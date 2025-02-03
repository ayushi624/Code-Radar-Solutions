#include <stdio.h>

int welcome() {
    int a,b,c,d;
    scanf("%d %d %d", a, b, c);
    d= (a+b+c)/3;
    return d;
}

int main() {
    printf("%d", welcome());
    return 0;
}