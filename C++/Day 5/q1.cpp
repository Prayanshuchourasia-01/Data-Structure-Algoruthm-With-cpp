// 	Swap using pointers 


#include<iostream>
using namespace std;

void swap(int *ptr1,int *ptr2){

int *temp ;
*temp =  *ptr1 ;
*ptr1=*ptr2 ;
*ptr2 = *temp;

}

int main(){
    int a ;
    int b ;
    cout<<"Enter the 2 Values : ";
    cin>>a>>b ; 
cout<<"Original Values : " <<endl;
   cout<<"A = "<<a<<endl;
cout<<"B = "<<b<<endl;


    cout<<"After Swapping "<<endl;
    swap(&a,&b);
cout<<"A = "<<a<<endl;
cout<<"B = "<<b;

    return 0 ; 
}