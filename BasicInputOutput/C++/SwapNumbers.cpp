#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter Two Values: ";
    cin >> a >> b;

    cout << "Before Swap: " << a << ", " << b << endl;

 // with third variable
        // int temp  = a;
        // a=b;
        // b= temp;

    // Without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swap: " << a << ", " << b << endl;

    return 0;
}
