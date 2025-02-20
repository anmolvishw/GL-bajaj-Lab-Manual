#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWordLetter(char str[]) {
    int start = 0;
    int len = strlen(str);
    for (int end = 0; end < len; end++) {
        if (str[end] == ' ') {
            reverse(str, start, end - 1);
            start = end + 1;
        }
    }
    reverse(str, start, len - 1);
    reverse(str, 0, len - 1);
}

int main() {
    char str[] = "I love my India";
    reverseWordLetter(str);
    printf("%s\n", str);
    return 0;
}