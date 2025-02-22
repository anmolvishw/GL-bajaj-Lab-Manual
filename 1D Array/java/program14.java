import java.util.Arrays;

public class program14 {
    public static int minChocolateDifference(int[] arr, int n, int m) {
        if (m == 0 || n == 0 || n < m) {
            return -1;
        }

        Arrays.sort(arr);

        int min_diff = Integer.MAX_VALUE;

        for (int i = 0; i + m - 1 < n; i++) {
            int diff = arr[i + m - 1] - arr[i];
            if (diff < min_diff) {
                min_diff = diff;
            }
        }

        return min_diff;
    }

    public static void main(String[] args) {
        int[] arr = {7, 3, 2, 4, 9, 12, 56};
        int n = arr.length;
        int m = 3;

        int result = minChocolateDifference(arr, n, m);

        if (result != -1) {
            System.out.println("Min difference: " + result);
        } else {
            System.out.println("No packets for students.");
        }
    }
}