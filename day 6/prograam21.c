#include <stdio.h>

int main() {
    int num, temp;
    long long binary = 0;
    long long place = 1; // Tracks place value: 1, 10, 100, 1000, etc.

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    temp = num; // Keep a backup of the original number

    // Edge case handling for 0
    if (num == 0) {
        printf("The binary equivalent of 0 is: 0\n");
        return 0;
    }

    // Main logic: keep dividing by 2 and saving remainders
    while (temp > 0) {
        int rem = temp % 2;          // Get the bit (0 or 1)
        binary = binary + (rem * place); // Fit it into the right spot
        place = place * 10;          // Shift place value to the left
        temp = temp / 2;             // Reduce the number
    }

    printf("The binary equivalent of %d is: %lld\n", num, binary);
    return 0;
}