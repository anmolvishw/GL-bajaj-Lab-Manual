#include <stdio.h>

int square(int n) {
    int result = 0, i;
    int positiveN = n < 0 ? -n : n;
    for (i = 0; i < positiveN; i++) {
        result += positiveN;
    }
    return n < 0 ? -result : result;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Square: %d\n", square(n));
    return 0;
}
