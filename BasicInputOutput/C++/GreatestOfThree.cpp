#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3;
    cout << "Enter the 3 values: ";
    cin >> num1 >> num2 >> num3;

    if ((num1 == num2) && (num2 == num3)) {
        cout << "All values are equal" << endl;
    } else {
        if (num1 > num2) {
            if (num1 > num3) {
                cout << "Num1 is greatest: " << num1 << endl;
            } else {
                cout << "Num3 is greatest: " << num3 << endl;
            }
        } else if (num2 > num3) {
            cout << "Num2 is greatest: " << num2 << endl;
        } else {
            cout << "Num3 is greatest: " << num3 << endl;
        }
    }

    return 0;
}
