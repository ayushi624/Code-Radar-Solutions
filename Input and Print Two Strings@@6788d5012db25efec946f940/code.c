#include <stdio.h>

char* welcome() {
    char* a,b,c;
    scanf("%s", &a);
    scanf("%s", &b);
    sprintf(c, "%s and %s", a, b);
    return c;
}

int main() {
    printf("You entered: %s", welcome());
    return 0;
}