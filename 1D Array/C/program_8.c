#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void waveSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        if (i > 0 && arr[i] < arr[i - 1]) {
            swap(&arr[i], &arr[i - 1]);
        }
        if (i < n - 1 && arr[i] < arr[i + 1]) {
            swap(&arr[i], &arr[i + 1]);
        }
    }
}

int main() {
    int arr[] = {10, 5, 6, 3, 2, 20, 100, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    waveSort(arr, n);
    
    printf("Wave Form Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
