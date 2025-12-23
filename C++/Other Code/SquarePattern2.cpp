// n=3
// Print This
//              1 2 3
//              4 5 6
//              7 8 9

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 3;
//     int init = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for(int j=0 ; j<n;j++){
//             init+=1;
//             cout<<init<<" ";
//         }
//         cout<<endl;
//     }
// }

// n=3
// Print This
//              A B C
//              D E F 
//              G H I 

#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    char init = 'A';

    for (int i = 0; i < n; i++)
    {
        for(int j=0 ; j<n;j++){
            cout<<init<<" ";
            init+=1;
        }
        cout<<endl;
    }
}