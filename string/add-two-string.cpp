// add two string 
#include<iostream>
using namespace std;
#include <string>
#include <algorithm>

int main(){
    string num1="26583";
    string num2="698";
    int index1=num1.size()-1;
    int index2=num2.size()-1;
    string ans;
    int carry=0, sum;
    while(index2>=0){
        sum=num1[index1]-'0'+(num2[index2]-'0')+carry;
        carry=sum/10;  // carry fetch
        char c='0'+sum%10;    // convert in character
        ans+=c;
        index2--;
        index1--;
    }

    while(index1>=0){
        sum=num1[index1]-'0'+carry;
        carry=sum/10;
        char c='0'+sum%10;
        ans+=c;
        index1--;
    }
    if(carry>0){
        ans+='0'+carry;
    }
    reverse(ans.begin(), ans.end());

    cout << ans;
}
