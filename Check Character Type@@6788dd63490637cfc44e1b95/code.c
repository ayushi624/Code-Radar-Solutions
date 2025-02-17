// Your code here...
#include <stdio.h>

int main() {
    char ch;

    
    scanf("%c", &ch);

    // Check the type of character
    if (ch= 'a' || 'A' || 'e' || 'E' || 'o' || 'O' || 'u' || 'U' ||'i' || 'I' ){
        printf("Vowel");
    }
    else if (ch >= 'A' && ch <= 'Z') {
        printf("Consonant\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("Consonant", ch);
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n", ch);
    } 
    else {
        printf("Special Character\n", ch);
    }

    return 0;
}
