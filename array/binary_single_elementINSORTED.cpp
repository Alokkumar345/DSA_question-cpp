// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>arr={1,1,2,3,3,4,4,8,8};
//     // int ans=0;
//     // for(int i=0;i<arr.size();i++){
//     //     ans=ans^arr[i];

//     // }
//     // cout<<ans<<" ";
    
//     return 0;

// }





#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr={1,1,2,3,3,4,4,8,8};

    int st=0;
    int end=arr.size()-1;

    while(st<=end){

        int mid = st+(end-st)/2;

        // single element at start
        if(mid==0 && arr[mid]!=arr[mid+1]){
            cout<<arr[mid];
            return 0;
        }

        // single element at end
        if(mid==end && arr[mid]!=arr[mid-1]){
            cout<<arr[mid];
            return 0;
        }

        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]){
            cout<<arr[mid];
            return 0;
        }


        // left side pairs
        if(mid%2==0){

            if(arr[mid]==arr[mid+1]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }

        }
        // right side pairs
        else{

            if(arr[mid]==arr[mid-1]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }

    return 0;
}