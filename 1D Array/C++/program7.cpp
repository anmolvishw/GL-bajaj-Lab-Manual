#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Second largest number doesn't exist" << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter the element in arr[0]: ";
    cin >> arr[0];
    cout << "Enter the element in arr[1]: ";
    cin >> arr[1];

    int max, smax;

    if (arr[0] > arr[1]) {
        max = arr[0];
        smax = arr[1];
    } else {
        max = arr[1];
        smax = arr[0];
    }

    for (int i = 2; i < n; i++) {
        cout << "Enter the element in arr[" << i << "]: ";
        cin >> arr[i];

        if (arr[i] > max) {
            smax = max;
            max = arr[i];
        } else if (arr[i] > smax && arr[i] < max) {
            smax = arr[i];
        }
    }

    if (smax == max) {
        cout << "There is no second max element in this array" << endl;
    } else {
        cout << "The second largest element in this array is: " << smax << endl;
    }

    return 0;
}