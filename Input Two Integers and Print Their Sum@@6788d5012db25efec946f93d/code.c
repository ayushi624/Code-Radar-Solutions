#include <stdio.h>

int welcome() {
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    return a+b;
}

int main() {
    printf("Sum: %d", welcome());
    return 0;
}