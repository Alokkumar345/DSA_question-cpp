# include<iostream> 
#include <cmath>
using namespace std;

//Abstraction is the process of showing only the important details and hiding the unnecessary implementation details.

// Example: When you drive a car, you use the steering wheel and pedals without knowing how the engine works internally.

class customer{
    string name;
    int balance;
    public:
    customer(string a , int b){
        name=a;
        balance=b;
    }
    void deposite(int amount){
        if(amount>0){
            balance+=amount;   
        }else{
            cout<<" "<<endl;
        }
    }
    void display(){ 
        cout << name << " " << balance;
    } 

};

int main(){
    customer A1("alok", 10000);
    A1.deposite(-700);
    A1.display();
    cout<<" ";

    cout<<pow(2,4);  // power
}