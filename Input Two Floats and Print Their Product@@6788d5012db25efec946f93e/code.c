#include <stdio.h>

float welcome() {
    float a,b,p;
    scanf("%f", &a);
    scanf("%f", &b);
    p=a*b;
    return p;
}

int main() {
    printf("Product: %.2f", welcome());
    return 0;
}