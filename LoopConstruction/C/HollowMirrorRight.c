#include <stdio.h>

int main()
{
    int n;
    char c;
    
    printf("Enter N : ");
    scanf("%d", &n);
    
    printf("Enter Symbol : ");
    scanf(" %c", &c);
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        
        if(i == 1 || i == n)
        {
            for(int j = 1; j <= i; j++)
            {
                printf("%c", c);
            }
        }
        else
        {
            for(int j = 1; j <= i; j++)
            {
                if(j == 1 || j == i)
                    printf("%c", c);
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
