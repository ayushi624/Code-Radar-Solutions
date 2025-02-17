// Your code here...
#include <stdio.h>

int main() {
    int year;
    
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap Year\n");
    } else {
        printf("Leap Year\n");
    }
    
    return 0;
}