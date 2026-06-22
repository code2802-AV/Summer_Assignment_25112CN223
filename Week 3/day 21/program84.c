// convert lowcase to uppercase

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string in lowercase: ");
    scanf(" %[^\n]", str);

    // loop shifts individual letters across the array
    for (int i = 0; str[i] != '\0'; i++) {
        // check if character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
    }

    printf("String in Uppercase: %s\n", str);
    return 0;
}