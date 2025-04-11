#include <stdio.h>
int main(){
    int n, i, l, s;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    l=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>l){
            l = arr[i];
        }
    }
    s = arr[0];
    printf("%d", s);
    for(i=1;i<n;i++){
        if(arr[i]<s){
            l = arr[i];
        }
    }
    printf(" %d", s);
    return 0;
}