// Your code here...
#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);  // Input the number of rows

    for(i=1;i<=10;i++){
        printf("%d x %d = %d",n,i,n*i);
    }
    return 0;
}
