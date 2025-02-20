#include <stdio.h>
#include <math.h>

int main() {
    int num, sum = 0, temp, remainder, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    n = 0;

    // Count the number of digits in the number
    while(temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = num;

    // Calculate the sum of each digit raised to the power of n
    while(temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    if(sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
