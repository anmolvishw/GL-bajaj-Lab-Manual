#include <iostream>
using namespace std;

int square(int n) {
    int result = 0;
    int positiveN = n < 0 ? -n : n;
    for (int i = 0; i < positiveN; i++) {
        result += positiveN;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square: " << square(n) << endl;
    return 0;
}
