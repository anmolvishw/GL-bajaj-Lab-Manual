#include <iostream>
using namespace std;

int main() {
    int n;
    long long first = 0, second = 1, next;

    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << first << " ";
        } else if (i == 1) {
            cout << second << " ";
        } else {
            next = first + second;
            cout << next << " ";
            first = second;
            second = next;
        }
    }

    cout << endl;

    return 0;
}
