#include <stdio.h>
int main() {
    int n, i, s, j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=1;s<=n-1;s++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
