#include <iostream>
using namespace std;
int main(){
    char letter;
    cout<<"Enter the Letter :";
    cin>>letter;

    if (letter>='a' && letter<='z'){
        cout<<"Lower Case " ; 
    }
    else{
        cout<< " Uppar Case ";
    }
}