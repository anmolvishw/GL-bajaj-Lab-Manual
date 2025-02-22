import java.util.Scanner;

public class program7 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();

        if (n < 2) {
            System.out.println("Second largest number doesn't exist");
            scanner.close();
            return;
        }

        int[] arr = new int[n];
        System.out.print("Enter the element in arr[0]: ");
        arr[0] = scanner.nextInt();
        System.out.print("Enter the element in arr[1]: ");
        arr[1] = scanner.nextInt();

        int max, smax;

        if (arr[0] > arr[1]) {
            max = arr[0];
            smax = arr[1];
        } else {
            max = arr[1];
            smax = arr[0];
        }

        for (int i = 2; i < n; i++) {
            System.out.print("Enter the element in arr[" + i + "]: ");
            arr[i] = scanner.nextInt();

            if (arr[i] > max) {
                smax = max;
                max = arr[i];
            } else if (arr[i] > smax && arr[i] < max) {
                smax = arr[i];
            }
        }

        if (smax == max) {
            System.out.println("There is no second max element in this array");
        } else {
            System.out.println("The second largest element in this array is: " + smax);
        }

        scanner.close();
    }
}