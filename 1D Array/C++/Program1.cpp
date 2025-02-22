#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "The elements in the array are:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter the element in the array arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << "Enter the target element: ";
    cin >> target;
    int result = linear_search(arr, n, target);
    if (result != -1) {
        cout << "The target " << target << " found at the index " << result << endl;
    } else {
        cout << "The target " << target << " not found in the array" << endl;
    }
    return 0;
}