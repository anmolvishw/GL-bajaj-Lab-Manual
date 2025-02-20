public class permutation {
    public static void swap(char[] arr, int i, int j) {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void permute(char[] str, int l, int r) {
        if (l == r) {
            System.out.println(new String(str));
        } else {
            for (int i = l; i <= r; i++) {
                swap(str, l, i);
                permute(str, l + 1, r);
                swap(str, l, i); // backtrack
            }
        }
    }

    public static void main(String[] args) {
        String str = "ABC";
        int n = str.length();
        permute(str.toCharArray(), 0, n - 1);
    }
}