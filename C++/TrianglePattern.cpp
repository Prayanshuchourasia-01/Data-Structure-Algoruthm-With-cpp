//   LECTURE 4 PATTERNS : TRIANGLE PATTERN.....

//   N is can be the dynamic value.....

// ( * ) Star Pattern
//                   n=4
//                   *
//                   **
//                   ***
//                   ****

// #include <iostream>
// using namespace std ;
// int main(){
//     int n=4;
//     for(int i = 0 ; i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// Number Pattern

//                   n=4
//                   1
//                   22
//                   333
//                   4444

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     // int num = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << i;
//             // cout << num;
//         }
//         // num++;
//         cout << endl;
//     }
// }

// Alphabet Pattern

//                   n=4
//                   A
//                   BB
//                   CCC
//                   DDDD

// #include <iostream>
// using namespace std;
// int main()
// {
//     char letter = 'A';
//     int n = 4;
//     for (int i = 0; i<n; i++)
//     {
//         for (int j = 0; j <i+1; j++)
//         {
//             cout << letter;
//         }
//         cout << endl;
//         letter = letter + 1;
//     }
// }

// Alphabet Pattern

//                   n=4
//                   1
//                   12
//                   123
//                   1234

#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}