#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &st, int element){
    // base case
    if(st.empty()){
        st.push(element);
        return;
    }
    // recursive call
    int top=st.top();
    st.pop();
    insertAtBottom(st, element); // recursive call 
    st.push(top);
}

void reverseStack(stack<int> &st){
    // base case
    if(st.empty()){
        return;
    }

    // recursive call
    int top=st.top();   // top ko store kr lenge 
    st.pop();
    reverseStack(st);   // recursive call
    // insert at Bottom
    insertAtBottom(st, top);
}

int main(){
    stack<int> st;
    st.push(90);
    st.push(98);
    st.push(77);
    st.push(66);
    reverseStack(st);
    while(!st.empty()){    // element ko print kar dega 
        cout<<st.top()<<endl;
        st.pop();
    }

}

// time ecomplexity: O(n^2)  bcs we are using recursive call and insert at bottom function is also recursive 
// space complexity: O(n) bcs recursive call 


// how work flow flow of thsi code explain:
// 1. first we are calling reverseSatck Function and we are storing top element in variable and poping it from stack
// 2. then we are calling reversestack function again and again until stack is empty 
// 3. then we are calling insertATbottom function and we are inserting top element at bottom of stack
// 4. then we are printing the stack element after reversing the stack 
// 5. then we are calculating time complexity and space complexity of the code


