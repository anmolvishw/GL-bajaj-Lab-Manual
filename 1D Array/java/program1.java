import java.util.Scanner;

public class program1 {
    public static int linearSearch(int[] arr, int n, int target) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];
        System.out.println("The elements in the array are:");
        for (int i = 0; i < n; i++) {
            System.out.print("Enter the element in the array arr[" + i + "]: ");
            arr[i] = scanner.nextInt();
        }
        System.out.print("Enter the target element: ");
        int target = scanner.nextInt();
        int result = linearSearch(arr, n, target);
        if (result != -1) {
            System.out.println("The target " + target + " found at the index " + result);
        } else {
            System.out.println("The target " + target + " not found in the array");
        }
        scanner.close();
    }
}