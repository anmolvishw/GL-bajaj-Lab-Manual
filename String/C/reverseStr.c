#include <stdio.h>
#include <string.h>

void sol(char *str, int len) {
    if (len == 0) {
        return;
    }
    printf("%c", str[len - 1]);
    sol(str, len - 1);
}

int main() {
    char str[] = "Hello";
    sol(str, strlen(str));
    printf("\n");
    return 0;
}