#include <iostream>
using namespace std;

int sol(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + sol(n / 10);
}

int main() {
    cout << sol(12345) << endl;
    return 0;
}