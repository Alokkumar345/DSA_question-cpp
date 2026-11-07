#include<iostream>
#include<stack>
using namespace std;
// insert at bottom function
void sortedInsert(stack<int> &st, int element){
    // base case
    if(st.empty() || st.top()<element){
        st.push(element);
        return;
    }
    // recursive case
    int top=st.top();
    st.pop();
    sortedInsert(st, element);
    st.push(top);
}

// sort stack function
void sortStack(stack<int> &st){
    // base case
    if(st.empty())
        return;

    // recursive call
    int top=st.top();
    st.pop();
    sortStack(st);
    // insert
    sortedInsert(st, top);
}

int main(){
    stack<int> st;
    st.push(90);
    st.push(89);
    st.push(900);
    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}
// time complexity=O(n^2) bcs we are using recursive call and insert function is also recursive 
// space complexity=O(n) bcs we are using recursion 