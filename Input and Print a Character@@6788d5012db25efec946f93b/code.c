#include <stdio.h>

char* welcome() {
    string a;
    scanf("%s", &a);
    return a;
}

// int a = welcome()

int main() {
    printf("You entered: %s", welcome());
    return 0;
}