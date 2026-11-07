#include<iostream>
#include<stack>

using namespace std;
class Twostack{
    int *arr;
    int top1;
    int top2;
    int size;
public:
    Twostack(int size){
        this->size=size;
        this->top1=-1;
        this->top2=size;
        this->arr=new int[size];

    }

    // push stack 1
    void push1(int element){
        if(top2-top1>1){   // atlast ek space present hoga dono stack be beech me 
            top1++;
            arr[top1]=element;
        }else{
            cout<<"stack overflow"<<endl;
        }
    }
    void push2(int element){
        if(top2-top1>1){   // atlast ek space present hoga dono stack be beech me 
            top2--;
            arr[top2]=element;
        }else{
            cout<<"stack overflow"<<endl;
        }
    }
    int pop1(){
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }else{
            cout<<"stack is underflow"<<endl;
            return -1;
        }
    }
    int pop2(){
        if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }else{
            cout<<"stack is underflow"<<endl;
            return -1;
        }
    }
};

int main(){
    Twostack st(5);
    st.push1(50);
    st.push2(60);
    st.push1(70);
    st.push2(80);
    cout<<"Popped from stack 1: "<<st.pop1()<<endl;
    cout<<"Popped from stack 2: "<<st.pop2()<<endl;
    cout<<"Popped from stack 1: "<<st.pop1()<<endl;

}




