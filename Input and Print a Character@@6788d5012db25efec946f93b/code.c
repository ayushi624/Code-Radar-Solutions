#include <stdio.h>

char* welcome() {
    static char a[100]
    scanf("%99s", &a);
    return a;
}

// int a = welcome()

int main() {
    printf("You entered: %s", welcome());
    return 0;
}