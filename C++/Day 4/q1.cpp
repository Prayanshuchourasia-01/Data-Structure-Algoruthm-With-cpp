// •	Linear search 

#include<iostream>
using namespace std;
int linearSearch(int arr[] , int size,int searchEle){
    for (int i =0 ; i < size ; i++){
        if(arr[i] == searchEle){
            return i;
        }
    }
    return -1;
}

int main(){
    int size = 11; 
    
    int arr[size] = {1,5,3,4,3,2,7,64,36,75,2};

    int searchEle;
    cout<<"Enter the Element to Search : ";
    cin>>searchEle;
    int result = linearSearch(arr,size,searchEle) ; 
    if (result==-1){
        cout<<"Element Not Found ";
    }
    else{
        cout<<"Element Found At Index : " <<result ;
    }
    return 0;
}