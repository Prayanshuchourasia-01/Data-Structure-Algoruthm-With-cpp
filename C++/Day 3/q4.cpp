// Second largest element Program 
#include<iostream>
#include<climits>
using namespace std;


int largesecond(int arr[] , int size){
    int maxx = INT_MIN ; 
    int smax = -1 ; 
    for (int i = 0 ; i < size ; i++){
        maxx = max(arr[i],maxx);
    }

    for (int i = 0 ; i<size ; i++){
        if (arr[i] > smax && arr[i] != maxx){
            smax = arr[i];
        }
    }


return smax;
}


int main(){
    int size = 10;
    int arr[size]  = {2,4,56,3,4,6,7,3,4,33};

    cout<<"Second largest is : "<<largesecond(arr,size);

    return 0 ;
}