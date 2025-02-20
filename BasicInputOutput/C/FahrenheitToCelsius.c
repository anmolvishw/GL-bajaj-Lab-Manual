#include <stdio.h>

int main() {
    double fahrenheit, celsius;
    printf("Enter the Fahrenheit value: ");
    scanf("%lf", &fahrenheit);

    celsius = ((fahrenheit - 32) * 5) / 9;
    printf("Celsius: %.2lf\n", celsius);

    return 0;
}
