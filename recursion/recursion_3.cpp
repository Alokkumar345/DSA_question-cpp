#include<iostream>
using namespace std;

// bool isSorted(int arr[], int n){
//     // base case
//     if(n==0 || n==1){
//         return 1;
//     }
//     if(arr[0]> arr[1])
//     return false;
//     else{
//         bool remainpart=isSorted(arr+1,n-1);
//         return remainpart;
//     }


// }

// int main(){
//     int arr[5]={2,9,6,8,9};
//     int n=5;
//     bool ans=isSorted(arr,n);
//     if(ans){
//         cout<<"Array is sorted "<<endl;
//     }
//     else{
//         cout<<"Array is not Sorted";

//     }
//     return 0;
// }



// sum of element...................

// int getsum(int *arr,int n){
//     // base case
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return arr[0];
//     }
//     int ans=getsum(arr+1,n-1);
//     int sum=arr[0]+ans;
//     return sum;

// }
// int main(){
//     int arr[5]={3,2,1,5,6};
//     int n=5;
//     int sum=getsum(arr,n);
//     cout<<"sum is :"<<sum<<endl;
//     return 0;

// }



// Linear search......................

// bool linearSearch(int arr[], int n, int key){
//     // base case
//     if(n==0){
//         return false;
//     }
//     if(arr[0]==key){
//         return true;
//     }else{
//         bool remainingPart = linearSearch(arr+1,n-1 ,key);
//             return remainingPart;
//     }
// }
// int main(){
//     int arr[5]={3,5,1,2,6};
//     int n=5;
//     int key=10;
//     bool ans=linearSearch(arr, n,key);
//     if(ans){
//         cout<<"found"<<endl;
//     }else{
//         cout<<"Not Found";
//     }
//     return 0;

// }



// // Binary Search....................
// bool BinarySearch(int arr[], int s, int e, int key){
//     // Base Case
//     if(s>e)
//     return false;

//     int mid=s+(e-s)/2;

//     if(arr[mid]==key){
//         return true;
//     }

//     if(arr[mid]<key){
//         return BinarySearch(arr, mid+1,e,key);
//     }else{
//         return BinarySearch(arr,s,mid-1,key);
//     }


// }
// int main(){
//     int arr[5]={3,4,5,6,7};
//     int n=5;
//     int key=6;
//     cout<<"present or not "<< BinarySearch(arr,0,4,8);
//     return 0;
// }

















