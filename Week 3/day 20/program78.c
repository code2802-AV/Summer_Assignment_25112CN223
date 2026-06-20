#include <stdio.h>

int main() {
    int n, is_symmetric = 1;
    printf("Enter size of square matrix (N x N): ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) scanf("%d", &mat[i][j]);
    }

    // check if original position matches the flipped position
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                is_symmetric = 0; 
                break;
            }
        }
    }

    if (is_symmetric) {
        printf("The matrix is Symmetric.\n");
    } else {
        printf("The matrix is NOT Symmetric.\n");
    }

    return 0;
}