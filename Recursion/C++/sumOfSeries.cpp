#include <iostream>
#include <cmath>
using namespace std;

double sol(int n) {
    if (n == 0) {
        return 0;
    }
    return pow(-1, n + 1) * (1.0 / n) + sol(n - 1);
}

int main() {
    cout << sol(3) << endl;
    return 0;
}