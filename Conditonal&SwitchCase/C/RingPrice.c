#include <stdio.h>

int main() {
    int ringType, numEngravings;
    double totalCost;

    printf("Enter the ring type (1 for Gold plated, 2 for Solid gold, 3 for Silver plated): ");
    scanf("%d", &ringType);

    printf("Enter the number of engraved units: ");
    scanf("%d", &numEngravings);

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
        printf("Invalid ring type!\n");
        return 1;  // Exit with an error code
    }

    printf("Total cost of the ring: Rs. %.2lf\n", totalCost);

    return 0;
}
