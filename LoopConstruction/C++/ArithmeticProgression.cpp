#include <iostream>
using namespace std;

int main() {
    int first_term, common_diff, n, term, sum = 0;

    cout << "Enter the first term of the A.P.: ";
    cin >> first_term;

    cout << "Enter the common difference: ";
    cin >> common_diff;

    cout << "Input number of terms in the series: ";
    cin >> n;

    cout << "Arithmetic Progression : ";
    for (int i = 0; i < n; i++) {
        term = first_term + i * common_diff;
        cout << term << " ";
        sum += term;
    }

    cout << "\nThe sum of the AP series is: " << sum << endl;
    return 0;
}
