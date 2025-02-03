#include <stdio.h>

float welcome() {
    float a;
    scanf("%f", &a);
    return a;
}

int main() {
    printf("You entered: %f", welcome());
    return 0;
}