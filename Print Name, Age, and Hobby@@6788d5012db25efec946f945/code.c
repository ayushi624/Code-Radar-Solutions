#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    static char a[50] ,b[50] ,c[50];
    scanf("%s %s %s", &a, &b, &c);
    printf("Name: %s\n", a);
    printf("Age: %s\n", b);
    printf("Hobby: %s", c);
    return 0;
}