#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Logic: Find all divisors from 1 to num/2
    for(int i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            sum += i; // Accumulate divisors
        }
    }

    if(sum == num && num != 0)
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is not a Perfect number.\n", num);

    return 0;
}