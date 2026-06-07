#include <stdio.h>

// Recursive helper function that carries the reversed value along
int reverseHelper(int n, int rev) {
    // Base Case: When nothing is left of the original number, return the accumulated reverse
    if (n == 0) {
        return rev;
    }
    
    // Shift the accumulated reverse by a place value and add the last digit of n
    int last_digit = n % 10;
    rev = (rev * 10) + last_digit;
    
    // Pass the remaining number and our updated reverse to the next recursive call
    return reverseHelper(n / 10, rev);
}

int main() {
    int num;
    
    printf("Enter a number to reverse: ");
    scanf("%d", &num);
    
    // Safe check: 0 reversed is just 0
    if (num == 0) {
        printf("Reversed number: 0\n");
        return 0;
    }
    
    // Run the helper function, starting our reverse accumulator at 0
    int result = reverseHelper(num, 0);
    
    printf("The reversed number is: %d\n", result);
    
    return 0;
}