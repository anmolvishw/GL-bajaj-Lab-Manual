#include <iostream>
using namespace std;

int main() {
    double Principle, rate, time;
    cout << "Enter Principle, rate, and time: ";
    cin >> Principle >> rate >> time;

    double interest = (Principle * rate * time) / 100;
    double totalAmount = interest + Principle;

    cout << "Simple Interest: " << interest << endl;
    cout << "Total Amount: " << totalAmount << endl;

    return 0;
}
