#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));
    }

    return 0;
}
int isPrime(int num){
    int i;
    if (num<2) return 0;
    for(i=2;i<=num/2;i++){
        if(num%i==0)
        return 0;
    }
    return 1;
}