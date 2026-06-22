// Character frequency

#include <stdio.h>

int main() {
    char str[100];
    char target;
    int count = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter the character to find its frequency: ");
    scanf(" %c", &target); // space before %c absorbs extra newline characters

    // scan the string character by character to find matches
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("The character '%c' appears %d times.\n", target, count);
    return 0;
}