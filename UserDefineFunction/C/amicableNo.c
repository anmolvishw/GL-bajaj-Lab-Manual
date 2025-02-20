#include <stdio.h>

void sol(int n1, int n2) {
    int i, sum1 = 0, sum2 = 0;
    for (i = 1; i <= n1 / 2; i++) {
        if (n1 % i == 0) {
            sum1 += i;
        }
    }
    for (i = 1; i <= n2 / 2; i++) {
        if (n2 % i == 0) {
            sum2 += i;
        }
    }
    if (sum1 == n2 && sum2 == n1) {
        printf("Amicable numbers\n");
    } else {
        printf("Not Amicable numbers\n");
    }
}

int main() {
    sol(220, 284);
    return 0;
}