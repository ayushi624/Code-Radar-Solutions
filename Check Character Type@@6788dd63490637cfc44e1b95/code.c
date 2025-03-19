#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || 
    ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U' || 
    ch == 'i' || ch == 'I' ){
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
