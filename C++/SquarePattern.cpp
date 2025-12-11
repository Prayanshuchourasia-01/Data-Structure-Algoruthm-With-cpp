// //   LECTURE 4 PATTERNS : SQUARE PATTERN.....

// //   N is can be the dynamic value.....

// #include <iostream>
// using namespace std;

// // Program to print PATTERN IN NUMBER FORM
// int main()
// {
//     int N = 4;
//     for (int i = 1; i <= N; i++)
//     {
//         for (int j = 1; j <= N; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }





// // Program to print PATTERN IN STAR(*) FORM



// #include <iostream>
// using namespace std;
// int main()
// {
//     int N = 5;
//     for (int i = 1; i <= N; i++)
//     {
//         for (int j = 1; j <= N; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }





// // Program to print PATTERN IN Characters FORM

// #include <iostream>
// using namespace std;
// int main()
// {
//     int N = 5;
//     for (int i = 1; i <= N; i++)
//     {
//         char ch ='A';
//         for (int j = 1; j <= N; j++)
//         {
//             cout << ch << " ";
//             ch = ch + 1;
//         }
//         cout << endl; 
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    cout<<endl;
    cout<<endl;
    cout<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
return 0;
}