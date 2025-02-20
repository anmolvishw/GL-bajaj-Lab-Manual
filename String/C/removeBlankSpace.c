#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ') {
            printf("%c", str[i]);
            count++;
        }
    }
    printf("\nNo of characters: %d\n", count);
    return 0;
}