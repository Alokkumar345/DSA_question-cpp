# include<iostream>
using namespace std;

// Encapsulation is the process of combining data and the functions that use it inside a class, while keeping the data protected from direct access.

// It is like placing data inside a capsule and allowing access through controlled methods.

class Customer{
    public:
    string name;
    int balance, account_num,age;
    public:
    Customer(string name, int balance, int account_num, int age){  // constructor
        this->name=name;
        this->balance=balance;
        this->account_num=account_num;
        this->age=age;
    }
    void deposit(int amount){  
        if(amount>0)
        balance+=amount;
        else
        cout<<"invalid";
        cout<<endl;
    }
    void update_age(int age){
        if(age>0 && age <100){
            this->age = age;
        }else{
            cout<<"not valid";
            cout<<endl;
        }
    }
    void display(){
        cout<<name<<" "<<balance<<" "<<account_num<<" "<<age;
    }

};

int main(){
    Customer A1("alok", 1000000, 3, 21);
    A1.deposit(100);
    A1.deposit(-200);
    A1.update_age(77);
    A1.display();

}