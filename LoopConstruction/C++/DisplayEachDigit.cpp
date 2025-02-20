#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter Five Digit Value: ";
    cin >> n;

    cout << "Reverse: ";
    while(n != 0) {
        cout << n % 10 << " ";
        count = count * 10 + n % 10;
        n /= 10;
    }

    cout << "\nForward: ";
    while(count != 0) {
        cout << count % 10 << " ";
        count /= 10;
    }

    return 0;
}
