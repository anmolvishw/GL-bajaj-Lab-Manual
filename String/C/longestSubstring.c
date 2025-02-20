#include <stdio.h>
#include <string.h>

int sol(const char *s) {
    int n = strlen(s);
    int ans = 0;
    int index[128] = {0};
    for (int j = 0, i = 0; j < n; j++) {
        i = (index[(int)s[j]] > i) ? index[(int)s[j]] : i;
        ans = (ans > (j - i + 1)) ? ans : (j - i + 1);
        index[(int)s[j]] = j + 1;
    }
    return ans;
}

int main() {
    printf("%d\n", sol("abcabcbb"));
    return 0;
}