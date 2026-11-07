// #include<iostream>
#include<vector>
// using namespace std;
// void print(vector<int> arr, int index, int n, int sum){
//     if(index==n){
//         cout<<sum<<endl;
//         return ;
//     }



//    // exclude
//     print(arr, index+1, n, sum);
//     // include
//     print(arr, index+1, n , sum+arr[index]);
// }
// int main(){
//     vector<int>arr={3,4,5};
//     print(arr, 0, arr.size(), 0);
//     return 0;
// }



// Target sum.............................................................
// #include<iostream>
// using namespace std;
// bool targetsum(vector<int>arr, int index, int n, int target){

//     if(target==0){
//         return 1;
//     } 
//     if(index==n || target<0){
//         return 0;
//     }
//     // exclude                                      // include
//     return targetsum(arr, index+1, n, target) ||  targetsum(arr, index+1, n, target-arr[index]);  
// }
// int main(){
//     vector<int> arr={3, 6,4,2};
//     cout<<targetsum(arr, 0, arr.size(), 12);
//     return 0 ;
// }


// perfect sum .......................................
#include<iostream>
using namespace std;
// int targetsum(vector<int>arr, int index, int n, int sum){
//     if(index==n){
//         if(sum==0){
//             return 1;
//         }else{
//             return 0;
//         }
//     }
//     // exclude                                       // include
//     return targetsum(arr, index+1, n, sum) + targetsum(arr, index+1, n, sum-arr[index]);  
// }
// int main(){
//     vector<int> arr={2, 5, 6, -2};
//     cout<<targetsum(arr, 0, arr.size(), 4);
//     return 0 ;
// }




// // Target sum......................................................
// int subsum(int arr[], int index, int n, int sum){
//     if(sum==0)
//     return 1;
//     if(index==n || sum<0)
//     return 0;

//                     // exclude             // include
//     return subsum(arr, index+1, n, sum)+subsum(arr, index, n, sum-arr[index]);
// }
// int main(){
//     int arr[]={2,3,4};
//     int sum=6;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<subsum(arr, 0, n, sum)<<endl;
//     return 0;
// }