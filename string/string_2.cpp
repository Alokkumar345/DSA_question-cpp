// #include<iostream>
// using namespace std;
// int main(){

//       // Defanging an ip address  
    
//     string address="1.1.1.1";  
  
//     int index=0;
//     string ans;  // empty string

//     while(index<address.size()){
//         if(address[index]=='.'){
//             ans+="[.]";
//             index++;

//         }else{
//             ans+=address[index];
//             index++;
//         }

//     }
//     cout<<ans<<endl;
//     return 0;
// }





// #include<iostream>
// using namespace std;
// int main(){
//     // rotate string by k times
//     string str1="amazon";
//     int k=2;
//     int n=str1.length();
//     k=k%n;  // handle case when k>n;
//     for(int i=0;i<k;i++){
//         int temp=str1[0];
//         for(int j=0;j<n-1;j++){
//             str1[j]=str1[j+1];
//         }
//         str1[n-1]=temp;
//     }
//     cout<<str1<<endl;
//     return 0;
// }






// check if string is rotated by places
// #include<iostream>
// using namespace std;

// // logic of code 
// void rotateclockwise(string &s){
//     char c=s[s.length()-1];
//     int index=s.size()-2;
//     while(index>=0){
//         s[index+1]=s[index];
//         index--;
//     }
//     s[0]=c;
// }
// void rotateanticlockwise(string &s){
//     char c=s[0];
//     int index=1;
//     while(index<s.size()){
//         s[index-1]=s[index];
//         index++;
//     }
//     s[s.size()-1]=c;
// }
// int main(){
//     string str1 = "amazon";
//     string str2 = "azonam";

//     string clockwise = str1;
//     string anticlockwise = str1;

//     rotateclockwise(clockwise);   // rotation 1 
//     rotateclockwise(clockwise);   // rotation 2
//     cout << "Clockwise rotation: " << clockwise << endl;
//     if (clockwise == str2) {
//         cout << "Clockwise rotated string matches expected value." << endl;
//     } else {
//         cout << "Clockwise rotated string does not match expected value." << endl;
//     }

//     rotateanticlockwise(anticlockwise);   // rotation 1 
//     rotateanticlockwise(anticlockwise);   // rotation 2
//     cout << "Anti-clockwise rotation: " << anticlockwise << endl;
//     if (anticlockwise == str2) {
//         cout << "Anti-clockwise rotated string matches expected value." << endl;
//     } else {
//         cout << "Anti-clockwise rotated string does not match expected value." << endl;
//     }

//     return 0;
// }






// chrck if string is pangram or not
// #include<iostream>
// using namespace std;

// int  main(){
//     string str="the quick brown fox jumps over the lazy dog";
//     int arr[26]={0};
//     int n=str.length();
//     for(int i=0;i<n;i++){
//         if(str[i]>='a' && str[i]<='z'){
//             arr[str[i]-'a']++;
//         }
//     }
//     for(int j=0;j<26;j++){
//         if(arr[j]==0){
//             cout<<"not pangram"<<endl;
//             return 0;
//         }else{
//             cout<<"pangram"<<endl;
//             return 0;
//         }

//     }
//     return 0;
// }





// sort a string 

// #include<iostream>
// using namespace std;
// int main(){
//     string str="One issue in your code: Your SEcond loop returns after checking only the first character.";
//     int n=str.length();
// //     // for(int i=0;i<n-1;i++){
// //     //     for(int j=0;j<n-1-i;j++){
// //     //         if(str[j]>str[j+1]){
// //     //             swap(str[j], str[j+1]);
// //     //         }
// //     //     }
// //     // }
// //     // cout << str << endl;


//     int arr[26]={0};
//     for(int i=0;i<n;i++){
//         int index=str[i]-'a';
//         arr[index]++;
//     }
//     for(int i=0;i<26;i++){
//         char ch='a'+i;
//         while(arr[i]>0){
//             cout<<ch;
//             arr[i]--;
//         }
//     }
//     return 0;
// }







// bubble sort a elements

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,7,9,1,2,45,77,88,9,1,0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }

//     }
//     cout<<"sorted array is:";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
// }

