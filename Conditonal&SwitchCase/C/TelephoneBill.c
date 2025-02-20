#include <stdio.h>

int main() {
    int calls;
    double bill;

    printf("Enter the number of calls made in the month: ");
    scanf("%d", &calls);

    if (calls <= 50) {
        bill = 100;
    } else if (calls <= 100) {
        bill = 100 + (calls - 50) * 0.80;
    } else if (calls <= 200) {
        bill = 100 + 50 * 0.80 + (calls - 100) * 0.60;
    } else {
        bill = 100 + 50 * 0.80 + 100 * 0.60 + (calls - 200) * 0.40;
    }

    printf("Your monthly telephone bill is: Rs. %.2lf\n", bill);

    return 0;
}
