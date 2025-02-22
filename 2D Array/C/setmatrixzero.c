#include <stdio.h>

#define M 3
#define N 4

void setZeroes(int matrix[M][N]) {
    int firstRowZero = 0, firstColZero = 0;
    
    for (int j = 0; j < N; j++) {
        if (matrix[0][j] == 0) {
            firstRowZero = 1;
            break;
        }
    }
    for (int i = 0; i < M; i++) {
        if (matrix[i][0] == 0) {
            firstColZero = 1;
            break;
        }
    }
    for (int i = 1; i < M; i++) {
        for (int j = 1; j < N; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    for (int i = 1; i < M; i++) {
        for (int j = 1; j < N; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
    if (firstRowZero) {
        for (int j = 0; j < N; j++) {
            matrix[0][j] = 0;
        }
    }
    if (firstColZero) {
        for (int i = 0; i < M; i++) {
            matrix[i][0] = 0;
        }
    }
}

void printMatrix(int matrix[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[M][N] = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}
    };
    
    printf("Original matrix:\n");
    printMatrix(matrix);
    
    setZeroes(matrix);
    
    printf("Matrix after setting zeroes:\n");
    printMatrix(matrix);
    
    return 0;
}


