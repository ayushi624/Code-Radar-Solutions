#include <stdio.h>
int main() {
    int n, i, j, s;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d", j);
        }
        if(i>1){
        for(j=0;j<=i-1;j++){
            printf("%d", i-j-1);
        }}
        printf("\n");
    }
    return 0;
}
