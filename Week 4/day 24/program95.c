#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    int max_len = 0, max_start_idx = 0;
    int current_len = 0, current_start_idx = 0;

    for (int i = 0; ; i++) {
        
        if (str[i] == ' ' || str[i] == '\0') {
            
            if (current_len > max_len) {
                max_len = current_len;
                max_start_idx = current_start_idx;
            }
            
            // reset tracking lengths, and assume the next word starts at index i + 1
            current_len = 0;
            current_start_idx = i + 1;
            
            // break the loop if we have reached the absolute end of the sentence
            if (str[i] == '\0') {
                break;
            }
        } else {
            current_len++; 
        }
    }

    printf("The longest word is: ");
    // loop to print exactly 'max_len' characters starting from our saved index
    for (int i = max_start_idx; i < max_start_idx + max_len; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}