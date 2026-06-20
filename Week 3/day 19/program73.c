//To add matrices

#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat1[r][c], mat2[r][c], sum_mat[r][c];

    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // nested loop to add elements at matching row and col positions
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum_mat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Resultant Matrix after Addition:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", sum_mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}