#include <stdio.h>

int main() {
    int num, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    
    if (num <= 1) {
        printf("Error: %d is not a positive integer. Please enter a positive integer greater than 1.\n", num);
        return 1;
    } else {
        
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;       
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
