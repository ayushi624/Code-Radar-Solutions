#include <stdio.h>
 int prime(int n){
    int i;
    if (i<2) return 0;
    for(i=2;i<=n/2;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", prime(num));
    }

    return 0;
}