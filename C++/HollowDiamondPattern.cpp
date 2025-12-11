#include <iostream>
using namespace std;
int main()
{

    int n = 4;
    // TOP Part :
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Bottom

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != n - 2)
        {
            for (int k = 0; k < (2 * (n - i - 1) - 1); k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}