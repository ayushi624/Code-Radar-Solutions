// Your code here...
#include <stdio.h>

int main() {
    int num, n;
    
    // Input the number and bit position
    scanf("%d", &num);
    scanf("%d", &n);
    
    // Set the Nth bit
    num = num | (1 << n);
    
    // Print the result
    printf("%d\n", num);
    
    return 0;
}
