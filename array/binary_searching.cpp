// #include<iostream>
// #include<vector>
// using namespace std;


// int binarysearch(vector<int> arr, int tar){
//     int st=0;
//     int end=arr.size()-1;
//     while(st<=end){
//         int mid=(st+end)/2;
//         if(tar>arr[mid]){
//             st=mid+1;
//         }else if(tar<arr[mid]){
//             end=mid-1;
//         }else{
//             return mid;
//         }

//     }
//     return -1;
// }
// int main(){
//     vector<int> arr={-1,0,3,4,5,9,12};
//     int tar=9;

//     cout<<binarysearch(arr,tar);
// }






#include<iostream>
#include<vector>
using namespace std;


int recbinarysearch(vector<int> arr, int tar,int st,int end){
    if(st<=end){

        int mid=st+(end-st)/2;

        if(tar>arr[mid]){
            return recbinarysearch(arr,tar,mid+1,end);
        }else if(tar<arr[mid]){
            return recbinarysearch(arr,tar,st,mid-1);
        }else{
            return mid;

        }

    }
    return -1;

}
int main(){
    vector<int> arr={-1,0,3,4,5,9,12};
    int tar=9;
    int ans=recbinarysearch(arr,tar,0,arr.size()-1);

    cout<<ans;

    // cout<<binarysearch(arr,tar);
}