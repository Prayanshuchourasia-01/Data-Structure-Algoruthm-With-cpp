#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number to check whether it is prime or not :  ";
    cin >> n;
    bool isPrime = true;

    // for (int i = 2; i <= n-1; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Not a Prime Number ";
    //         break;
    //     }
    // }
    //    cout<<"Prime Number ";

    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"Prime Number\n";
    }else{
        cout<<"Not a Prime Number\n";
    }
    return 0; 
}