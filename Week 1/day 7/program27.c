#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    // Base Case: If the number becomes 0, stop the recursion
    if (n == 0) {
        return 0;
    }
    
    // Recursive Step: Grab the last digit and pass the rest of the number back to the function
    int last_digit = n % 10;
    return last_digit + sumOfDigits(n / 10);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Handle negative numbers gracefully by converting to positive
    int temp = num;
    if (temp < 0) {
        temp = -temp;
    }
    
    int result = sumOfDigits(temp);
    
    printf("The recursive sum of digits for %d is: %d\n", num, result);
    
    return 0;
}