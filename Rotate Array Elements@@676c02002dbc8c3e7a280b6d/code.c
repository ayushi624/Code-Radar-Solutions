#include<stdio.h>
int main(){
    int n,i,k,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d", &k);
    int temp[k];
    for(i=0;i<k;i++){
        temp[i]=arr[n-k+i];
    }
    for(j=k-1;j<n;j++){
        arr[j]=arr[j-2];
    }
    for(i=0;i<k;i++){
        arr[i]=temp[i];
    }
    for(i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}