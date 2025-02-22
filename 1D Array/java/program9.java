public class program9 {
    public static int maxSubarraySum(int[] arr, int n) {
        int maxsum = Integer.MIN_VALUE;
        int currentsum = 0;

        for (int i = 0; i < n; i++) {
            currentsum += arr[i];

            if (currentsum > maxsum)
                maxsum = currentsum;

            if (currentsum < 0)
                currentsum = 0;
        }

        return maxsum;
    }

    public static void main(String[] args) {
        int[] arr = {-2, -3, 4, -1, -2, 1, 5, -3};
        int n = arr.length;

        int maxsum = maxSubarraySum(arr, n);
        System.out.println("Maximum subarray sum: " + maxsum);
    }
}