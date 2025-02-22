#include <iostream>
using namespace std;

#define N 3  // Define matrix size (NxN)

int diagonalSum(int matrix[N][N]) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += matrix[i][i];  
        if (i != (N - i - 1)) {
            sum += matrix[i][N - i - 1]; 
        }
    }
    return sum;
}

int main() {
    int matrix1[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int matrix2[N][N] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    
    int sum1 = diagonalSum(matrix1);
    int sum2 = diagonalSum(matrix2);
    int totalSum = sum1 + sum2;
    
    cout << "Sum of diagonals of Matrix 1: " << sum1 << endl;
    cout << "Sum of diagonals of Matrix 2: " << sum2 << endl;
    cout << "Total sum of diagonal elements: " << totalSum << endl;
    
    return 0;
}