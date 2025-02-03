#include <stdio.h>

float welcome() {
    float a,b,c,d;
    scanf("%f %f %f", &a, &b, &c);
    d= (a+b+c)/3;
    return d;
}

int main() {
    printf("%.2f", welcome());
    return 0;
}