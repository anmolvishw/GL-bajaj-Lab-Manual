#include <stdio.h>

void sol(int a, int x, int b, int n) {
    int y = 0;
    if (n == 1) {
        y = a * x % b;
    } else if (n == 2) {
        y = a * x * x + b * b;
    } else if (n == 3) {
        y = a - b * x;
    } else if (n == 4) {
        y = a + x * b;
    }
    printf("%d\n", y);
}

int main() {
    sol(2, 3, 4, 1);
    return 0;
}