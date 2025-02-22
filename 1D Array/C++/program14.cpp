#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int minChocolateDifference(int arr[], int n, int m) {
    if (m == 0 || n == 0 || n < m) {
        return -1;
    }

    sort(arr, arr + n);

    int min_diff = INT_MAX;

    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < min_diff) {
            min_diff = diff;
        }
    }

    return min_diff;
}

int main() {
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 3;

    int result = minChocolateDifference(arr, n, m);

    if (result != -1) {
        cout << "Min difference: " << result << endl;
    } else {
        cout << "No packets for students." << endl;
    }

    return 0;
}