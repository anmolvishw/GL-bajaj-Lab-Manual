#include <stdio.h>
#include <string.h>

// Function to search for the pattern in the text
void search(char *txt, char *pat) {
    int M = strlen(pat);
    int N = strlen(txt);

    // A loop to slide pat[] one by one
    for (int i = 0; i <= N - M; i++) {
        int j;

        // For current index i, check for pattern match
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            printf("Pattern found at index %d\n", i);
    }
}

int main() {
    char txt[] = "AABAACAADAABAABA";
    char pat[] = "AABA";
    search(txt, pat);
    return 0;
}