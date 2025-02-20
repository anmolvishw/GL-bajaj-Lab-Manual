#include <stdio.h>

int main()
{
    int i, j, k, n = 7;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf(" ");
        }

        for(j = 0; j < n - i; j++)
        {
            printf("%c ", 'A' + j);
        }

        for(k = n - i - 2; k >= 0; k--)
        {
            printf("%c ", 'A' + k);
        }

        printf("\n");
    }

    return 0;
}
