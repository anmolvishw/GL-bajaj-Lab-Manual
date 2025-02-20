#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "NOON";
    int i = 0, j = strlen(str) - 1;
    int isPalindrome = 1;

    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        printf("The given string is a palindrome\n");
    } else {
        printf("The given string is not a palindrome\n");
    }

    return 0;
}