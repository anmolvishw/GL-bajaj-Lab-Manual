#include <stdio.h>
#include <string.h>

void delRepeatedOccurrence(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                str[j] = ' ';
            }
        }
    }
}

int main() {
    char str[] = "This book is very easy";
    delRepeatedOccurrence(str);
    printf("%s\n", str);
    return 0;
}