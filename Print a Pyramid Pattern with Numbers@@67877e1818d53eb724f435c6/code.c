#include <stdio.h>
int main() {
    int n, i, s, j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=n-1;s>=1;s--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
