#include <stdio.h>

int main() {
    double income;

    printf("Enter Your Total Income: ");
    scanf("%lf", &income);

    printf("Your Income: %.2lf\n", income);

    if (income <= 100000) {
        printf("No Tax Deduction\n");
    } else if (income <= 150000) {
        printf("Total Deduction: %.2lf\n", (income - 100000) * 0.10);
    } else if (income <= 250000) {
        printf("Total Deduction: %.2lf\n", 5000 + (income - 150000) * 0.20);
    } else {
        printf("Total Deduction: %.2lf\n", 25000 + (income - 250000) * 0.30);
    }

    return 0;
}
