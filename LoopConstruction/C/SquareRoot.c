#include <stdio.h>

int squareRoot(int x) {
    if (x == 0 || x == 1)
        return x;

    int start = 1, end = x, result = 0;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mid <= x / mid) {
            result = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int main() {
    int x;
    printf("Enter a non-negative integer: ");
    scanf("%d", &x);

    if (x < 0) {
        printf("Invalid input! Please enter a non-negative integer.\n");
        return 0;
    }

    printf("Square root of %d is: %d\n", x, squareRoot(x));
    return 0;
}
