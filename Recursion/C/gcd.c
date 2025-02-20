#include <stdio.h>

int sol(int a, int b) {
    if (b == 0) {
        return a;
    }
    return sol(b, a % b);
}

int main() {
    printf("%d\n", sol(10, 15));
    return 0;
}