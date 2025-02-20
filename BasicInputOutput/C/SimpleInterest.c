#include <stdio.h>

int main() {
    double Principle, rate, time;
    printf("Enter Principle, rate, and time: ");
    scanf("%lf %lf %lf", &Principle, &rate, &time);

    double interest = (Principle * rate * time) / 100;
    double totalAmount = interest + Principle;

    printf("Simple Interest: %.2lf\n", interest);
    printf("Total Amount: %.2lf\n", totalAmount);

    return 0;
}
