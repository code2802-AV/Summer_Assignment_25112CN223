#include <stdio.h>

int main() {
    int rows = 5;

    // outer loop starting from 5 and counting down makes the math easier
    for (int i = rows; i >= 1; i--) {
        
        // print the spaces on the left side
        // as 'i' goes down (5, 4, 3...), 'rows - i' goes up (0, 1, 2...)
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // print the stars based on the value of 'i'
        // when i=5 it prints 9 stars, when i=4 it prints 7 stars, etc.
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        // move to next line
        printf("\n");
    }

    return 0;
}