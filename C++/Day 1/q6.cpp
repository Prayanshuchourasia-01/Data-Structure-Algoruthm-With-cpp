// •	Factorial using loop Program 

#include<iostream>
using namespace std ; 
int main(){

    int n = 5 ; 
    int result = 1 ;

    for (int i = n ; i>=1;i--){
        result = result * i ; 
    }
    cout<<"Result : " <<result ; 

}