// 	Find maximum and minimum Number FInding  Program 
// here INT_MAX is +infinity  
#include<iostream>
#include <climits>    // Required for INT_MAX 
using namespace std;
int main(){

    int size= 5 ;
    int nums[size] = {22,65,-34,98,-234};
    int minn =INT_MAX; 
    int maxx=0;

    for(int i = 0 ; i<size;i++){
        if(nums[i]<minn){
            minn = nums[i];
        }
       //  minn = min(nums[i],minn);   here we can use min() method , we give 2 agrument and it returns the smallest value.
    }
    for(int i=0;i<size;i++){
        maxx = max(nums[i],maxx);     // here we use max() method , so we can avoid writting hte if condtions.
        }


cout<<minn<<endl;
cout<<maxx;
    return 0;
}


