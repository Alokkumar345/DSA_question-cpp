// #include<iostream>
// using namespace std;

// Basic function apply
//................................................................
// int fun(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }
// int main(){
//     int arr[]={2,3,4,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     fun(arr, n);
// }



//..............................................................
// int printarr(int arr[], int index, int n){
//     if(index==n){
//         return 0;
//     }
//     cout<<arr[index]<<" ";   // same element
//     printarr(arr, index+1,n);
//     // cout<<arr[index]<<" ";   // reverse element

// }
// int main(){
//     int arr[]={2,3,4,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     printarr(arr, 0, n);
// }



//..............................................................................
// void printarr(int arr[], int index){
//     if(index==-1){
//         return;
//     }
//     cout<<arr[index]<<" ";   
//     printarr(arr, index-1);
//     cout<<arr[index]<<" ";   

// }
// int main(){
//     int arr[]={2,3,4,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     printarr(arr, n-1);
// }


// sum of all elements...........................................................

// int sum(int arr[], int index){
//     if(index==-1){
//         return 0;
//     }
//     return arr[index]+sum(arr, index-1);
// }
// int main(){
//     int arr[]={2,3,4,5,6,7,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<sum(arr, n-1);
//     return 0;
// }


// #include<algorithm>
// // min element in array...................................................
// int minele(int arr[], int index, int n){
//     if(index==n-1){
//         return arr[index];
//     }
//     return min(arr[index],minele(arr, index+1, n));
// }
// int main(){
//     int arr[]={2,3,4,5,6,7,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<minele(arr, 0, n);
//     return 0;
// }



// Check plaindrom...................................................................
#include<iostream>
using namespace std;
// bool plaindrom(string str, int s, int e){
//     if(s>=e){
//         return 1;
//     }
//     if(str[s]!=str[e]){
//         return 0;
//     }
//     return plaindrom(str, s+1, e-1);
// }
// int main(){
//     string str="naman";
//     cout<<plaindrom(str, 0, str.length()-1);
//     return 0;
// }


// count vowel..................................................................
// int count(string str, int index, int n){
//     if(index==n){
//         return 0;
//     }
//     if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u'){
//         return 1+count(str, index+1, n);
//     }else{
//         return count(str, index+1, n);
//     }
// }
// int main(){
//     string str="aeiouytrf";
//     int n=str.length();
//     cout<<count(str, 0, n-1);
// }


// Reverse String................................................................
// void reverse(string &str, int s, int e){
//     if(s>=e){
//         return;
//     }
//     char c=str[s];
//     str[s]=str[e];
//     str[e]=c;

//     return reverse(str, s+1, e-1);
// }

// int main(){
//     string str="alok";
//     reverse(str, 0, str.length()-1);
//     cout<<str;
//     return 0;

// }


// max element...........................................................................
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int maxele(int arr[], int index, int n){
//     if(index==n-1){
//         return arr[index];
//     }
//     return max(arr[index],maxele(arr, index+1, n) );
// }
// int main(){
//     int arr[]={72, 85, 91, 67, 88};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<maxele(arr,0, n-1);

// } 