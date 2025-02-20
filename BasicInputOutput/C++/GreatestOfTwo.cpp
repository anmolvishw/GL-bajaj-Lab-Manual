#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    cout << "Enter Two Values: ";
    cin >> num1 >> num2;

    cout << ((num1 == num2) ? "Both Values are Equal" : (num1 > num2) ? "Num1 is greater" : "Num2 is greatest") << endl;

    return 0;
}
