#include <iostream>
#include <algorithm>
using namespace std;

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

    sort(arr, arr + size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int mat[N][N] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50} };

    cout << "Sorted elements: ";
    printSortedMatrix(mat);

    return 0;
}