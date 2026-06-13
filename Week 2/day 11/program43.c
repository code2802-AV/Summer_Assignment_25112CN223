#include <stdio.h>

// function to check prime status
// returns 1 if it is prime, returns 0 if it is not
int isPrime(int n) {
    // 0 and 1 are not prime numbers, so handling them right away
    if (n <= 1) {
        return 0; 
    }

    // looping from 2 up to n/2 to look for factors
    for (int i = 2; i <= n / 2; i++) {
        // if n is perfectly divisible by i, it's not a prime
        if (n % i == 0) {
            return 0; 
        }
    }

   
    return 1;
}

int main() {
    int num;

    printf("Enter a number to check: ");
    scanf("%d", &num);

    // checking the value using our function
    if (isPrime(num) == 1) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is NOT a Prime number.\n", num);
    }

    return 0;
}