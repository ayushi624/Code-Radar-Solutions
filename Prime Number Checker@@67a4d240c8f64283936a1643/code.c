#include <stdio.h>

int main() {

    int prime(int n){
        int i;
        if (i<2) return 0;
        for(i=2;i<=n/2;i++){
            if(n%i==0)
            return 0;
        }
        return 1;
    }
    printf("Try programiz.pro");

    return 0;
}