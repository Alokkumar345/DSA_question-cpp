#include<iostream>
#include<stack>
using namespace std;

bool isvalidparanthsis(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        // opening bracket 
        // push o\in stack
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }else{
            //closing bracket
            if(!st.empty()){
                char top=st.top();
                if(ch==')' && top=='('){
                    st.pop();
                }else if(ch=='}' && top=='{'){
                    st.pop();
                }else if(ch==']' && top=='['){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }

    }
    return st.empty();
}

int main(){
    string s;
    cout<<"enter the string of paranthesis"<<endl;
    cin>>s;
    if(isvalidparanthsis(s)){
        cout<<"valid paranthesis"<<endl;
    }else{
        cout<<"invalid paranthesis"<<endl;
    }
}