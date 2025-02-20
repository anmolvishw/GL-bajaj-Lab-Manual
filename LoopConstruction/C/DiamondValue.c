#include <stdio.h>

int main()
{
    int i, j, k, n = 5;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for(j = i; j < 2 * i; j++)
        {
            printf("%d ", j);
        }

        for(j = 2 * i - 2; j >= i; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    for(i = n - 1; i >= 1; i--)
    {
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for(j = i; j < 2 * i; j++)
        {
            printf("%d ", j);
        }

        for(j = 2 * i - 2; j >= i; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
