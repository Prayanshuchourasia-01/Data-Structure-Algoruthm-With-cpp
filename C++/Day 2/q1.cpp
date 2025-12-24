//  •	Factorial using function  Program 

#include<iostream>
using namespace std;

int Factorial(int n){
    int result = 1;
    for (int i=n;i>1;i--){
        result = result * i;
    }
    return result;
}

int main(){
    int n;
    cout<<"Enter the NUmber : ";
    cin>>n;
    cout<<"Factorial of " << n << " is : "<<Factorial(n) ; 
    return 0;
}