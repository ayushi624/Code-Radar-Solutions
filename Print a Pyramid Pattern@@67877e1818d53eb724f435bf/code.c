#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);  // Input number of rows

    for (i = 1; i <= n; i++) {  // Loop for rows
        for (j = 1; j <= n - i; j++) {  // Print spaces
            printf(" ");
        }
        for (j = 1; j <= i; j++) {  // Print stars
            printf("*");
        }
        printf("\n");  // Move to next line
    }

    return 0;
}