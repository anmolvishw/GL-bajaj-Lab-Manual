#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principle, rate, time;
    cout << "Enter the Principal Amount: ";
    cin >> principle;
    cout << "Enter the Rate of Interest and Time: ";
    cin >> rate >> time;

    double compoundInterest = principle * pow((1 + rate / 100), time) - principle;
    cout << "Compound Interest: " << compoundInterest << endl;

    return 0;
}
