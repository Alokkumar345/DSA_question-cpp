#include<iostream>
#include<math.h>
using namespace std;
// int main(){
//     char name='a';
//     for(name='a';name<='z';name++){
//         cout<<int(name)<<endl;
//     }
//     cout<<"sucessfully print  small alphabet!";

// }


// int main(){
//     int v=99;
//     int a='A';  //65
//     char b='a'; // 97
//     int c=a+b;  // 162
//     int d=a+v;  //164
//     cout<<d;
// }

// int main(){
//     string name="alok kumar In C++, you can find the length of a string in a few simple ways depending on the type you’re using";
//     cout<<"before reverse string:"<<endl;
//     for(int i=0;i<name.length();i++){
//         cout<<name[i];
//     }
//     cout<<endl;
//     cout<<"after reverse string:"<<endl;

//     for(int i=name.length();i>=0;i--){
//         cout<<name[i];
//     }

// }



// int main(){
//     int n;
//     cout<<"enter a number:";
//     cin>>n;
//     for(int i=n;i<=100;i=i+5){  //0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100
//         cout<<i<<" ";
//     }
// }


// void table(int n){
//     for(int i=1;i<=10;i++){
//         cout<<n<<"X"<<i<<"="<<n*i<<endl;
//     }
// }
// int main(){
//     table(8);
//     table(67);
//     table(88);
//     table(5);
//     table(90);
// }


// int main(){
//     int n;
//     int count=0;
//     cin>>n;
//     if(n<2){
//         cout<<"not prime";
//         return 0;
//     }else{
//         for(int i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"not prime";
//             return 0;
//         }
//     }
//     cout<<"prime";

//     }
// }



// int main(){
// int n=20;
// int last=0;
// int pre=1;
// int curr=0;
// cout<<last<<' ';
// cout<<pre<<" ";
// for(int i=0;i<=n;i++){
//     curr=last+pre;
//     last=pre;
//     pre=curr;
//     cout<<curr<<" ";
    
// }
// // cout<<curr;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=101101;
//     int ans=0;
//     int mul=1;

//     while(n>0){
//         int digit=n%10;
//         ans+=digit*mul;
//         n/=10;
//         mul*=2;
//     }
//     cout<<ans;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int num=24;
//     int sum=0;
//     int mul=1;
//     while(num>0){
//         int digit=num%2;
//         num/=2;
//         sum+=digit*mul;
//         mul*=10;
//     }
//     cout<<sum;
// }
