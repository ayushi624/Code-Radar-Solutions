// Your code here...
#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);  // Input the number of rows

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
