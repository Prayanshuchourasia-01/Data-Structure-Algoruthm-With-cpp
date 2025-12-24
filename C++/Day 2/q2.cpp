// •	Fibonacci using function Program 

#include<iostream>
using namespace std;

void fibonacci(int n){
    int first = 0;
    int second = 1;
    cout<<first<<" ";
    cout<<second<<" ";
    int temp; 
    for (int i=0;i<n;i++){
        temp=first+second;
        cout<<temp<<" ";
        first = second ;
        second = temp;

    }
}

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Fibonacci series of " << n << " is : " <<endl;
    fibonacci(n);
    return 0;
}