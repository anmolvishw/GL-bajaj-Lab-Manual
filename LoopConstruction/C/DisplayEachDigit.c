#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter Five Digit Value: ");
    scanf("%d", &n);

    printf("Reverse: ");
    while(n != 0) {
        printf("%d ", n % 10);
        count = count * 10 + n % 10;
        n /= 10;
    }

    printf("\nForward: ");
    while(count != 0) {
        printf("%d ", count % 10);
        count /= 10;
    }

    return 0;
}
