#include <stdio.h>
#include <stdlib.h>

int main() {
    int guess, value;
    do {
        printf("Enter your guess value between 1 to 10: ");
        scanf("%d", &guess);

        value = rand() % 10 + 1; // Generate random value between 1 to 10
        printf("Generated Value is %d\n", value);

        if (guess > value) {
            printf("You guessed a larger value.\n");
        } else if (guess == value) {
            printf("Congrats! Your guess is right.\n");
            break;
        } else {
            printf("You guessed a smaller value.\n");
        }
    } while (1);

    return 0;
}
