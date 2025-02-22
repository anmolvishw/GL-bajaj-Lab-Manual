public class multiplicationofmatrix {
    static final int N = 3;  // Define matrix size (NxN)

    // Function to multiply two matrices
    public static void multiplyMatrices(int[][] A, int[][] B, int[][] result) {
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
    public static void printMatrix(int[][] matrix) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int[][] A = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        
        int[][] B = {
            {9, 8, 7},
            {6, 5, 4},
            {3, 2, 1}
        };
        
        int[][] result = new int[N][N];
        
        // Multiply matrices
        multiplyMatrices(A, B, result);
        
        System.out.println("Matrix A:");
        printMatrix(A);
        
        System.out.println("Matrix B:");
        printMatrix(B);
        
        System.out.println("Resultant Matrix (A * B):");
        printMatrix(result);
    }
}