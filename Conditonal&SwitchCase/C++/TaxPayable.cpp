#include <iostream>
using namespace std;

int main() {
    double income;

    cout << "Enter Your Total Income: ";
    cin >> income;

    cout << "Your Income: " << income << endl;

    if (income <= 100000) {
        cout << "No Tax Deduction" << endl;
    } else if (income <= 150000) {
        cout << "Total Deduction: " << (income - 100000) * 0.10 << endl;
    } else if (income <= 250000) {
        cout << "Total Deduction: " << 5000 + (income - 150000) * 0.20 << endl;
    } else {
        cout << "Total Deduction: " << 25000 + (income - 250000) * 0.30 << endl;
    }

    return 0;
}
