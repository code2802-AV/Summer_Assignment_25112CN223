
#include <stdio.h>

int main() {
    int rows = 5;

    // outer loop for rows
    for (int i = 1; i <= rows; i++) {
        
        //  logic :- print the left side spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // first number track: counting UP from 1 to the row number 'i'
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        
        // second number track: counting DOWN from 'i-1' back to 1
        // if i=1, this loop won't even run, 
        for (int k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }
        
        // next line
        printf("\n");
    }

    return 0;
}