#include <iostream>
#include <cstdlib>
using namespace std;

int divide(int a, int b) {
    int sign = ((a < 0) ^ (b < 0)) ? -1 : 1;
    a = abs(a);
    b = abs(b);
    int quotient = 0;
    while (a >= b) {
        a -= b;
        quotient++;
    }
    return sign * quotient;
}

int main() {
    int a, b;
    cout << "Enter dividend and divisor: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "Division by zero is not allowed." << endl;
        return 1;
    }
    cout << "Quotient: " << divide(a, b) << endl;
    return 0;
}
