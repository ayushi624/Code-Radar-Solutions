#include <stdio.h>

int welcome() {
    int a ;
    scanf("%d", &a);
    return a;
}

int main() {
    printf("You entered: %d", welcome());
    return 0;
}