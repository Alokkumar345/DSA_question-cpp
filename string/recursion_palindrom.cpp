#include<iostream>
using namespace std;

// plaindrom .........................................................................
// bool checkpalindrom(string str, int start, int end){
//     // base case
//     if(start>=end)
//         return 1;

//         // not match
//     if(str[start]!=str[end]){
//         return 0;
//     }

//     // matched 
//     return checkpalindrom(str, start+1, end-1); // recursive call
// }
// int main(){
//     string str ="mo";
//     cout<<checkpalindrom(str, 0, str.length()-1)<<endl;

// }


// VOWEL COUNT........................................................................
// int count(string str, int index){
//     if(index==-1){
//         return 0;
//     }
//     // vowel hoga 
//     if(str[index]=='a'|| str[index]=='e'|| str[index]=='i'|| str[index]=='o'|| str[index]=='u')
//     return 1+count(str, index-1);

//     // nhi hoga 
//     else
//     return count(str, index-1);

// }
// int main(){
//     //count vowel
//     string str="rohit";
//     cout<<count(str, 4)<<endl;
//     return 0;
// }




// REVESRE STRING......................................................
// void rev(string &str, int s, int e){    // direct change show hogi main fun me as a pass by refrence
//     if(s>=e){
//         return;
//     }
//     char c=str[s];
//     str[s]=str[e];
//     str[e]=c;

//     return rev(str, s+1, e-1);
// }
// int main(){
//     string str="abcdefghijklmnopQrstuvwxyz";
//     rev(str, 0, str.length()-1);
//     cout<<str;
//     return 0;
// }


// Lower Case to Upper Case...................................................................
// void lowerTOupper(string &str, int index){
//     if(index==-1){
//         return;
//     }
//     str[index]='a'+str[index]-'A';
//     lowerTOupper(str, index-1);
    
// }
// int main(){
//     string str="ALOK";
//     lowerTOupper(str, str.length()-1);
//     cout<<str<<" ";
//     return 0;
// }



// Reverse string ..................................................................................
// #include<iostream>
// #include<vector>
// using namespace std;
// void reversstr(string str, int index){
//     if(index<0){
//         return;
//     }
//     cout<<str[index]<<" ";
//     return reversstr(str, index-1);
// }
// int main(){
//     string str="alok";
//     reversstr(str, str.size()-1);
//     return 0;
// }