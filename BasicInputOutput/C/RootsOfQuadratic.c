#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Enter a, b, c values: ");
    scanf("%f %f %f", &a, &b, &c);

    double d = b * b - 4 * a * c;

    if (d > 0) {
        double root1 = (-b + sqrt(d)) / (2 * a);
        double root2 = (-b - sqrt(d)) / (2 * a);
        printf("Root 1: %.2lf\n", root1);
        printf("Root 2: %.2lf\n", root2);
    } else if (d == 0) {
        double root = -b / (2 * a);
        printf("Root 1 and Root 2 are equal: %.2lf\n", root);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-d) / (2 * a);
        printf("Root 1: %.2lf + i %.2lf\n", realPart, imaginaryPart);
        printf("Root 2: %.2lf - i %.2lf\n", realPart, imaginaryPart);
    }

    return 0;
}
