// count words in a sentence

#include <stdio.h>

int main() {
    char str[200];
    int spaces = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    // loop to run through the whole line
    for (int i = 0; str[i] != '\0'; i++) {
        // check if current character is a blank space
        if (str[i] == ' ') {
            spaces++;
        }
    }

    
    int words = spaces + 1;
    
    
    if (str[0] == '\0') {
        words = 0;
    }

    printf("Total number of words = %d\n", words);
    return 0;
}