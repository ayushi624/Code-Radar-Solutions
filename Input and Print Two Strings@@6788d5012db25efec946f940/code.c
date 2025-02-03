#include <stdio.h>

char* welcome() {
    int a,b;
    scanf("%s", &a);
    scanf("%s", &b);
    return a;
    return b;
}

int main() {
    // int x,y = welcome();
    printf("You entered: %s and %s", welcome(), welcome());
    return 0;
}