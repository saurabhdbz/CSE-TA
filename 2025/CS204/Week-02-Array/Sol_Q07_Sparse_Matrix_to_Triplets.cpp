#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    int found = 0;

    // Input matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Convert to triplets
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != 0) {
                printf("%d %d %d\n", i, j, matrix[i][j]);
                found = 1;
            }
        }
    }

    // If no non-zero elements found
    if (!found) {
        printf("0\n");
    }

    return 0;
}
