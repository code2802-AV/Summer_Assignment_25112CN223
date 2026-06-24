#include <stdio.h>

int main() {
    char str[150];
    int freq[256] = {0}; 
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // step 1: loop through string to count how many times each letter shows up
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // step 2: search through our frequency table to find the highest score
    int max_count = 0;
    char max_char;

    for (int i = 0; i < 256; i++) {
       
        if (freq[i] > max_count && i != ' ') {
            max_count = freq[i];
            max_char = (char)i; // converting ASCII code back into a character
        }
    }

    printf("The maximum occurring character is '%c' (appears %d times).\n", max_char, max_count);
    return 0;
}