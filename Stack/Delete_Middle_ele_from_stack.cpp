#include<iostream>
#include<stack>

using namespace std;
class Stack{
    // Properties variable intialization
    public:
    int *arr;
    int top; 
    int size;

    // behaviour   
    Stack(int size){     // constructor intialization the value of size and top
        this->size=size;
        this->arr=new int[size];
        this->top=-1;
    }
    void push(int element){  // push element
        if(top-size>1){      // space check in stack
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){  // remove top element from stack
        if(top>=0){
            top--;
        }else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek(){  // retune top element from stack
        if(top>=0){
            return arr[top];

        }else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){  // check stack is empty or not
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }
    void solve(int count, int middle){   // solve function delete middle element from stack
        // Base case
        if(count==size/2){   // middle element ko delete kar dega
            pop();
            return;
        }
        // Recursive case
        int element=peek();
        pop();       // pop element from stack
        solve(count+1, middle);  // recursive coll we start count+1 bcs we have already poped element from stack
        push(element);
    }

    // Delete middle element from stack
    void deleteMiddle(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        int middle=size/2;
        solve(0, middle);
    }
};
int main(){
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(90);

    cout << "Original top: " << st.peek() << endl;
    st.deleteMiddle();
    cout << "Top after deleting middle: " << st.peek() << endl;
    cout<<"Top element is: "<<st.peek()<<endl;
    st.pop();
    cout<<"Top element after pop is: "<<st.peek()<<endl;
    st.pop();
    cout<<"Top element after pop is: "<<st.peek()<<endl;
    st.pop();
    cout<<"Top element after pop is: "<<st.peek()<<endl;

    // if(st.isEmpty()){
    //     cout<<"Stack is empty"<<endl;
    // }else{
    //     cout<<"stack is not empty"<<endl;
    // }
    return 0;
}
