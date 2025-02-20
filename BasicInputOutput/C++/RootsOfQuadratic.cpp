#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter a, b, c values: ";
    cin >> a >> b >> c;

    double d = b * b - 4 * a * c;

    if (d > 0) {
        double root1 = (-b + sqrt(d)) / (2 * a);
        double root2 = (-b - sqrt(d)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (d == 0) {
        double root = -b / (2 * a);
        cout << "Root 1 and Root 2 are equal: " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-d) / (2 * a);
        cout << "Root 1: " << realPart << " + i " << imaginaryPart << endl;
        cout << "Root 2: " << realPart << " - i " << imaginaryPart << endl;
    }

    return 0;
}
