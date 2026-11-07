#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // int ans;
    int arr[]={-1,0,1,2,-1,-4};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int maxwater=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         int w=j-i;
    //         int ht=min(arr[i],arr[j]);
    //         int area=w*ht;
    //         ans=max(maxwater,area);
    //     }
    // }
    // cout<<ans;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                }
            }
        }
    }
}