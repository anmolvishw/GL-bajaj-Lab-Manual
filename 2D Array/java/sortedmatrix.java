import java.util.Arrays;

public class sortedmatrix {
    static final int N = 4;

    public static void printSortedMatrix(int[][] mat) {
        int size = N * N;
        int[] arr = new int[size];
        int k = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                arr[k++] = mat[i][j];
            }
        }

        Arrays.sort(arr);

        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[][] mat = { {10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50} };

        System.out.print("Sorted elements: ");
        printSortedMatrix(mat);
    }
}