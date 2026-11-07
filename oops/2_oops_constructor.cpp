# include<iostream>
using namespace std;

// class Customer{

//     string name;
//     int account_number;
//     int balance;
//     int *roi;
//     public:

//     Customer(){  // default constructor
//         cout<<"hello constructor"<<endl;
//         name="Alok";
//         account_number=5;
//         balance=100;
//         roi=new int[100];
//     }
//     void display(){   // method  
//         cout<<name<<" "<<account_number<<" "<<balance<<endl;
//     }

//     // Customer(string name, int account_name, int balance){  // parameterised constructor
//     //     this->name=name;
//     //     this->account_number=account_number;
//     //     this->balance=balance;
//     // }

//     // constructor overloading
//     Customer(string a, int b){
//         name=a;
//         account_number=b;
//         balance=50;
//     }


//     // inline constructor
//     inline Customer(string a , int b, int c): name(a), account_number(b), balance(c){
//     }
    

// }; 
// int  main(){

//     // default constructor
//     Customer A1;
//     A1.display();

// // parameterise constructor
//     // Customer A2("Rohit", 23, 4546); 
//     // A2.display();
     
//      // inline constructor
//     Customer A3("Nitish",24, 7686);
//     Customer A4(A3);
//     A4.display();
// }




// Destructor: A destructor is a special function in a class that is automatically called when an object is destroyed.

class customer{
    public:
    string name;
    int *balance;


    customer(string name, int bal){
        this-> name=name;
        balance=new int;  // dynamic memory
        *balance=bal;
    }
    ~customer(){  // destructor call itself
        cout<<name;

    }
};

int main(){
    customer A1("alok", 10000);
}