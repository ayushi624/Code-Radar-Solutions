#include <stdio.h>
int main() {
    int marks;
    scanf("%d", &marks);
    if (marks < 0 || marks > 100) {
        printf("Invalid marks\n");
    }
    else if (marks >= 90) {
        printf("'A'\n");
    }
    else if (marks<=90 && marks >= 80) {
        printf("'B'\n");
    }
    else if (marks<=80 && marks >= 70) {
        printf("'C'\n");
    }
    else if (marks<=70 && marks >= 60) {
        printf("'D'\n");
    }
    else (marks <= 60) {
        printf("'F'\n");
    }
    return 0;
}
