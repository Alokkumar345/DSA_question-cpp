#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    int oddcount=0;
    int l,r,cur_len,max_len;
    l=r=cur_len=max_len=0;
    for(r=0;r<n;r++){
        if(arr[r]%2!=0){
            oddcount++;
        }
        while(oddcount>2){
            if(arr[l]%2!=0){
                oddcount--;
            }
            l++;
        }
        cur_len=r-l+1;
        if(cur_len>max_len){
            max_len=cur_len;
        }

    }
    cout<<max_len;
}