#include <stdio.h>

int main() {
    char str[100];
    int found = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

   
    for (int i = 0; str[i] != '\0'; i++) {
        int count = 0;
        
        // scan the string to see how many times this letter appears
        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        
        
        if (count > 1) {
            printf("The first repeating character is: '%c'\n", str[i]);
            found = 1;
            break; // break immediately to capture the very first instance
        }
    }

    if (!found) {
        printf("No repeating characters found.\n");
    }

    return 0;
}