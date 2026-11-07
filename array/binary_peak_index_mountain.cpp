#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,2,3,2,0};
    int st=1;
    int end=arr.size()-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            cout<<mid<<" ";
            return 0;
        }
        if(arr[mid-1]<arr[mid]){  // right side
            st=mid+1;

        }
        else{    //left side
            end=mid-1;
        }
        cout<<mid<<" buuuucode";
    }
}