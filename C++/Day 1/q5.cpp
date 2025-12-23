// 	Prime number check  Program



#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter THe Value of N : ";
    cin>>n;
    int flag = 0 ; // to tell whether the number is prime or not , if flag = 1 (not prime ) , if flag = 0 (prime)

    for (int i = 2 ;i<(n-1)/2 ; i++){ 
        if (n%i==0){
            // cout<<n <<endl;         For Debugging COde 
            // cout << i <<endl;
            // cout<<n%i<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime Number";
    }

    return 0;
}