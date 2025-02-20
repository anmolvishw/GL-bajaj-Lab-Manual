#include <iostream>
using namespace std;

int main() {
    int calls;
    double bill;

    cout << "Enter the number of calls made in the month: ";
    cin >> calls;

    if (calls <= 50) {
        bill = 100;
    } else if (calls <= 100) {
        bill = 100 + (calls - 50) * 0.80;
    } else if (calls <= 200) {
        bill = 100 + 50 * 0.80 + (calls - 100) * 0.60;
    } else {
        bill = 100 + 50 * 0.80 + 100 * 0.60 + (calls - 200) * 0.40;
    }

    cout << "Your monthly telephone bill is: Rs. " << bill << endl;

    return 0;
}
