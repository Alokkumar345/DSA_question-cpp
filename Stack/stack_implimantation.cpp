#include<iostream>
#include<stack>

using namespace std;
class Stack{
    // Properties 
    public:
    int *arr;
    int top; 
    int size;

    // behaviour
    Stack(int size){
        this->size=size;
        this->arr=new int[size];
        this->top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];

        }else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }

};

int main(){
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(90);


    cout<<"Top element is: "<<st.peek()<<endl;
    st.pop();
    cout<<"Top element after pop is: "<<st.peek()<<endl;
    st.pop();
    cout<<"Top element after pop is: "<<st.peek()<<endl;
    st.pop();
    cout<<"Top element after pop is: "<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }
    return 0;
}