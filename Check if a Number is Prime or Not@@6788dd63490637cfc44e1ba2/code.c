// Your code here...
//n=6; 1, 2, 3, 6
#include <stdio.h>
int main(){
    int n,i,c=0;
    scanf("%d", &n);
    if(n>=1){
        printf("Not Prime");
    }
    else{
        for(i=2;i<=n;i++){
            if(n%i==0){
                c++;
            }
        }
        if(c>2){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
    
    return 0;
}