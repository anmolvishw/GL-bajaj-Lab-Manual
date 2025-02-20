#include <iostream>
using namespace std;

int main()
{
    int n;
    char c;
    
    cout << "Enter N : ";
    cin >> n;
    
    cout << "Enter Symbol : ";
    cin >> c;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        
        if(i == 1 || i == n)
        {
            for(int j = 1; j <= i; j++)
            {
                cout << c;
            }
        }
        else
        {
            for(int j = 1; j <= i; j++)
            {
                if(j == 1 || j == i)
                    cout << c;
                else
                    cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
