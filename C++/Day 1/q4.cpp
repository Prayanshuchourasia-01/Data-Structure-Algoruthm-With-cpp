// 	Largest of three numbers [IMPORTANT

#include<iostream>
using namespace std ;
int main (){
int a = 3 , b=4 , c=6;

cout<<"Value of A : ";
cin>>a;
cout<<"Value of B : ";
cin>>b;
cout<<"Value of C : ";
cin>>c;



if(a>b && a>c){
    cout<<"A is Greater";
}
else if (b>a && b>c){
    cout<<"B is Greater";
}
else {
    cout<<"C is Greater";
}



    return 0 ;
}