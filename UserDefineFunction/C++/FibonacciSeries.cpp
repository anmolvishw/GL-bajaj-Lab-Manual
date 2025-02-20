#include <iostream>
using namespace std;

void sol(int n) {
    int a = 0, b = 1, c, i;
    int sum = 0;
    cout << a << " " << b << " ";
    for (i = 2; i <= n; i++) {
        c = a + b;
        sum += c;
        a = b;
        b = c;
        // print each step
        cout << c << " ";
    }
    cout << "\nsum: " << sum << endl;
}

int main() {
    sol(20);
    return 0;
}