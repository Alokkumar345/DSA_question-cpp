#include<iostream>
#include<stack>
#include<vector>
using namespace std;
// Function to check whether person 'a' knows person 'b'
bool knows(vector<vector<int>> & M, int a, int b){
    if(M[a][b]==1){
        return true;
    }else{
        return false;
    }

}
int celebrity(vector<vector<int>> & M, int n){
    stack<int>s;
    for(int i=0;i<n;i++){
        // step 1: push all element
        s.push(i);
    }

    // step 2: get 2 element and compare
    while(s.size()!=1){
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();

        // If a knows b, then a cannot be a celebrity
        // So, push b back into the stack
        if(knows(M,a,b)){
            s.push(b);
        }else{
            s.push(a);
        }

    }
    int candidate=s.top();
    // step 3: single element in stack is potential celebrity
    // so verify it

    bool rowCheck=false;
    int zeroCount=0;
    for(int i=0;i<n;i++){
        if(M[candidate][i]==0){
            zeroCount++;
        }
    }
    // all zeros
    if(zeroCount==n){
        rowCheck=true;
    }

    // column check
    bool colCheck=false;
    int countOne=0;
    for(int i=0;i<n;i++){
        if(M[i][candidate]==1){
            countOne++;
        }
    }
    if(countOne==n-1){
        colCheck=true;
    }
    if(rowCheck==true && colCheck==true){
        return true;
    }else{
        return false;
    }
}
int main(){
    vector<vector<int>> arr={{1,1,0},{0,0,0},{0,1,0}};
    int n=arr.size();
    cout<<celebrity(arr,n);


}