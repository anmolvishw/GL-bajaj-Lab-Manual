#include <stdio.h>

void sol(int n) {
    int a = 0, b = 1, c, i;
    int sum = 0;
    printf("%d %d ", a, b);
    for (i = 2; i <= n; i++) {
        c = a + b;
        sum += c;
        a = b;
        b = c;
        // print each step
        printf("%d ", c);
    }
    printf("\nsum: %d\n", sum);
}

int main() {
    sol(20);
    return 0;
}