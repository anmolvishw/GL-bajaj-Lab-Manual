#include <stdio.h>

int main() {
    int num;
    printf("Enter a value: ");
    scanf("%d", &num);

    int check = num & (num - 1);
    if (check == 0) {
        printf("%d is a Power of 2\n", num);
    } else {
        printf("%d is not a Power of 2\n", num);
    }

    return 0;
}
