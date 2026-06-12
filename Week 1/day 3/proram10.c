#include <stdio.h>

int main() {
    int low, high, isPrime;

    printf("Enter lower bound and upper bound of the range: ");
    scanf("%d %d", &low, &high);

    if (high < 2) {
        printf("There are no prime numbers in the range %d to %d.\n", low, high);
        return 0;
    }

    printf("Prime numbers between %d and %d are:\n", low, high);

    for (int num = (low < 2) ? 2 : low; num <= high; num++) {
        isPrime = 1; 

       
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }

       
        if (isPrime == 1) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
