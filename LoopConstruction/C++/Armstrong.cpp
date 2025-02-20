#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, sum = 0, temp, remainder, n;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    n = 0;

    while(temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = num;

    while(temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    if(sum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
