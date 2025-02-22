#include <iostream>
using namespace std;

void reverse_arr(int arr[], int n) {
    int i = 0;
    int j = n - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    cout << "The reversed array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter the element in arr[" << i << "]: ";
        cin >> arr[i];
    }
    reverse_arr(arr, n);
    return 0;
}