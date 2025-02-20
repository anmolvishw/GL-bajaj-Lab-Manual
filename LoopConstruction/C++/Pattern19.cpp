#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n = 7;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            cout << " ";
        }

        for(j = 0; j < n - i; j++)
        {
            cout << char('A' + j) << " ";
        }

        for(k = n - i - 2; k >= 0; k--)
        {
            cout << char('A' + k) << " ";
        }

        cout << endl;
    }

    return 0;
}
