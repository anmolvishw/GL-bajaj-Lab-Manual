#include <stdio.h>

int main() {
    int num;
    printf("Enter a value: ");
    scanf("%d", &num);

    if ((num & 1) == 0) {
        printf("Value is Even\n");
    } else {
        printf("Value is Odd\n");
    }

    return 0;
}
