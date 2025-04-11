#include <stdio.h>
int main(){
    int n, i, l, s;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    s = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<s){
            l = arr[i];
        }
    }
    printf("%d ", s);
    
    l=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>l){
            l = arr[i];
        }
    }
    printf("%d", l);
    
    return 0;
}