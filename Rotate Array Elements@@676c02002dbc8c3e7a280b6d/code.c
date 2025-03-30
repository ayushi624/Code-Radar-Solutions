#include<stdio.h>
int main(){
    int n,i,k,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d", &k);
    for(i=1;i<=k;i++){
        for(j=0;j<n;j++){
            if(j==0){
            arr[j]=arr[n-1];
            }
            arr[j] == arr[j-1];
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}