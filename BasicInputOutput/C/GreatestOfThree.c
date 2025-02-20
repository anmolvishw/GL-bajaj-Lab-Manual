#include <stdio.h>

int main() {
    float num1, num2, num3;
    printf("Enter the 3 values: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if ((num1 == num2) && (num2 == num3)) {
        printf("All values are equal\n");
    } else {
        if (num1 > num2) {
            if (num1 > num3) {
                printf("Num1 is greatest: %.2f\n", num1);
            } else {
                printf("Num3 is greatest: %.2f\n", num3);
            }
        } else if (num2 > num3) {
            printf("Num2 is greatest: %.2f\n", num2);
        } else {
            printf("Num3 is greatest: %.2f\n", num3);
        }
    }

    return 0;
}
