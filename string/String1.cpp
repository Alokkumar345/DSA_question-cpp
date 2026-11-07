#include<iostream>
#include<cstring>
using namespace std;

// int main() {

    // char str1[] = {'a','b','c','d','\0'};
    // char str2[] = "hello";

    // int arr[] = {1,2,3,3};

    // cout << "Length of hello = "
    //      << strlen(str2) << endl;

    // cout << "Address of arr = "
    //      << arr << endl;

    // cout << "str2[5] = "
    //      << (int)str2[5] << endl; // null character

//     // Input using cin
    // char str3[100];
    // cout << "Enter a word: ";
    // cin >> str3;

    // cout << "Output: "
    //      << str3 << endl;

    // cin.ignore();

    // // Input using getline
    // char str4[100];
    // cout << "Enter a sentence: ";
    // cin.getline(str4,100);

    // cout << "Characters: ";
    // for(char ch : str4) {
    //     cout << ch << " ";
    // }

    // cout << endl;
    // cout << "Output: "
    //      << str4 << endl;

//     // Finding length manually
//     char str5[] = "apna college";

//     int len = 0;

//     for(int i=0; str5[i] != '\0'; i++) {
//         len++;
//     }

//     cout << "Length = "
//          << len << endl;

//     return 0;
// }



//  STRING ARRAY............. 
#include<string>
int main(){
    string str="alok kumar";   // dynamic => runtime resize
//     str="hello";     //resize string
//     cout<<str<<endl;

//     str="apna";
//     string str1="apna";
//     cout<<(str<str1)<<endl;
//     cout<<str.length()<<" ";
// }



// // INPUT............................

//     string str2;
//     getline(cin,str2);
//     cout<<"output : "<<str<<endl;
//     return 0;
// }


// LOOP string................................
// int main(){
//     string str="apna college";
//     // for(int i=0;i<str.length();i++){
//     //     cout<<str[i]<<" ";
//     // }

//     for(char ch:str){
//         cout<<ch<<" ";
//     }
//     return 0; 
// }

//  REVERSE CHARACTER.......................O(n)
// int main(){
//     char str[]={'a','b','c','d','\0'};
//     int n=strlen(str);
//     int st=0;
//     int end=n-1;
//     while(st<=end){
//         swap(str[st],str[end]);
//         st++;
//         end--;
//     }
//     cout<<str<<endl;

// }




//  REVERSE STRING........................................
#include<algorithm>
// int main(){
//     string str="apna college";

//     reverse(str.begin(),str.end());  // iterators
//     cout<<str<<endl;
    // for(int i=str.length();i>=0;i--){
    //     cout<<str[i]<<" ";
    // }
// }





// PALINDROME  in string
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

// int main(){
//     string chr="Ac3?e3c&a";
//     int st=0;
//     int end=chr.length()-1;
//     while(st<=end){
//         if(!isalnum(chr[st])){
//             st++;
//             continue;

//         }if(!isalnum(chr[end])){
//             end--;
//             continue;
//         }
//         if(tolower(chr[st])!=tolower(chr[end])){
//             cout<<"not plaindrome";
//         }
//         st++;
//         end--;
//     }
//     cout<<"palindrome";
// }


// REMOVE ALL oCCURENCES................................
// int main(){
//     string s="daabcbaabcbc";
//     string part="abc";
//     while(s.length()>0 && s.find(part)<s.length()){
//         s.erase(s.find(part),part.length());   
//     }
//     cout<<s<<" ";

// }



// permutation in string........................................

// class Solution {
// public:
// bool isfreqsame(int frq1[],int frq2[]){
//     for(int i=0;i<26;i++){
//         if(frq1[i]!=frq2[i]){
//             return false;
//         }
//     }
//     return true;

// }
//     bool checkInclusion(string s1, string s2) {
//         int frq[26]={0};
//     }
// };


// REVERSE WORD IN STRING......................................
// int main(){
//     string str="the pen";
//     string ans="";
//     reverse(str.begin(),str.end());
//     for(int i=0;i<str.length();i++){
//         string word="";
//         while(i<str.length() && str[i]!=' '){
//             word +=str[i];
//             i++;
//         }
//         reverse(word.begin(),word.end());
//         if(word.length()>0){
//             ans+=" "+word;

//         }
//     }
//     cout<<ans.substr(1)<<endl;
// }



// STRING COMPRESSION ........................................................
// #include<vector>
// int main(){
//     vector<char> chars = {'a','a','b','b','c','c','c'};
//     // char chars[]=  {'a','a','b','b','c','c','c'};
//     // int n = sizeof(chars) / sizeof(chars[0]);  // for array
//     int n=chars.size();
//     int idx=0;
//     for(int i=0;i<n;i++){
//         char ch=chars[i];
//         int count=0;
//         while(i<n && chars[i]==ch){
//             count++; i++;
//         }
//         if(count==1){
//             chars[idx]==ch;
//             idx++;
//         }else{
//             chars[idx]=ch;
//             idx++;
//             string str=to_string(count);
//             for(int dig: str){
//                 chars[idx]=dig;
//                 idx++;
//             }
//         }
//         i--;
//     }
//     chars.resize(idx);
//     cout<<idx;



// }