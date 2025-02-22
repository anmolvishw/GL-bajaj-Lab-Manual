#include <stdio.h>

#define N 3  // Define matrix size (NxN)

void transpose(int matrix[N][N], int transposed[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int isSymmetric(int matrix[N][N], int transposed[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] != transposed[i][j]) {
                return 0; // Not symmetric
            }
        }
    }
    return 1;
}

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };
    
    int transposed[N][N];
    
    transpose(matrix, transposed);
    
    printf("Original Matrix:\n");
    printMatrix(matrix);
    
    printf("Transpose of the Matrix:\n");
    printMatrix(transposed);
    
    if (isSymmetric(matrix, transposed)) {
        printf("The given matrix is symmetric.\n");
    } else {
        printf("The given matrix is not symmetric.\n");
    }
    
    return 0;
}

