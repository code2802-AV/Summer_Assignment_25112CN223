//number pattern problems

#include <stdio.h>

int main() {
    int rows = 5;

    // outer loop to change rows
    for (int i = 0; i < rows; i++) {
        
        // inner loop counts from 1 up to the last limit
        for (int j = 1; j <= rows - i; j++) {
            printf("%d", j); // printing the counting variable 'j'
        }
        
        
        printf("\n");
    }

    return 0;
}