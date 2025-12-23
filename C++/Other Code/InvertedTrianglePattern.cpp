// LECTURE 4 PATTERN Making : 

 // Inverted Triangle Pattern. 
//                               1 1 1 1
//                                 2 2 2 
//                                   3 3 
//                                     4 




//  Demo Method : ::::::::::::::::::::::::::: 



#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for (int i = 1 ; i<n+1;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=n;j>i-1;j--){
            cout<<i;
        }
        cout<<endl;
    }
}





//  Actual Method : : : : : : : : : : : : : : :  : : :  : : : 


#include <iostream>
using namespace std;
int main(){
    int n=4;
    for (int i=0 ; i<n;i++){
        for (int j=0;j<i;j++){
            cout<<" ";

        }
        for (int j=0;j<n-i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}



//  Alphabatic form 
//                  A A A A 
//                    B B B 
//                      C C 
//                        D


#include <iostream>
using namespace std;
int main(){
    int n = 4;
    char letter = 'A';
    for(int i=0 ; i<n;i++){
        for(int j=0; j<i;j++){
            cout<<" ";
        }
        for (int j =0 ; j<n-i;j++){
            cout<<letter;
        }
            letter++;
        cout<<endl;
    }
    return 0;
}