#include <stdio.h>

int main() {
    int a = 1<<31, b;
    scanf("%d", &b);
    if( a & b){
    printf("Set");}
    else{
        printf("Not Set");
    }
    return 0;
}