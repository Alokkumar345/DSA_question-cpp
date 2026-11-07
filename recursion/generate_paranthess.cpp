#include<iostream>
#include<vector>
using namespace std;
void parantheses(int n, int left, int right, vector<string> &ans, string &temp){
    if(left+right==2*n){
        ans.push_back(temp);
        return ;
    }

    // left
    if(left<n){
        temp.push_back('(');
        parantheses(n, left+1, right, ans, temp);
        temp.pop_back();   // remove 
    }
    // right 
    if(right<left){

        temp.push_back(')');
        parantheses(n , left, right+1, ans, temp);
        temp.pop_back();
    }
}

int main(){
    vector<string> ans;
    string temp;
    int left=0, right=0;
    parantheses(3,left, right,ans, temp );
    // for (string s : ans) {
    //     cout << s << endl;
    // }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}