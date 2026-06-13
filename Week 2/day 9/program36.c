#include <stdio.h>

int main() {
    int size = 5; // making a 5x5 square

    // outer loop for rows
    for (int i = 1; i <= size; i++) {
        
        // inner loop for columns
        for (int j = 1; j <= size; j++) {
            
            // logic: if we are on the boundaries of the square, print a star
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } 
            else {
                // if we are inside the square, print a blank space instead
                printf(" ");
            }
        }
        
        
        printf("\n");
    }

    return 0;
}