//reverse a string

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string to reverse: ");
    scanf(" %[^\n]", str); 
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    // swapping characters from both ends moving inward
    int start = 0;
    int end = len - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string is: %s\n", str);
    return 0;
}