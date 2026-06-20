#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) scanf("%d", &mat[i][j]);
    }

    // outer loop fixes the row, inner loop counts across columns
    for (int i = 0; i < r; i++) {
        int row_sum = 0; 
        for (int j = 0; j < c; j++) {
            row_sum += mat[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, row_sum);
    }

    return 0;
}