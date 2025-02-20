#include <stdio.h>

int main() {
    double num1, num2;
    printf("Enter the Two Values: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Addition A + B: %.2lf\n", num1 + num2);
    printf("Subtraction A - B: %.2lf\n", num1 - num2);
    printf("Multiply A * B: %.2lf\n", num1 * num2);
    printf("Division A / B: %.2lf\n", num1 / num2);
    printf("Modulus A %% B: %.2lf\n", fmod(num1, num2));
    
    printf("Inc Dec: A++ --B --A B++: %.2lf %.2lf %.2lf %.2lf\n", 
           num1++, --num2, --num1, num2++);

    return 0;
}
