#include <stdio.h>

float welcome() {
    float a,b;
    scanf("%f", &a);
    b= 3.14*a*a;
    return b;
}

int main() {
    printf("Area: %.2f", welcome());
    return 0;
}