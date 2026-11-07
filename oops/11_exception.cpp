#include<iostream>
#include<exception>
using namespace std;

class Exception{
    protected:
    string msg;


    public:
    Exception(string msg){
        this->msg=msg;
    }
    string what(){
        return msg;
    }
};

class runtime_error : public exception{
    public:
    runtime_error(const string &msg): exception(msg);

};



class customer{
    string name;
    int balance, account_number;
    public:
    customer(string name, int balance, int account_number){ //  constructor of the class
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
    };

    // deposite
    void deposite(int amount){
        if(amount>0){
            balance+=amount;
            cout<<amount<<" RS Amount is creadited successfully\n";
        }else{
            throw runtime_error("amount should be greater than 0");  
        }
    }
    // withdrow
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<amount<<" RS is debited successfully";
        }
        else if(amount<0){
            throw runtime_error("amount should be greater than 0");
        }else{
            throw runtime_error("your balance is low!");
            throw runtime_error("please check your account balance!");
        }
    }
};

int main() {
    customer c1("rohit", 500, 10);
    try{
    c1.deposite(300);
    c1.withdraw(80000);
    c1.deposite(2000);
    
    }
    catch(const runtime_error &e){
        cout<<"Exception occured: "<<e.what()<<endl;
    }

    return 0;
}



