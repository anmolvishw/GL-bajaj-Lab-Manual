#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the range: ");
    scanf("%d", &n);

    printf("Harmonic Sequence is: ");
    for (int i = 1; i <= n; i++) {
        printf("1/%d", i);
        if (i < n) printf(" + ");
        sum += 1.0 / i;
    }

    printf("\nsum of harmonic series: %.6lf\n", sum);
    return 0;
}
