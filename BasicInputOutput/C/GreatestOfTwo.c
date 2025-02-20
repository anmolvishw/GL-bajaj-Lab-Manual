#include <stdio.h>

int main() {
    float num1, num2;
    printf("Enter Two Values: ");
    scanf("%f %f", &num1, &num2);

    if (num1 == num2) {
        printf("Both Values are Equal\n");
    } else if (num1 > num2) {
        printf("Num1 is greater\n");
    } else {
        printf("Num2 is greatest\n");
    }

    return 0;
}
