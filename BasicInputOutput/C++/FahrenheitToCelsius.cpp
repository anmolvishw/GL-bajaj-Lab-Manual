#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;
    cout << "Enter the Fahrenheit value: ";
    cin >> fahrenheit;

    celsius = ((fahrenheit - 32) * 5) / 9;
    cout << "Celsius: " << celsius << endl;

    return 0;
}
