# include<iostream>
using namespace std;

// Static data member → one shared memory for the whole class
// tell me how much customer in bank

class customer{
    string name;
    int acc_num, balance;

    // const means the value cannot be changed after it is initialized.
    // static means one shared copy for the entire class, not a separate copy for every object.
    static int total_balance;
    static int total_customer;    // access with object

    public:
    // static int total_customer;   // access without object
    // static int total_balance;

    customer(string name, int account_number, int balance){
        this-> name = name;
        this-> acc_num=account_number;
        this-> balance=balance;
        total_customer++;
        total_balance+=balance;
    }

    static void accestatic(){   // static coll from functions
        cout<<total_customer<<endl;
        cout<<total_balance<<endl;
    }

    void deposite(int amount){
        if(amount>0){
            balance+=amount;
            total_balance+=balance;
        }

    }
    void withdrow(int amount){
        if(amount<=balance && amount>0){
            balance-=amount;
            total_balance-=amount;

        }
    }
    void display(){
        cout<<name<<" "<<acc_num<<" "<<balance<<" "<<total_customer<<endl;
    }
    void display_total(){
        cout<<total_customer<<" ";
    }
};
int customer::total_customer=0;  // single copy of memeory
int customer::total_balance=0;

int main(){
    customer A1("alok", 1, 1000);
    customer A2("nitish",2,2000);
    // A1.display();
    // A2.display();
    customer A3("kll",2,788);
    // A3.display();
    // A2.display_total();


    A1.deposite(700);
    A2.withdrow(500);
    customer::accestatic();


}



