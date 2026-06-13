//perfect number using func

#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;

    // loop goes up to half of num bcz divisors can't be larger than that anyways
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum = sum + i; // tracking sum of factors
        }
    }

    // if sum of factors equals original number, it's perfect
    if (sum == num && num != 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter a number to check: ");
    scanf("%d", &n);

    if (isPerfect(n) == 1) {
        printf("%d is a Perfect number.\n", n);
    } else {
        printf("%d is NOT a Perfect number.\n", n);
    }

    return 0;
}