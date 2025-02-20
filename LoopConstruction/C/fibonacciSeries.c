#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%lld ", first);
        } else if (i == 1) {
            printf("%lld ", second);
        } else {
            next = first + second;
            printf("%lld ", next);
            first = second;
            second = next;
        }
    }

    printf("\n");

    return 0;
}
