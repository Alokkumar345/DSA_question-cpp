// #include<iostream>
// using namespace std;
// .......................................................................
// n natural number using recursion

// int num(int n){
//     if(n==0){
//         return 0;
//     }
//     cout<<n<<" ";
//     num(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     // int n=10;
//     num(4);
// }


// // using function sum of n natural number;................................
// int sumnum(int n){
//     int sum =0;
//     for(int i=0;i<n;i++){
//         sum+=i;
//     }
//     cout<<sum;
// }
// int main()
// {
//     sumnum(10);
// }


// print even ......................................................
// #include<iostream>
// using namespace std;
// int printeven(int n){
//     if(n==2){
//         cout<<n<<" ";
//         return 0;
//     }
//     printeven(n-2); // 10 → 8 → 6 → 4 → 2  
//     cout<<n<<" ";  
// }
// int main(){
//     int n=10;
//     if(n%2==0){
//         n--;
//     }
//     printeven(n);

// }



// print odd ..............................................................
// #include<iostream>
// using namespace std;
// int oddNum(int n){
//     if(n==1){
//         cout<<n<<" ";
//         return 0;
//     }
//     // cout<<n<<" ";
//     oddNum(n-2);
//     cout<<n<<" ";
// }
// int main(){
//     int n=19;
//     if(n%2==0){
//         n--;
//     }
//     oddNum(n);

// }


// sum of n natural number
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int sum2=n+sum(n-1);
//     return sum2; 
// }
// int main(){
//     int n=10;
//     cout<<sum(n);
//     return 0;
// }


// Fcatorial...............................
#include<iostream>
using namespace std;
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     int factorial=n*fact(n-1); 
//     return factorial;
// }
// int main(){
//     int n=5;
//     cout<<fact(n);
// }


// Power of 2..........................................
// int power(int num, int n){
//     if(n==0){
//         return num;
//     }
//     return num*power(num, n-1);
// }
// int main(){
//     cout<<power(2, 4); 
// }




// sum of squre of N number..........................................
// int sqnum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*n+sqnum(n-1);
// }
// int main(){
//     cout<<sqnum(4);
//     return 0;
// }



// Febinnachi series................................
// without recursion
// int main(){
//     int n=10;
//     int a=0;
//     int b=1;
//     for(int i=0;i<n;i++){
//         cout<<a<<" ";
//         int c=a+b;
//         a=b;
//         b=c;
//     }
// }



// int fib(int n){
//     if(n==0){
//         return 0;
//     }if(n==1){
//         return 1;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     cout<<fib(2)<<" ";
//     return 0;
// }


// Nth stair.....................................
// int stair(int n){
//     if(n==1){
//         return 1;
//     }
//     if(n==2){
//         return 2;
//     }
//     return stair(n-1)+stair(n-2);
// }

// int main(){
//     cout<<stair(4);
//     return 0;
// }



// using loop...........................................
// int main(){
//     int n=4;
//     int a=1, b=1;
//     for(int i=2;i<=n;i++){
//         int c=a+b;
//         a=b;
//         b=c;
//         cout<<b;
//     }
//     // cout<<b;

//     return 0;
// }



// GCD........................

// 12 ke factors: 1, 2, 3, 4, 6, 12
// 18 ke factors: 1, 2, 3, 6, 9, 18
// Common factors: 1, 2, 3, 6

// int GCD(int a, int b){
//     if(b==0){
//         return a;
//     }
//     return GCD(b, a%b);
// }
// int main(){
//     int a=18;
//     int b=48;
//     cout<<GCD(a, b);
// }

// basic logic
// int main(){
//     int a=12, b=18;
//     int gcd=1;
//     for(int i=1;i<=min(a, b);i++){
//         if(a%i==0 && b%i==0){
//             gcd=i;
//         }
//     }
//     cout<<gcd;
// }