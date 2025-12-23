// reverse trianinage pratcile 
// 1
// 21
// 321
// 4321
// #include <iostream> 
// using namespace std;
// int main(){

//     int userChoice;
//     cout<<"Enter your Choice number : ";
//     cin>>userChoice;

//     for(int i = 0; i < userChoice; i++){
//         for (int j=i+1;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;

//     }

//     return 0;
// }









//  Character version of Inverted Triangle version 
// AAAA
//  BBB
//   CC
//    D

// #include<iostream>
// using namespace std;
// int main(){

//     int n = 4 ;
//     char letter = 'A';

//     for (int i = 0; i<n ; i++){
//         for(int j = 0 ; j<i+1;j++ ){
//             cout<<" ";
//         }
//         for (int j = 0 ; j<n-i;j++){
//             cout<<letter;
//         }
//         letter++;
//         cout<<endl;

//     }

//     return 0;
// }












//  Pyramid Pattern (n = 4 )
//     1
//    121
//   12321
//  1234321


// #include<iostream>
// using namespace std;
// int main(){

// int n= 4 ; 

// for(int i=0;i<n;i++){

//     for(int j = 0; j<n-i-1;j++){
//         cout<<" ";
//     }
//     for ( int j = 0 ; j<i+1 ;j++ ){
//         cout<<j+1;
//     }
//     for(int j=i;j>0;j--){
//         cout<<j;
//     }
//     cout<<endl;
// }
//     return 0 ;
// }










