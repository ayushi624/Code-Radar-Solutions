#include <stdio.h>

double welcome() {
    double a,b,p;
    scanf("%.2lf", &a);
    scanf("%.2lf", &b);
    p=a*b;
    return p;
}

int main() {
    printf("Product: %.2lf", welcome());
    return 0;
}