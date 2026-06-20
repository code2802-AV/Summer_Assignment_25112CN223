//To subtract matrices

#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat1[r][c], mat2[r][c], diff_mat[r][c];

    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) scanf("%d", &mat1[i][j]);
    }

    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) scanf("%d", &mat2[i][j]);
    }

    // looping through coordinates to calculate differences
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            diff_mat[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    printf("Resultant Matrix after Subtraction:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%d ", diff_mat[i][j]);
        printf("\n");
    }

    return 0;
}