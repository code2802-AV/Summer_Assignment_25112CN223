//palindrome using function

#include <stdio.h>

// returns 1 if palindrome, 0 if not
int isPalindrome(int num) {
    int temp = num;
    int reversed = 0;

    // loop to flip the number backwards
    while (temp > 0) {
        int last_digit = temp % 10;
        reversed = (reversed * 10) + last_digit;
        temp = temp / 10;
    }

    // checking if original matches the reversed version
    if (num == reversed) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter a number to check: ");
    scanf("%d", &n);

    if (isPalindrome(n) == 1) {
        printf("%d is a Palindrome number.\n", n);
    } else {
        printf("%d is NOT a Palindrome number.\n", n);
    }

    return 0;
}