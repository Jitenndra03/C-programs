#include <stdio.h>

void printMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int MatA[][100], int MatB[][100], int MatC[][100], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            MatC[i][j] = 0;
            for (int k = 0; k < n; k++) {
                MatC[i][j] += MatA[i][k] * MatB[k][j];
            }
        }
    }
}

int main() {
    int m, n, p;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &p);

    int MatA[100][100], MatB[100][100], MatC[100][100];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &MatA[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &MatB[i][j]);
        }
    }

    multiplyMatrices(MatA, MatB, MatC, m, n, p);

    printf("Resultant Matrix:\n");
    printMatrix(MatC, m, p);

    return 0;
}
