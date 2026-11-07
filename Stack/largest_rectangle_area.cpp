#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// next smaller element
vector<int> nextSmallerElement(vector<int> arr, int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        // ans is stack ka top
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}

// previous smaller element
vector<int> prevSmallerElemet(vector<int> arr, int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        // ans is stack ka top
        ans[i]=s.top();
        s.push(i);
    }
    return ans; 
}
// largest rectangle area
int largestRectangleArea(vector<int>& height){
    int n=height.size();
    vector<int> next(n);
    next=nextSmallerElement(height, n);

    vector<int> prev(n);

    prev=prevSmallerElemet(height, n);
    int area=INT16_MIN;

    for(int i=0;i<n;i++){
        int l=height[i];
        if(next[i]==-1){
            next[i]=n;

        }
        int b=next[i]-prev[i]-1;
        int newArea=l*b;     // calculate area 
        area=max(area, newArea);   // find max area

    }
    return area;
}

int main(){
    vector<int> arr={2,1,5,6,2,3};
    int n=arr.size();
    cout<<largestRectangleArea(arr)<<endl;

    return 0;

}

