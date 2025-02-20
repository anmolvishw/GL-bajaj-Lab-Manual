#include <iostream>
using namespace std;

int main() {
    float pi = 3.14f, radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << (pi * radius * radius) << endl;
    cout << "Perimeter of Circle: " << (2 * pi * radius) << endl;
    return 0;
}
