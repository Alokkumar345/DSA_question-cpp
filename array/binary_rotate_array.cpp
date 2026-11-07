#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={3,4,5,6,7,0,1,2};
    int end=arr.size()-1;
    int target=0;
    int st=0;
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==target){
            cout<<mid<<" ";
            return 0;
        }
        if(arr[st]<=arr[mid]){  //  left sorted
            if(arr[st]<= target && target <=(arr[mid])){
                end=mid-1;
            }else{
                st=mid+1;
            }

        }else{
            if(arr[mid]<= target && target<=arr[end]){
                st=mid+1;
            }else{
                end=mid-1;
            }

        }

    }
    cout<<"Not found";



}





// # FUNCTION..................................
// #include<iostream>
// #include<vector>
// using namespace std;
// int searchsortedarray(vector<int> &arr,int target){
//     int st=0;
//     int end=arr.size()-1;
//     while(st<=end){
//         int mid=(st+end)/2;
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(arr[st]<=arr[mid]){
//             if(arr[st]<= target && target <=arr[mid]){
//                 end=mid-1;
//             }
//             else{
//                 st=mid+1;
//             }
//         }else{
//             if(arr[mid]<= target && target <=arr[end]){
//                 st=mid+1;
//             }else{
//                 end=mid-1;
//             }

//         }
//     }
//     return -1;

// }
// int main(){
//     vector<int> arr={3,4,5,6,7,0,1,2};
//     int target=0;
//     int ans=searchsortedarray(arr,target);
//     cout<<ans;
//     return 0;
// }