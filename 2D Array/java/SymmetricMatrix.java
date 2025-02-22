public class SymmetricMatrix {
    static final int N = 3;  // Define matrix size (NxN)

    public static void transpose(int[][] matrix, int[][] transposed) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                transposed[j][i] = matrix[i][j];
            }
        }
    }

    public static boolean isSymmetric(int[][] matrix, int[][] transposed) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (matrix[i][j] != transposed[i][j]) {
                    return false; // Not symmetric
                }
            }
        }
        return true;
    }

    public static void printMatrix(int[][] matrix) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int[][] matrix = {
            {1, 2, 3},
            {2, 4, 5},
            {3, 5, 6}
        };
        
        int[][] transposed = new int[N][N];
        
        transpose(matrix, transposed);
        
        System.out.println("Original Matrix:");
        printMatrix(matrix);
        
        System.out.println("Transpose of the Matrix:");
        printMatrix(transposed);
        
        if (isSymmetric(matrix, transposed)) {
            System.out.println("The given matrix is symmetric.");
        } else {
            System.out.println("The given matrix is not symmetric.");
        }
    }
}