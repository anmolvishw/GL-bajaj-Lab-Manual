#include <iostream>
using namespace std;

int squareRoot(int x) {
    if (x == 0 || x == 1)
        return x;

    int start = 1, end = x, result = 0;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mid <= x / mid) {
            result = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int main() {
    int x;
    cout << "Enter a non-negative integer: ";
    cin >> x;

    if (x < 0) {
        cout << "Invalid input! Please enter a non-negative integer." << endl;
        return 0;
    }

    cout << "Square root of " << x << " is: " << squareRoot(x) << endl;
    return 0;
}
