// find diagonal sum

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix (N x N): ");
    scanf("%d", &n);

    int mat[n][n];
    int diag_sum = 0;

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        diag_sum += mat[i][i];
    }

    printf("Sum of the primary diagonal elements = %d\n", diag_sum);

    return 0;
}