#include <stdio.h>
#define N 3  // Assuming a 3x3 matrix 

void printMatrix(float a[N][N+1]) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<=N; j++) {
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
}

void gaussJordan(float a[N][N+1]) {
    for (int i = 0; i < N; i++) {
        // Make the diagonal contain all ones
        float div = a[i][i];
        for (int j = 0; j <= N; j++) {
            a[i][j] = a[i][j]/div;
        }

        // Make the other rows zero
        for (int row = 0; row < N; row++) {
            if (row != i) {
                float factor = a[row][i];
                for (int col = 0; col <= N; col++) {
                    a[row][col] -= factor * a[i][col];
                }
            }
        }
    }
}

int main() {
   printf("Enter the coefficients of the equations\n");
    float matrix[N][N+1];
    for (int i=0; i<N; i++) {
        for (int j=0; j<=N; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }

    printf("Original Matrix:\n");
    printMatrix(matrix);

    gaussJordan(matrix);

    printf("\nAfter Gauss-Jordan Elimination:\n");
    printMatrix(matrix);

    return 0;
}
