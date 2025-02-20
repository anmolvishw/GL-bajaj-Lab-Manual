#include <iostream>
using namespace std;

int main() {
    int x, y;
    long long result = 1;

    cout << "Enter the value of x and y: ";
    cin >> x >> y;

    for(int i = 1; i <= y; i++) {
        result *= x;
    }

    cout << x << " raised to the power " << y << " is " << result << endl;

    return 0;
}
