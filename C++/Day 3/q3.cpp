//	Reverse an array Program 
// using 2 pointer approach 
#include <iostream>
using namespace std;


void reverseArray(int arr[] , int size){
    int start = 0 ; int end = size-1 ; 
    while(start<end){
        swap(arr[start],arr[end]);                // swap(val1 , val2) is a built in function 
        start++ ; end--;

    }
}
int main(){
    int size = 8;
    int arr[size] = {3,6,5,2,3,5,76,8};
    reverseArray(arr,size);

    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0 ; 
}
