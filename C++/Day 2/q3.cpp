// 	GCD of two numbers Program.
#include <iostream>
using namespace std;


int min(int a , int b ){
    if(b<a){
        return b;
    }
    else if(b>a){
        return a;
    }
    else{
        return 0;
    }
}

int gcd(int a , int b){
    int minn=min(a,b);
    int result;
    for (int i=1;i<minn+1;i++){
        if(a%i==0 && b%i==0){
            result = i ;
        }
    }

    return result;
}



int main(){
    int a, b ;
    cout<<"Enter 2 Numbers :";
    cin>>a>>b;

 cout<<"GCD is : " << gcd(a,b);


   return 0;
}