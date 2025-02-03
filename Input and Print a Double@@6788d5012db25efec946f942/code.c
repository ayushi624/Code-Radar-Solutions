#include <stdio.h>

float welcome() {
    float a;
    scanf("%f", &a)
    return a;
}

int main() {
    printf("You entered: %.4f", welcome());
    return 0;
}