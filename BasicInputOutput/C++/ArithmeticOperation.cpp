#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter the Two Values: ";
    cin >> num1 >> num2;

    cout << "Addition A + B: " << (num1 + num2) << endl;
    cout << "Subtraction A - B: " << (num1 - num2) << endl;
    cout << "Multiply A * B: " << (num1 * num2) << endl;
    cout << "Division A / B: " << (num1 / num2) << endl;
    cout << "Modulus A % B: " << fmod(num1, num2) << endl;
    
    cout << "Inc Dec: A++ --B --A B++: " 
         << num1++ << " " << --num2 << " " << --num1 << " " << num2++ << endl;

    return 0;
}
