#include <stdio.h>
#include <math.h>

int main() {
    double principle, rate, time;
    printf("Enter the Principal Amount: ");
    scanf("%lf", &principle);
    printf("Enter the Rate of Interest and Time: ");
    scanf("%lf %lf", &rate, &time);

    double compoundInterest = principle * pow((1 + rate / 100), time) - principle;
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}
