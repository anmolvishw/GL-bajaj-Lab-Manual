#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void backtrack(char **ans, int *returnSize, char **mapping, char *digits, int index, char *path) {
    if (index == strlen(digits)) {
        ans[*returnSize] = strdup(path);
        (*returnSize)++;
        return;
    }
    char *letters = mapping[digits[index] - '0'];
    for (int i = 0; i < strlen(letters); i++) {
        path[index] = letters[i];
        backtrack(ans, returnSize, mapping, digits, index + 1, path);
    }
}

char **sol(char *digits, int *returnSize) {
    *returnSize = 0;
    if (strlen(digits) == 0) {
        return NULL;
    }
    char *mapping[] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    int maxCombinations = 1;
    for (int i = 0; i < strlen(digits); i++) {
        maxCombinations *= strlen(mapping[digits[i] - '0']);
    }
    char **ans = (char **)malloc(maxCombinations * sizeof(char *));
    char *path = (char *)malloc((strlen(digits) + 1) * sizeof(char));
    path[strlen(digits)] = '\0';
    backtrack(ans, returnSize, mapping, digits, 0, path);
    free(path);
    return ans;
}

int main() {
    int returnSize;
    char **result = sol("23", &returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%s\n", result[i]);
        free(result[i]);
    }
    free(result);
    return 0;
}