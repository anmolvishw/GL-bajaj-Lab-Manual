#include <iostream>
using namespace std;

int main() {
    int amount;

    cout << "Enter the amount: ";
    cin >> amount;

    cout << "Number of notes required for Rs. " << amount << ":\n";

    cout << "500 Rs notes: " << amount / 500 << endl;  amount = amount % 500;
    cout << "200 Rs notes: " << amount / 200 << endl;  amount = amount % 200;
    cout << "100 Rs notes: " << amount / 100 << endl;  amount = amount % 100;
    cout << "50 Rs notes: " << amount / 50 << endl;  amount = amount % 5;
    cout << "20 Rs notes: " << amount / 20 << endl;   amount = amount % 20;
    cout << "10 Rs notes: " << amount / 10 << endl; amount = amount % 10;
    cout << "5 Rs notes: " << amount / 5 << endl; amount = amount % 5;
    cout << "2 Rs notes: " << amount / 2 << endl; amount = amount % 2;
    cout << "1 Rs notes: " << amount / 1 << endl;

    return 0;
}
