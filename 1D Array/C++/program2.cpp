#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int low, int high, int target) {
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
void bubbleSort(int arr[], int size) {
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

int main() {
    int n, target;

    // Taking user input for array size
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Array declaration

    // Taking user input for array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array
    bubbleSort(arr, n);

    // Taking user input for the target element
    cout << "Enter the element to search: ";
    cin >> target;

    // Performing binary search
    int result = binarySearch(arr, 0, n - 1, target);

    // Displaying the result
    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array" << endl;
    }

    return 0;
}