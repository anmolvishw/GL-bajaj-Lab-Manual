#include <iostream>
using namespace std;

int main()
{
    int i, j, n;

    cout << "Enter value of n : ";
    cin >> n;

    // Loop to print upper half of the pattern
    for(i = 1; i <= n; i++)
    {
        for(j = i; j <= n; j++)
        {
            cout << "*";
        }

        for(j = 1; j <= (2*i - 2); j++)
        {
            cout << " ";
        }

        for(j = i; j <= n; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    // Loop to print lower half of the pattern
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for(j = (2*i - 2); j < (2*n - 2); j++)
        {
            cout << " ";
        }
        for(j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}
