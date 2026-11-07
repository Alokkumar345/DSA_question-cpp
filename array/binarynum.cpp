#include<iostream>
using namespace std;
int dectobinary(int decnum){
    int ans =0, pow =1;

    while(decnum>0){
        int rem = decnum%2;
        decnum /=  2;
        ans += (rem*pow);      
        pow *= 10;
    }
    return ans;  //binary form
}

int bintodecimal(int binnum){
    int ans=0,pow=1;

    while(binnum>0){
        int rem = binnum%10;
        ans+=rem*pow;

        binnum/=10;
        pow*=2;

    }
    return ans;
}
int main(){
    // cout<<bintodecimal(101) <<endl;
    // int decnum = 50;
    for(int i=0;i<10;i++){
    cout <<dectobinary(i) <<endl;

    }
    return 0;
}