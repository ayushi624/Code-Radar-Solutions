// Your code here...
#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("*\n");
    }
    if(n>2){
    for(i=1;i<=n;i++){
        for(j=1;j<=1;j++){
            printf("*");
        }
        for(j=1;j<=n-2;j++){
            printf(" ");
        }
        for(j=1;j<=1;j++){
            printf("*");
        }
        printf("\n");
    }}
    for(i=1;i<=n;i++){
        printf("*");
    }
    return 0;
}
