// 	Reverse a number Program 
// logic : when we use n%10 , we get the last digit of the number. and when we use n/10 we remove divivde and we get result in decimal form but as the type is int then the decimal point got removed 

#include<iostream>
using namespace std;
int reverse(int n){
    int rev = 0 ;
    int rem;
    while(n!=0){
        rem = n%10;
        rev =rev*10 + rem;
        n=n/10;
    }
    
    return rev;
}


int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int rev = reverse(n);
    cout<< rev;
    return 0 ;
}