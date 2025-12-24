//  Palindrome number Program (eg : 121 , 1331 )
// Logic : we reverse the number and then checked whether the original and reversed number are same ? if we get same then we return 1 , if the conditon fails we return  0;

#include<iostream>
using namespace std;

int Palindrome(int n){
    int rev=0;
    int org=n;
    int rem ;
    while (n!=0){
        rem=n%10;
        rev = rev*10 +rem;
        n=n/10;
    }
    if(org==rev){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int n ;
    cout<<"Enter the value of N : ";
    cin>>n;
    cout<<Palindrome(n);

    return 0;
}