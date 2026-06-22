//Remove space from string

#include <stdio.h>

int main() {
    char str[150];
    int j = 0;

    printf("Enter a string with spaces: ");
    scanf(" %[^\n]", str);

    // loop through everything and shift non-space characters forward
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j] = str[i]; 
            j++;             
        }
    }
    
    // add null character at the new end position to close the string
    str[j] = '\0';

    printf("String after removing spaces: %s\n", str);
    return 0;
}
