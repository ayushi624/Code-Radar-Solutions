// Your code here...
#include <stdio.h>
int main() {
    int n, i, j=0;
    scanf("%d", &n);  // Input the number of rows

    for(i=1;i<=n;i++){
        j = j+i;
    }
    printf("%d",j);
    return 0;
}
