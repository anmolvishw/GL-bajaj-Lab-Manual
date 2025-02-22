public class program10 {
    public static void slidingWindowMax(int[] arr, int n, int k) {
        for (int i = 0; i <= n - k; i++) {
            int max = arr[i];
            for (int j = 1; j < k; j++) {
                if (arr[i + j] > max) {
                    max = arr[i + j];
                }
            }
            System.out.print(max + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
        int k = 4;
        int n = arr.length;
        
        slidingWindowMax(arr, n, k);
    }
}