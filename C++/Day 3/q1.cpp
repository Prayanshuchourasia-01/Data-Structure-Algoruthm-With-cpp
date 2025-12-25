// 	Array input and output Program 


#include<iostream>
using namespace std;
int main(){
    int ele = 5 ;
    int val[ele];
    // Array input using loop 
    for (int i=0;i<ele;i++){
        cin>>val[i];
    }
    // Outisde the Array 
    cout<<"Array is : "<<endl;
    for(int i=0;i<ele;i++){
        cout<<val[i]<<endl;

    }

    return 0;
}