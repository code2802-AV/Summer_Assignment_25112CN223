#include <stdio.h>

int main() {
    int rows = 5;

    // outer loop to control the rows
    for (int i = 1; i <= rows; i++) {
        
        // first inner loop: prints the blank spaces on the left
        // row 1 gets 4 spaces, row 2 gets 3 spaces, etc.
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // second inner loop: prints the stars right after the spaces
        // row 1 gets 1 star, row 2 gets 3 stars, row 3 gets 5 stars...
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        // row is done, hop to the next line
        printf("\n");
    }

    return 0;
}