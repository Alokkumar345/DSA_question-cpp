#include<iostream>
using namespace std;
// void reachHome(int src, int dest){
//     cout<<"source "<<src<<" dest "<<dest<<endl;
//     //  base caes
//     if(src==dest){
//         cout<<"pahuch gaya "<<endl;
//         return ;
//     }
//     //processing 
//     src++;

//     // recursive call
//     reachHome(src,dest);

// }
// int main(){
//     int dest=10;
//     int src=1;
//     cout<<endl;
// reachHome(src,dest);
// }


// fibonacchi........................................
// int fib(int n){
//     if(n==0)
//     return 0;
//     if(n==1)
//     return 1;

//     int ans=fib(n-1)+fib(n-2);
//     return ans;
// }
// int main(){
//     int n=7;
//     cout<<fib(n);

// }


// stair...........................................
// int stair(int n){
//     // base case
//     if(n<0)
//     return 0;
//     if(n==0)
//     return 1;
     // recursive call !..................
//     int ans=stair(n-1)+stair(n-2);
//     return ans;
// }
// int main(){
//     int n=3;
//     cout<<stair(n)<<" ";

// }


// say digit.....................................
// void saydigit(int n, string arr[]){
//     //base case
//     if(n==0)
//     return ;
//     //processing
//     int digit=n%10;
//     n=n/10;
//     // cout<<arr[digit]<<" ";
//     //recursive call
//     saydigit(n,arr);
//     cout<<arr[digit]<<" "; 
// }
// int main(){
//     string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//     int n;
//     cin>>n;
//     cout<<endl<<endl;
//     saydigit(n, arr);
//     cout<<endl<<endl;
// }

void reverstring(string &s , int start, int end){
     if(start>=end){
          return;
     }
     swap(s[start], s[end]);
     reverstring(s, start+1, end-1);

}
int main(){
     string s="hello";
     reverstring(s, 0, s.size()-1);
     cout<<s<<" ";
}