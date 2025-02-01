#include <stdio.h>

char* welcome( char* a) {
    // char* a;
    // scanf("%s", &a);
    return a;
}

// int a = welcome()

int main() {
    char* a;
    scanf("%s", &a);
    printf("You entered: %s", welcome(a));
    return 0;
}