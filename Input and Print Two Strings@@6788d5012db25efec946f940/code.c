#include <stdio.h>

char* welcome() {
    static char c[100];
    char a[50] ,b[50];
    scanf("%s", &a);
    scanf("%s", &b);
    sprintf(c, "%s and %s", a, b);
    return c;
}

int main() {
    char* x= welcome();
    printf("You entered: %s", x);
    return 0;
}