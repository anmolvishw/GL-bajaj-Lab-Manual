import java.util.Scanner;

public class program2 {
    // Function to perform binary search
    public static int binarySearch(int[] arr, int low, int high, int target) {
        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == target)
                return mid; // Element found

            if (arr[mid] < target)
                low = mid + 1; // Search in right half
            else
                high = mid - 1; // Search in left half
        }
        return -1; // Element not found
    }

    // Function to sort array using Bubble Sort (since Binary Search needs sorted array)
    public static void bubbleSort(int[] arr, int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap elements
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n, target;

        // Taking user input for array size
        System.out.print("Enter the number of elements: ");
        n = scanner.nextInt();

        int[] arr = new int[n]; // Array declaration

        // Taking user input for array elements
        System.out.println("Enter " + n + " elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        // Sorting the array
        bubbleSort(arr, n);

        // Taking user input for the target element
        System.out.print("Enter the element to search: ");
        target = scanner.nextInt();

        // Performing binary search
        int result = binarySearch(arr, 0, n - 1, target);

        // Displaying the result
        if (result != -1) {
            System.out.println("Element " + target + " found at index " + result);
        } else {
            System.out.println("Element " + target + " not found in the array");
        }

        scanner.close();
    }
}