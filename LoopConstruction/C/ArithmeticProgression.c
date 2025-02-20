#include <stdio.h>

int main() {
    int first_term, common_diff, n, term, sum = 0;

    printf("Enter the first term of the A.P.: ");
    scanf("%d", &first_term);

    printf("Enter the common difference: ");
    scanf("%d", &common_diff);

    printf("Input number of terms in the series: ");
    scanf("%d", &n);

    printf("Arithmetic Progression : ");
    for (int i = 0; i < n; i++) {
        term = first_term + i * common_diff;
        printf("%d ", term);
        sum += term;
    }

    printf("\nThe sum of the AP series is: %d\n", sum);
    return 0;
}
