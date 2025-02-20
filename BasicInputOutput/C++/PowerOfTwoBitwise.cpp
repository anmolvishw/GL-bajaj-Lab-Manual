#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a value: ";
    cin >> num;

    int check = num & (num - 1);
    if (check == 0) {
        cout << num << " is a Power of 2" << endl;
    } else {
        cout << num << " is not a Power of 2" << endl;
    }

    return 0;
}
