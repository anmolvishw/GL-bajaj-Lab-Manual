#include <stdio.h>
#include <stdlib.h>

#define N 4  

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void printSortedMatrix(int mat[N][N]) {
    int size = N * N;
    int arr[size];
    int k = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[k++] = mat[i][j];
        }
    }

    qsort(arr, size, sizeof(int), compare);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mat[N][N] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50} };

    printf("Sorted elements: ");
    printSortedMatrix(mat);

    return 0;
}

