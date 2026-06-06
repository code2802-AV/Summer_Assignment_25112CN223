#include <stdio.h>

int main() {
    long long binary, temp;
    int decimal = 0;
    int weight = 1; // Represents 2^0, then becomes 2^1, 2^2...

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;

    // Loop through the digits one by one
    while (temp > 0) {
        int last_digit = temp % 10; // Grab the rightmost digit
        
        // Accumulate if the bit is 1 (multiplying by 0 does nothing anyway)
        decimal = decimal + (last_digit * weight);
        
        weight = weight * 2;  // Double the weight for the next bit position
        temp = temp / 10;     // removing the processed digit
    }

    printf("The decimal equivalent of %lld is: %d\n", binary, decimal);
    return 0;
}