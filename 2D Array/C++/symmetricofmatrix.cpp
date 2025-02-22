#include <iostream>
using namespace std;

#define N 3  // Define matrix size (NxN)

void transpose(int matrix[N][N], int transposed[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

bool isSymmetric(int matrix[N][N], int transposed[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] != transposed[i][j]) {
                return false; // Not symmetric
            }
        }
    }
    return true;
}

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
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
    
    cout << "Original Matrix:" << endl;
    printMatrix(matrix);
    
    cout << "Transpose of the Matrix:" << endl;
    printMatrix(transposed);
    
    if (isSymmetric(matrix, transposed)) {
        cout << "The given matrix is symmetric." << endl;
    } else {
        cout << "The given matrix is not symmetric." << endl;
    }
    
    return 0;
}