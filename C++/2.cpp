#include <iostream>
using namespace std;
// Grade Program 
int main (){
    int marks;
    cout<<"Enter the Marks for getting the Grade : " << endl;
    cin >> marks ;
    if(marks>=90){
        cout<<"Your Grade Is A \n ";
    }else if (marks >= 70 && marks <=89){
        cout<<"Your Grade Is B \n";
    }else {
        cout<<"Your Grade Is C \n";
    }


}