#include<stdio.h>
int main() {
    int m, n;
    scanf("%d", &m);
    int arr[m];
    for(int i = 0; i < m; i++){
        scanf("%d", &i);
    }
    scanf("%d", &n);
    for(int i = 0; i < m; i++) {
        int x = arr[i];
        printf("%d", arr[i]);
        for(int j = i + 1; j<m; j++){
        if(x + arr[j] == n){
            // printf("%d %d\n", x, arr[j]);
            printf("Hello");
            }
        }
}
   



    return 0;
}