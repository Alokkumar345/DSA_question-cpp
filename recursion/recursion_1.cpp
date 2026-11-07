#include<iostream>
using namespace std;
// factorial...........................................................
int factorial(int n){
    if(n==0){    // base case
        return 1;
    }
    int chotti=factorial(n-1);
    int badi=n*chotti;
    return badi;
}

int main(){
    int n;
    cin>> n;
    int ans=factorial(n);
    cout<<"factorial: "<<ans<<" ";
    return 0;

}


// power of 2 ......................................

// int power(int n){  // function 
//     // base case
//     if(n==0)
//     return 1;

//     // recursion relation
//     int smallerProblem=power(n-1);
//     int bigproblem=2*smallerProblem;
//     return bigproblem;
// }
// int main(){
//     int  n;
//     cin>>n;
//     int ans=power(n);   // call
//     cout<<"power of 2 :"<<ans<<endl;
//     return 0;
// }


// print counting.......................................
// void count(int n){
//     if(n==0){ //base case
//         return;
//     }
//     // cout<<n<<endl;
//     count(n-1);  // RR(recursive relation)
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;
//     count(n);

//     return 0;
// }