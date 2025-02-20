#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isMatch(const char *text, const char *pattern) {
    if (*pattern == '\0') {
        return *text == '\0';
    }
    if (*text == '\0' && *pattern != '*') {
        return false;
    }
    if (*pattern == '*') {
        return isMatch(text, pattern + 1) || (*text != '\0' && isMatch(text + 1, pattern));
    } else {
        return *text != '\0' && (*pattern == '?' || *pattern == *text) && isMatch(text + 1, pattern + 1);
    }
}

int main() {
    const char *text = "baaabab";
    const char *pattern = "*****ba*****ab";
    printf("%s\n", isMatch(text, pattern) ? "true" : "false");
    return 0;
}