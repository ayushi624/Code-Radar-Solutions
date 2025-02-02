#include <stdio.h>

float welcome() {
    float a,b;
    scanf("%.2f", &a);
    scanf("%.2f", &b);
    return a*b;
}

int main() {
    printf("Product: %.2f", welcome());
    return 0;
}