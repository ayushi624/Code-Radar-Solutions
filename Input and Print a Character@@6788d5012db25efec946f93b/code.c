#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

// int a = welcome()

int main() {
    printf("You entered: %s", welcome());
    return 0;
}