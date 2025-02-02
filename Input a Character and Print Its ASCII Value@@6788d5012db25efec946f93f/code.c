#include <stdio.h>

char welcome() {
    char a;
    scanf("%c", &a);
    return a;
}

int main() {
    printf("ASCII Value: %d", welcome());
    return 0;
}