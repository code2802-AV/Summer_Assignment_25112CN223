#include <stdio.h>

int main() {
    char str[100];
    int found = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // outer loop selects a character to check
    for (int i = 0; str[i] != '\0'; i++) {
        int count = 0;
        
        // inner loop scans the entire string to count occurrences
        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        
        // if count is exactly 1, it means it doesn't repeat anywhere
        if (count == 1) {
            printf("The first non-repeating character is: '%c'\n", str[i]);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("All characters are repeating or string is empty.\n");
    }

    return 0;
}