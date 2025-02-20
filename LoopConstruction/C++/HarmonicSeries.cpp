#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter the range: ";
    cin >> n;

    cout << "Harmonic Sequence is: ";
    for (int i = 1; i <= n; i++) {
        cout << "1/" << i;
        if (i < n) cout << " + ";
        sum += 1.0 / i;
    }

    cout << "\nsum of harmonic series: " << fixed << setprecision(6) << sum << endl;
    return 0;
}
