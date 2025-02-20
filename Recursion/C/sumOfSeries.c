#include <stdio.h>
#include <math.h>

double sol(int n) {
    if (n == 0) {
        return 0;
    }
    return pow(-1, n + 1) * (1.0 / n) + sol(n - 1);
}

int main() {
    printf("%lf\n", sol(3));
    return 0;
}