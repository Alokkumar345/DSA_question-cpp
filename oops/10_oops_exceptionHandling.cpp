# include<iostream>
using namespace std;

// Exception handling is a mechanism in object-oriented programming (OOP) to handle runtime errors or unexpected situations gracefully without terminating the program abruptly.

// When a program encounters an error during execution, it throws an exception. The program then catches that exception and handles it using special blocks.

//  It helps in:

// Detecting errors
// Reporting them
// Recovering from them
// Keeping the program running smoothly 


// try: Put the code that might produce an exception inside try.

// throw: hrow is used to send an exception.

// catch:catch receives and handles the exception.

#include <iostream>
using namespace std;

// class customer{
//     string name;
//     int balance, account_number;
//     public:
//     customer(string name, int balance, int account_number){ //  constructor of the class
//         this->name=name;
//         this->balance=balance;
//         this->account_number=account_number;
//     };

//     // deposite
//     void deposite(int amount){
//         if(amount>0){
//             balance+=amount;
//             cout<<amount<<" RS Amount is creadited successfully\n";
//         }else{
//             cout<<"amount should be greater than 0\n";    // handle error
//         }
//     }
//     // withdrow
//     void withdraw(int amount){
//         if(amount>0 && amount<=balance){
//             balance-=amount;
//             cout<<amount<<" RS is debited successfully";
//         }
//         else if(amount<0){
//             cout<<"amount should be greater than 0\n";
//         }else{
//             cout<<"your balance is low!"<<endl;  // handle error
//             cout<<"please check your account balance!";
//         }
//     }
// };

// int main() {
//     customer c1("rohit", 500, 10);
//     c1.deposite(300);
//     c1.withdraw(80000);

//     return 0;
// }



// class customer{
//     string name;
//     int balance, account_number;
//     public:
//     customer(string name, int balance, int account_number){ //  constructor of the class
//         this->name=name;
//         this->balance=balance;
//         this->account_number=account_number;
//     };

//     // deposite
//     void deposite(int amount){
//         if(amount>0){
//             balance+=amount;
//             cout<<amount<<" RS Amount is creadited successfully\n";
//         }else{
//             throw "amount should be greater than 0";  
//         }
//     }
//     // withdrow
//     void withdraw(int amount){
//         if(amount>0 && amount<=balance){
//             balance-=amount;
//             cout<<amount<<" RS is debited successfully";
//         }
//         else if(amount<0){
//             throw "amount should be greater than 0\n";
//         }else{
//             throw "your balance is low!";
//             throw "please check your account balance!";
//         }
//     }
// };

// int main() {
//     customer c1("rohit", 500, 10);
//     try{
//     c1.deposite(300);
//     c1.withdraw(80000);
//     c1.deposite(2000);
    
//     }
//     catch(const char *e){
//         cout<<"Exception occured: "<<e<<endl;
//     }

//     return 0;
// }





// #include <iostream>
// using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    try{
        if(b==0)
        throw"Division by 0 is not possible"; 
        int c=a/b;
    }
    catch(const char *e){
        cout<<"Exception Occured: "<<e<<endl;
    }

    return 0;
}