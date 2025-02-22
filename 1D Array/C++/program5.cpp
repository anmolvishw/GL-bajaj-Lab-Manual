#include <iostream>
using namespace std;

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[], int &mergedSize) {
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
    mergedSize = k;
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 3, 6, 7, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[size1 + size2]; // Maximum possible size
    int mergedSize;
    
    mergeSortedArrays(arr1, size1, arr2, size2, merged, mergedSize);
    
    cout << "Merged Array: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;
    
    return 0;
}