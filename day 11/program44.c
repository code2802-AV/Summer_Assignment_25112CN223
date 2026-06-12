#include <stdio.h>

// function that calculates the factorial loop
long long findFactorial(int n) {
    long long fact = 1; // using long long bcz factorials grow huge fast

    // loop from 1 up to the number and keep multiplying
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact; 
}

int main() {
    int num;

    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial of negative numbers doesn't exist.\n");
    } else {
        printf("Factorial of %d is: %lld\n", num, findFactorial(num));
    }

    return 0;
}