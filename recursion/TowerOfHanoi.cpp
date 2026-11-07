#include<iostream>
using namespace std;
void TOH(int n, int source, int helper, int destination){
    if(n==1){
        cout<<"move disk "<<n<<" From "<<source<<" To "<<destination<<endl;
        return ;
    }
    TOH(n-1, source, destination, helper);
    cout<<"move disk "<<n<<" From "<<source<<" To "<<destination<<endl;
    TOH(n-1, helper,source, destination);
}
int main(){
    TOH(3, 1, 2, 3);
    return 0;
}