//star pattern problems

#include <stdio.h>

int main() {
    int rows = 5;

    // outer loop runs 5 times to handle 5 rows
    for (int i = 0; i < rows; i++) {
        
        // inner loop prints stars. 
        
        for (int j = 0; j < rows - i; j++) {
            printf("*");
        }
        
        
        printf("\n");
    }

    return 0;
}