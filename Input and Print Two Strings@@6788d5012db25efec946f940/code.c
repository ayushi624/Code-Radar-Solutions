#include <stdio.h>

char* welcome() {
    int a,b,c;
    scanf("%s", &a);
    scanf("%s", &b);
    sprintf(c, "%s and %s", a, b);
    return c;
    // return b;
}

int main() {
    // int x,y = welcome();
    printf("You entered: %s", welcome());
    return 0;
}