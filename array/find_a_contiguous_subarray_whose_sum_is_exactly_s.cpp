#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,7,5};
    int n=5;
    int s=12;
    int sum=0;
    int l,r;
    l=r=0;
    bool flag=false;
    for(r;r<n;r++){
        sum=sum+arr[r];
        while(sum>s){
            sum=sum-arr[l];
            l++;
        }
        if(sum==s){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"Not Found";
        return 0;
    }
    for(int i=l;i<=r;i++){
        cout<<arr[i]<<" ";
    }
}


