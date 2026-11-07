# include<iostream>
using namespace std;
// void reverse(string &str,int i,int j){  // pass by refrence 
//     // baase Case
//     if(i>j)
//     return;

//     swap(str[i],str[j]);
//     i++;
//     j--;

//     // Recursive Call
//     reverse(str,i,j);
// }

// int main(){
//     string name="Alok";
//     reverse(name,0,name.length()-1);
//     cout<< name <<endl;
// }


// Check Palindrom..........................

// bool CheckPalindrom(string  str, int i, int j){
//     if(i>j)  // base case
//     return true;

//     if(str[i]!=str[j])
//     return false;

//     else{
//         // recursive call
//         return CheckPalindrom(str, i+1, j-1);
//     }
// }
// int main(){
//     string name="bookoob";
//     cout<<endl;
//     bool isPlindrom=CheckPalindrom(name,0,name.length()-1);
//     if(isPlindrom){
//         cout<<"its a palindrom "<<endl;
//     }
//     else{
//         cout<<"its not a palindrome "<<endl;
//     }
//     return 0;
// }



// input a=3 b=2 and o/p=9  (3^2)
// Exponenet 


// int power(int a , int b){
//     // base case
//     if(b==0)
//     return 1;

//     if(b==1)
//     return a;

// // Recursive Call

//     int ans =power(a,b/2);

//     // b is even
//     if(b%2 == 0){
//         return ans*ans;

//     }else{ // b is odd
//         return a*ans*ans;
//     }
// }

// int main(){
//     int a, b;
//     cin>> a >> b;
//     int ans=power(a,b);
//     cout<<" Answer is "<< ans <<endl;
//     return 0;
// }



// BUbble sorts................

// void Sortedarray(int *arr, int size){
//     // base Case
//     if(size==0 || size ==1){
//         return ;
//     }
//     // 1 case solve 
//     for(int i=0;i<size;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }

//     }
//     Sortedarray(arr, size-1);  // Recursive call

// }

// int main(){
//     int arr[5]={2,5,1,6,9};
//     Sortedarray(arr,5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// HW : selection sort, insertion sort

// void selectionSort(int *arr, int n){
//     // base Case
//     if(n==0 || n==1)
//     return ;
//     for(int i=0;i<n-1;i++){
//         int MinIndex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[MinIndex]){
//                 MinIndex=j;
//             }
//             swap(arr[MinIndex],arr[i]);
//         }
//     }
//     selectionSort(arr,n-1);

// }
// int main(){
//     int arr[5]={2,5,1,6,9};
//     selectionSort(arr,5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


