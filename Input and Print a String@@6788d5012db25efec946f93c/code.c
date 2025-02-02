#include <stdio.h>

char* welcome() {
    static char a;
    scanf("%s",&a);
    return a;
}

int main() {
    printf("You entered: %s", welcome());
    return 0;
}