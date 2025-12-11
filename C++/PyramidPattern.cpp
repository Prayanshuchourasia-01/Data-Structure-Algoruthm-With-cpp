//  LECTURE 4 : PATTERNS :::::::::::::: PYRAMID PATTERN

//      n  = 4 ;
//                1
//              1 2 1
//            1 2 3 2 1
//          1 2 3 4 3 2 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = n - 1; j > i; j--)
//         {
//             cout << " " << " ";
//         }
//         for (int j = 0; j <= i; j++)
//         {
//             cout << j + 1 << " ";
//         }

//         for(int j = i ; j>0; j--)
//         {
//             cout<<j << " ";
//         }
//         cout << endl;
//     }
// }

// Simple Loop Here

#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {

// Loop for printing Space

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
// Loop for Printing Num Set 1 :

        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

//  Loop for printing Num Set 2 :

        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0; 
}