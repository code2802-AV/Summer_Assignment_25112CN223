// string manipulation and logic

#include <stdio.h>

int main() {
    char str[100];
    int len = 0, is_palindrome = 1;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // finding length manually
    while (str[len] != '\0') {
        len++;
    }

    // checking characters from both ends moving inside
    int start = 0;
    int end = len - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            is_palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (is_palindrome) {
        printf("The string is a Palindrome.\n");
    } else {
        printf("The string is NOT a Palindrome.\n");
    }

    return 0;
}