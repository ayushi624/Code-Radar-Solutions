// C Program to check for prime number using
//  Simple Trial Division
#include <stdbool.h>
#include <stdio.h>

int main() {
    int n ;

    int cnt = 0;
    scanf("%d", &n);

    // If number is less than/equal to 1,
    // it is not prime
    if (n <= 1)
        printf("Not Prime\n");
    else {

        // Check for divisors from 1 to n
        for (int i = 1; i <= n; i++) {

            // Check how many number is divisible
            // by n
            if (n % i == 0)
                cnt++;
        }

        // If n is divisible by more than 2 numbers
        // then it is not prime
        if (cnt > 2)
            printf("Not Prime\n");

        // else it is prime
        else
            printf("Prime");
    }

    return 0;
}
