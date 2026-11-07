#include<iostream>
#include<stack>

using namespace std;
int main(){
    // create a stack of integers
    stack<int>s;
    //push elements in stack
    s.push(10);
    s.push(19);
    // s.push(198);
    // s.push(1799);
    // s.push(2000);

    // pop elements from stack
    // s.pop();
    // print the all elements of stack

    cout<<"Printing the top element of stack:"<<s.top()<<endl;


    // while(!s.empty()){
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    cout<<"size of stack is: "<<s.size()<<endl;
    return 0;
}
