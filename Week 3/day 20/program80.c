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

    // column index is outer loop so we process vertical sections one by one
    for (int j = 0; j < c; j++) {
        int col_sum = 0;
        for (int i = 0; i < r; i++) {
            col_sum += mat[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, col_sum);
    }

    return 0;
}