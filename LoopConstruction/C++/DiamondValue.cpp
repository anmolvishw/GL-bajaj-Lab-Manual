#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n = 5;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for(j = i; j < 2 * i; j++)
        {
            cout << j << " ";
        }

        for(j = 2 * i - 2; j >= i; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    for(i = n - 1; i >= 1; i--)
    {
        for(j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for(j = i; j < 2 * i; j++)
        {
            cout << j << " ";
        }

        for(j = 2 * i - 2; j >= i; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
