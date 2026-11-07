#include<iostream>
using namespace std;
// 1st.......................................................
// bool linearySearch(int arr[], int x, int index){
//     if(index==-1){
//         return 0;
//     }
//     if(arr[index]==x){
//         return 1;
//     }
//     return linearySearch(arr, x, index-1);
// }
// int main(){
//     int arr[]={2,4,7,3,77,11};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<linearySearch(arr, 7, n-1);
//     return 0;
// }

// 2nd............................................................
// #include<iostream>
// using namespace std;
// bool linear(int arr[], int X, int index, int N){
//     if(index==N){
//         return 0;
//     }
//     if(arr[index]==X){
//         return 1;
//     }
//     return linear(arr, X, index+1, N);
// }

// int main(){
//     int arr[]={2,5,7,9,4,6,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<linear(arr, 8, 0, n);
// }




// Binary serach......................................................
bool binary(int arr[], int s, int e, int x){
    if(s>e){
        return 0;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==x){
        return 1;
    }else if(arr[mid]<x){
        return binary(arr, mid+1, e,x);
    }else{
        return binary(arr, s, mid-1, x);
    }  
}
int main(){
    int arr[]={2,3,5,6,7,8,10};
    int x=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<binary(arr, 0, n-1, x);
    return 0;
}