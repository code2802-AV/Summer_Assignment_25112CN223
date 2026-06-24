#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("String after removing duplicates: ");
    
    for (int i = 0; str[i] != '\0'; i++) {
        int is_duplicate = 0;
        
        // scan backward to see if the current character appeared before
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                is_duplicate = 1; 
                break;
            }
        }
        
       
        if (!is_duplicate) {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}