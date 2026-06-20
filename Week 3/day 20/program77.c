//Advance matrix operation

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    // rule check: multiplication is only possible if columns of A match rows of B
    if (c1 != r2) {
        printf("Matrix multiplication not possible with these dimensions!\n");
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], prod[r1][c2];

    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) scanf("%d", &mat1[i][j]);
    }

    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) scanf("%d", &mat2[i][j]);
    }

    // main multiplication logic: 3 nested loops
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            prod[i][j] = 0; 
            
            // k loop slides across row of mat1 and down column of mat2
            for (int k = 0; k < c1; k++) {
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant Matrix after Multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) printf("%d ", prod[i][j]);
        printf("\n");
    }

    return 0;
}