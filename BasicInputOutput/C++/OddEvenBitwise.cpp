#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a value: ";
    cin >> num;

    cout << ((num & 1) == 0 ? "Value is Even" : "Value is Odd") << endl;

    return 0;
}
