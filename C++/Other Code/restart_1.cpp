#include <iostream>
#include <vector>
#include <climits>
#include <string>
using namespace std;
int main(){

    // string firstName,lastName;
    // getline(cin,firstName);
    // getline(cin,lastName);
    // cout<<"Name : "<<firstName<<" "<<lastName<<endl;



    //  REverse And Original Array 

//    int arr[7] = {4,2,7,8,1,2,5};
//    int first = 0 ;
//    int last = 6 ; 
//     while (first < last ){
//         int temp;
//         temp = arr[first];
//         arr[first] = arr[last];
//         arr[last] = temp ; 
//         first++;
//         last--;
//     }
//      for (int i=0; i<7;i++){
//         cout<<arr[i];
//      }
        
    
// Vectors TOpics Learning : size() , 

// vector <int> vec;
// vector <int> vec1 = {1,2,3,4,5,6};
// vector <int> vec2(3,1);

// vec.push_back(24);
// // vec.pop_back();

// cout<< vec.front()<< endl;
// cout<< vec.back()<< endl;
// cout<<vec1.at(3)<<endl;
// for (int i : vec ){
//     cout<< i << endl;
// }
// cout<<"Vec Size : " <<vec.size()<<endl;
// for(int i : vec1){
//     cout<<i<<endl;
// }
// cout<<"Vec1 Size : " <<vec1.size()<<endl;
// for (int i : vec2){
//     cout<<i<<endl;
// }
// cout<<"Vec2 Size : " <<vec2.size()<<endl;



// Maximun SubArray Sum -- Kadanes Algorithm 

// vector <int> arr = {3,-4,5,4,-1,7,-8};
// int size = arr.size() ;
// int currSum = 0 ;
// int maxSum = INT_MIN ; 

// for (int i : arr){

//     currSum= currSum+i;
//     maxSum = max(currSum,maxSum);
//     if (currSum<0){
//         currSum = 0;
//     }

// }
// printf("maxSum is %d",maxSum);
// cout<<endl<<"MaxUm is " <<maxSum <<endl;


// Pair Sum Problem : brute Force Approach 

// int target = 9 ;
// int arr[] = {2,7,11,15};
// int length = sizeof(arr) / sizeof(arr[0]);
// int currSum = 0 ;
// int flag = 0 ; 

// for (int i = 0 ; i < length; i++){
//     if (flag == 0){
//     for (int j = 0 ; i<length;j++){
//         currSum = arr[i] + arr[j];
//         if (currSum == target){
//             if (i == j){
//                 continue;
//             }
//             else{
//                 cout<<"Pair Sum is : "<<"[" << arr[i] << " "<< arr[j] << "]" <<endl;
//                 flag=1;
//                 break;
//             }
//         }
//     }
// }
// }


// Pair Sum Problem : Optimise Approach 

// int target = 13 ;
// // int arr[] = {2,7,11,15};
// vector <int> arr = {2,7,11,15};

// int first = 0 , last = size ;
// vector <int> ans;
// while (first < last ){
//     if (arr[first] + arr[last] == target){
//         ans.push_back(arr[first]);
//         ans.push_back(arr[last]);
//         break;
//     }
//     else if (arr[first] + arr[last] > target){
//         last--;
//     }
//     else if (arr[first] + arr[last] < target){
//         first++;
//     }
// }

// for (int i : ans){
//     cout<< i <<" " ;
// }



// Majoroity Element --- Brute Force Problem 


vector <int> nums = {2,2,1,1,1,2,2};
// int n = nums.size();
// int ans;
// int totalMustCount = int(n/2);
// int currentCount = 0 ;
// for(int i : nums){
//     for(int j : nums){
//         if (i==j){
//             currentCount+=1;
//         }
//     }
//     if(currentCount==totalMustCount){
//         ans=i;
        
//         return ans;
//     }
// }


        int n = nums.size();
        int ans;
        int totalMustCount = n / 2;
        int currentCount = 0;
        for (int i =0 ; i<n ; i++) {
            for (int j =0 ; j<n ; j++) {
                if (nums[i] == nums[j]) {
                    currentCount += 1;
                }
            }
            if (currentCount > totalMustCount) {
                return nums[i];
            }
        }
        return -1;
    }

















    return 0;
}
