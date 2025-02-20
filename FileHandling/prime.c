#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    FILE *file = fopen("Prime.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            fprintf(file, "%d\n", i);
        }
    }

    fclose(file);
    printf("Prime numbers between 1 and 100 have been written to Prime.txt\n");
    return 0;
}