#include <iostream>
using namespace std;

int main() {
    int num1, num2, i, hcf;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    for(i = 1; i <= num1 && i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    cout << "The H.C.F of " << num1 << " and " << num2 << " is: " << hcf << endl;

    return 0;
}
