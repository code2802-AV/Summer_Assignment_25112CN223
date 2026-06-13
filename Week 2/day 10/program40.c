#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        
        // printing the spaces first
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        char ch = 'A'; 
        
        // first char track: print and move to next char 
    
        for (int k = 1; k <= i; k++) {
            printf("%c", ch);
            ch++; 
        }
        
        ch = ch - 2; 
        
        // second char track: print going backward down to 'A'
        for (int k = i - 1; k >= 1; k--) {
            printf("%c", ch);
            ch--; // moves backward in alphabet
        }
        
        printf("\n");
    }

    return 0;
}