// Your code here...
//n=6; 1, 2, 3, 6
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n == 0 || n == 1) {
        printf("Not Prime");
    }
    else {
        for (i=2; i<n; i++) {
        if(n%i == 0) {
            printf("Not Prime");
        }
        else {
            printf("Prime");
        }
    }
    }
    
    return 0;
}