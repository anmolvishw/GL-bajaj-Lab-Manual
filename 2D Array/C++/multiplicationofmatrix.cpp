#include <iostream>
using namespace std;

#define N 3  // Define matrix size (NxN)

// Function to multiply two matrices
void multiplyMatrices(int A[N][N], int B[N][N], int result[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = 0;
            for (int k = 0; k < N; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int B[N][N] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    
    int result[N][N];
    
    // Multiply matrices
    multiplyMatrices(A, B, result);
    
    cout << "Matrix A:" << endl;
    printMatrix(A);
    
    cout << "Matrix B:" << endl;
    printMatrix(B);
    
    cout << "Resultant Matrix (A * B):" << endl;
    printMatrix(result);
    
    return 0;
}