#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[], int start, int mid, int end){
    vector<int> temp(end-start+1);

    int left=start, right=mid+1, index=0;
    // left array.................................................
    while(left <=mid && right <=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++;
            left++;
        }else{
            temp[index]=arr[right];
            index++, right++;
        }

    }
    // left array rest element
    while(left<=mid){
        temp[index]=arr[left];
        index++;
        left++;
    }

    // right array rest element...............................................
    while(right<=end){
        temp[index]=arr[right];
        index++, right++;
    }
    // put these value in arrya
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++;
        index++;

    }

}
void mergsort(int arr[], int start, int end){

    if(start==end){  // single element
        return ;
    }

    int mid=start+(end-start)/2;
    mergsort(arr, start, mid);   // left
    mergsort(arr, mid+1, end);   // right
    merge(arr, start, mid, end);     // merge
    

}
int main(){
    int arr[]={2,5,2,3,4,8,9,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergsort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}