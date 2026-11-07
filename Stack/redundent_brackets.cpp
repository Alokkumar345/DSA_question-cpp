
#include<iostream>
#include<stack>
using namespace std;

bool isRedundant(string s){
    stack<char> st;    

    for(int i=0; i<s.size(); i++){
        char ch=s[i];

        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            st.push(ch);
        }
        else{
            if(ch==')'){
                bool isRedundant=true;  // create  bool (T/F) 
                while(st.top()!='('){
                    char top=st.top();
                    if(top=='+' || top=='-' || top=='*' || top=='/'){
                        isRedundant=false;
                    }
                    st.pop();  // wo element ko hata de rahe hai
                }
                if(isRedundant==true){
                    return true;
                }
                st.pop();  // open bracket ko pop krne ke liye 
            }
        }
    }
    return false;
}
int main(){
    string s = "(a+b)";

    if(isRedundant(s)){
        cout << "Redundant Brackets";
    }
    else{
        cout << "Not Redundant";
    }
    return 0;
}


