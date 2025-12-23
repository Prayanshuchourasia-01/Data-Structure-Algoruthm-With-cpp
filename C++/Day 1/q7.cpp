// •	Fibonacci using loop  Program 


#include <iostream>
using namespace std;

int main(){

int n ;
cout<<"Value of N(for first n fibonacci series values ) : ";
cin>>n;
int temp ; 
int first = 0 , second = 1 ; 
cout<<first <<" ";
cout<< second <<" ";
for (int i=2;i<n;i++){
    temp=first+second;
    cout<<temp << " ";
    first = second ;
    second = temp;
}

    return 0;
}