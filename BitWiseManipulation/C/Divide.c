#include <stdio.h>
#include <stdlib.h>

int divide(int a, int b) {
    int sign = ((a < 0) ^ (b < 0)) ? -1 : 1;
    a = abs(a);
    b = abs(b);
    int quotient = 0;
    while (a >= b) {
        a -= b;
        quotient++;
    }
    return sign * quotient;
}

int main() {
    int a, b;
    printf("Enter dividend and divisor: ");
    scanf("%d %d", &a, &b);
    if (b == 0) {
        printf("Division by zero is not allowed.\n");
        return 1;
    }
    printf("Quotient: %d\n", divide(a, b));
    return 0;
}
