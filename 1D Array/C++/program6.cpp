#include <iostream>
using namespace std;

void segregateZerosAndOnes(int arr[], int size) {
    int left = 0, right = size - 1;
    while (left < right) {
        while (arr[left] == 0 && left < right) {
            left++;
        }
        while (arr[right] == 1 && left < right) {
            right--;
        }
        if (left < right) {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    segregateZerosAndOnes(arr, size);
    
    cout << "Segregated Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}