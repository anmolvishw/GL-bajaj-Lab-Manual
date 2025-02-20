#include <stdio.h>

int sol(int a, int b, int c) {
    if (b == 0) {
        return 1;
    }
    if (b % 2 == 0) {
        int y = sol(a, b / 2, c);
        return (y * y) % c;
    } else {
        return ((a % c) * sol(a, b - 1, c)) % c;
    }
}

int main() {
    printf("%d\n", sol(2312, 3434, 6789));
    return 0;
}