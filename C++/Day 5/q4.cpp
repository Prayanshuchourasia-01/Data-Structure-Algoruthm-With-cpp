// •	Sum of array using pointer 

#include<iostream>
using namespace std;


int main(){
    int size = 8 ;
    int arr[size] = {1,32,54,6,3,3,5,7};

    int *ptr = arr;
    int sum = 0 ; 
    for (int i = 0 ; i<size; i++){
        cout<<*(ptr+i)<<endl;
        sum = sum + *(ptr+i);
    }

    cout<<"Sum is : " << sum;
    return 0 ; 
}