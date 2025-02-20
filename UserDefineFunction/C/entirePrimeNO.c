#include <stdio.h>

void sol(int n) {
    int i, j, flag;
    for (i = 1; i <= n; i++) {
        if (i == 1 || i == 0) {
            continue;
        }
        flag = 1;
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            printf("%d\n", i);
        }
    }
}

int main() {
    sol(300);
    return 0;
}