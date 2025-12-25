// 	Check if array is sorted 

#include<iostream>
using namespace std;
bool isSorted(int arr[], int size){
    bool flag = false;
    for(int i=0;i<size;i++){
        if(i==size-1){
            break;
        }
        if(arr[i]<arr[i+1]){
            flag = true ;
        }
        else{
            return false;
        }
    }
    return flag;
}


int main(){
    int size = 10;
    int arr[size]  = {2,4,56,3,4,6,7,3,4,33};

    cout<<"Is Array Sorted ? : "<<isSorted(arr,size)<<endl;

int arr1[size]  = {2,3,4,5,6,7,8,9,10,11};

    cout<<"Is Array Sorted ? : "<<isSorted(arr1,size);
    return 0 ;
}