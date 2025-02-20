#include <stdio.h>

int sol(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + sol(n / 10);
}

int main() {
    printf("%d\n", sol(12345));
    return 0;
}