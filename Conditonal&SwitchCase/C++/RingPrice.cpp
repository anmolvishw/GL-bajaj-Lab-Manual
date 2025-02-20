#include <iostream>
using namespace std;

int main() {
    int ringType, numEngravings;
    double totalCost;

    cout << "Enter the ring type (1 for Gold plated, 2 for Solid gold, 3 for Silver plated): ";
    cin >> ringType;

    cout << "Enter the number of engraved units: ";
    cin >> numEngravings;

    // Calculate the cost based on the ring type
    if (ringType == 1) {
        totalCost = 500 + (70.30 * numEngravings);  // Gold plated
    }
    else if (ringType == 2) {
        totalCost = 1000 + (10.40 * numEngravings); // Solid gold
    }
    else if (ringType == 3) {
        totalCost = 300 + (5.10 * numEngravings);   // Silver plated
    }
    else {
        cout << "Invalid ring type!" << endl;
        return 1;  // Exit with an error code
    }

    cout << "Total cost of the ring: Rs. " << totalCost << endl;

    return 0;
}
