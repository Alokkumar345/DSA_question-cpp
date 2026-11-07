#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st, int element){
    // base case
    if(st.empty()){
        st.push(element);  // empty stack me element ko push kar dega 
        return;
    }
    int top=st.top();  // top ko store kar lega
    st.pop();     // remove kar dega top ko
    insertAtBottom(st, element);  // phale coll karega jb tk satack emty na ho jaye
    st.push(top);   // uske bad top ko push kar dega 

};

int main(){
    stack<int>st;
    st.push(1);
    st.push(8);
    st.push(3);
    st.push(5);
    st.push(8);
    insertAtBottom(st, 1000);
    while(!st.empty()){    // element ko print kar dega 
        cout<<st.top()<<endl;
        st.pop();
    }
}


