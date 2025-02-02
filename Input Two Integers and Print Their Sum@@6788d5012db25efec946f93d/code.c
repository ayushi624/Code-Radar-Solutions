#include <stdio.h>

char* welcome() {
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    return a+b;
}

int main() {
    printf("%d", welcome());
    return 0;
}