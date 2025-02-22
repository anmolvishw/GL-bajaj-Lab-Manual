public class program5 {
    public static void mergeSortedArrays(int[] arr1, int size1, int[] arr2, int size2, int[] merged, int[] mergedSize) {
        int i = 0, j = 0, k = 0;
        while (i < size1 && j < size2) {
            if (arr1[i] < arr2[j]) {
                if (k == 0 || merged[k - 1] != arr1[i]) {
                    merged[k++] = arr1[i];
                }
                i++;
            } else if (arr1[i] > arr2[j]) {
                if (k == 0 || merged[k - 1] != arr2[j]) {
                    merged[k++] = arr2[j];
                }
                j++;
            } else { // If both elements are equal
                if (k == 0 || merged[k - 1] != arr1[i]) {
                    merged[k++] = arr1[i];
                }
                i++;
                j++;
            }
        }
        while (i < size1) { // Copy remaining elements from arr1
            if (k == 0 || merged[k - 1] != arr1[i]) {
                merged[k++] = arr1[i];
            }
            i++;
        }
        while (j < size2) { // Copy remaining elements from arr2
            if (k == 0 || merged[k - 1] != arr2[j]) {
                merged[k++] = arr2[j];
            }
            j++;
        }
        mergedSize[0] = k;
    }

    public static void main(String[] args) {
        int[] arr1 = {1, 3, 5, 7};
        int[] arr2 = {2, 3, 6, 7, 8};
        int size1 = arr1.length;
        int size2 = arr2.length;
        int[] merged = new int[size1 + size2]; // Maximum possible size
        int[] mergedSize = new int[1];
        
        mergeSortedArrays(arr1, size1, arr2, size2, merged, mergedSize);
        
        System.out.print("Merged Array: ");
        for (int i = 0; i < mergedSize[0]; i++) {
            System.out.print(merged[i] + " ");
        }
        System.out.println();
    }
}