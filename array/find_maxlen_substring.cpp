#include<iostream>
using namespace std;
int main(){
    char s[]="abcabcbbabcefghij";
    int freq[256]={0};
    int l,r,cur_len,max_len;
    l=r=cur_len=max_len=0;
    for(r;s[r]!='\0';r++){
        freq[s[r]]++;
        while(freq[s[r]]>1){
            freq[s[l]]--;
            l++;
        }
        cur_len=r-l+1;
        if (cur_len>max_len){
            max_len=cur_len;
        }

    }
    cout<<max_len;
}
