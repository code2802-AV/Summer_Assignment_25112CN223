#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for the number of rows
    for(i = 1; i <= rows; i++) {
        
        // Inner loop: prints numbers 1 to i for each row
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
       
        printf("\n");
    }

    return 0;
}