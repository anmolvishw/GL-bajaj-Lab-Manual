#include <iostream>
using namespace std;

int sol(int a, int b) {
    if (b == 0) {
        return a;
    }
    return sol(b, a % b);
}

int main() {
    cout << sol(10, 15) << endl;
    return 0;
}