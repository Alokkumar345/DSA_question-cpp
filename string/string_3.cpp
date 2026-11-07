// #include<iostream>
// using namespace std;

// sort vowel in a string;


// int main(){
//     // leetcode   i/p
//     // eeoe   vowel i/p
//     // eeeo  sort vowel o/p
//     // leetcedo  o/p
//     string str="LEetCOde";
//     int n =str.length();
//     int arrlower[26]={0};
//     int arrupper[26]={0};
//     for(int i=0;i<n;i++){

//         // frequency store in array and replace vowel with #

//         if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'||str[i]=='u'){
//             arrlower[str[i]-'a']++;
//             str[i]='#';     // LE#tc#d#
//         }
//         if(str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'||str[i]=='U'){
//             arrupper[str[i]-'A']++;
//             str[i]='#';     // L##tc#d#
//         }
//     }
//     string vowel;  // store sorted vowel
//     //upper case vowel
//     for(int i=0;i<26;i++){
//         char ch='A'+i;
//         while(arrupper[i]>0){
//             vowel+=ch;
//             arrupper[i]--;
//         }
//     }
//     // lower case vowel
//     for(int i=0;i<26;i++){
//         char ch='a'+i;     // 'a'+0='a' 'a'+1='b';   97+0=97(a)
//         while(arrlower[i]>0)
//         {
//             vowel+=ch;
//             arrlower[i]--;
//         }

//     }

//     int first=0, second=0;     // first point to (L##tc#d# )and second point to vowel (EOee)
//     while(second<vowel.size()){
//         if(str[first]=='#'){
//             str[first]=vowel[second];
//             second++;
//         }
//         first++;
//     }
//     cout<<vowel<<endl;
//     cout<<str<<endl;
// }






// sort by frequency of character in string ans also use lexicographical order

#include<iostream>
using namespace std;
// int main(){
//     string str="geeksforgeeks";
//     int n=str.length();
//     int arr[26]={0};
//     for(int i=0;i<n;i++){
//         arr[str[i]-'a']++;
//     }
//     string ans;
//     for(int freq=1;freq<n;freq++){     // 1 to n 
//         for(int i=0;i<26;i++){       // 0 to 26
//             if(arr[i]==freq){
//                 char ch='a'+i;
//                 for(int j=0;j<freq;j++){
//                     ans+=ch;
                
//                 }
//             }
//         }
//     }
//     cout<<ans<<endl;
// }



// add two string ...............................................

#include <string>
#include <algorithm>
// int main(){
//     string num1="26583";
//     string num2="698";
//     int index1=num1.size()-1;
//     int index2=num2.size()-1;
//     string ans;
//     int carry=0, sum;
//     while(index2>=0){
//         sum=num1[index1]-'0'+(num2[index2]-'0')+carry;
//         carry=sum/10;  // carry fetch
//         char c='0'+sum%10;    // convert in character
//         ans+=c;
//         index2--;
//         index1--;
//     }

//     while(index1>=0){
//         sum=num1[index1]-'0'+carry;
//         carry=sum/10;
//         char c='0'+sum%10;
//         ans+=c;
//         index1--;
//     }
//     if(carry>0){
//         ans+='0'+carry;
//     }
//     reverse(ans.begin(), ans.end());

//     cout << ans;
// }


// // find length without using inbult function only logic apply
// int main(){
//     string str="Factorial of Large Number Integer to Roman Roman to Integer";
//     int count=0;
//     for(int i=0;str[i]!='\0';i++){
//         count++;
//     }
//     cout<<count;
// }