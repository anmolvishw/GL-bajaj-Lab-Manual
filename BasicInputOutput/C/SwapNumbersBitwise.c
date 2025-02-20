#include <stdio.h>

int main() {
    int a, b;
    printf("Enter Two Values: ");
    scanf("%d %d", &a, &b);

    printf("Before Swap: %d, %d\n", a, b);

    // Using Bitwise XOR to swap without a third variable
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After Swap: %d, %d\n", a, b);

    return 0;
}
