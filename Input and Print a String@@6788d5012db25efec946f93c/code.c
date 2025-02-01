#include <stdio.h>

char* welcome() {
    char a;
    scanf("%s",&a);
    return a;
}

int main() {
    printf("You entered: %s", welcome());
    return 0;
}