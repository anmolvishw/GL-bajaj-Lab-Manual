#include <iostream>
using namespace std;

void sol(int n) {
    int sum = 0;
    int temp = n;
    while (n > 0) {
        int rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if (temp == sum) {
        cout << temp << endl;
    }
}

int main() {
    for (int i = 100; i <= 500; i++) {
        sol(i);
    }
    return 0;
}